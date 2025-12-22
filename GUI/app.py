from flask import Flask, render_template, request, jsonify
import subprocess
import os

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/run", methods=["POST"])
def run_compiler():
    data = request.get_json()
    code = data.get("code", "")

    if not code.strip():
        return jsonify({"error": "No code provided."})

    # Write code to text.txt
    with open("text.txt", "w", encoding="utf-8") as f:
        f.write(code)

    # Check compiler existence
    if not os.path.exists("compiler.exe"):
        return jsonify({"error": "compiler.exe not found."})

    try:
        result = subprocess.run(
            ["compiler.exe", "text.txt"],
            capture_output=True,
            text=True,
            shell=True,
            timeout=10
        )

        output = ""
        if result.stderr:
            output += result.stderr
        if result.stdout:
            output += result.stdout


        return jsonify({"output": output.strip() or "No output."})

    except subprocess.TimeoutExpired:
        return jsonify({"error": "Compilation timed out."})
    except Exception as e:
        return jsonify({"error": str(e)})

if __name__ == "__main__":
    app.run(debug=True)
