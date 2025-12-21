const runBtn = document.getElementById("runBtn");
const codeInput = document.getElementById("codeInput");
const outputBox = document.getElementById("outputBox");

runBtn.addEventListener("click", async () => {
    const code = codeInput.value.trim();

    if (!code) {
        outputBox.textContent = "Error: No code provided.";
        return;
    }

    outputBox.textContent = "Running compiler...";

    try {
        const response = await fetch("/run", {
            method: "POST",
            headers: {
                "Content-Type": "application/json"
            },
            body: JSON.stringify({ code })
        });

        const data = await response.json();
        outputBox.textContent = data.output || data.error;

    } catch {
        outputBox.textContent = "Failed to reach backend.";
    }
});
