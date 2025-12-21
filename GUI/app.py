from flask import Flask, render_template, request
import subprocess, os

app = Flask(__name__)

@app.route('/')
def index():
    return render_template("index.html")

@app.route('/compile', methods=['POST'])
def compile_file():
    file = request.files['sourcefile']
    filepath = os.path.join("uploads", file.filename)
    os.makedirs("uploads", exist_ok=True)
    file.save(filepath)

    # Run your compiler
    result = subprocess.run(["mycompiler.exe", filepath], capture_output=True, text=True)

    return render_template("result.html", output=result.stdout, errors=result.stderr)

if __name__ == '__main__':
    app.run(debug=True)