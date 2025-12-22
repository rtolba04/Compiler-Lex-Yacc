const runBtn = document.getElementById("runBtn");
const codeInput = document.getElementById("codeInput");
const outputBox = document.getElementById("outputBox");
const gutter = document.getElementById("gutter");

// Update line numbers in gutter based on textarea content
function updateLineNumbers() {
    const lines = codeInput.value.split(/\r?\n/);
    const nums = lines.map((_, i) => i + 1).join("\n");
    gutter.innerHTML = `<pre>${nums}</pre>`;
}

// Sync gutter scroll with textarea
codeInput.addEventListener("scroll", () => {
    gutter.scrollTop = codeInput.scrollTop;
});

// Update numbers on input/load/change
codeInput.addEventListener("input", updateLineNumbers);
codeInput.addEventListener("change", updateLineNumbers);
window.addEventListener("load", updateLineNumbers);

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
        const out = data.output || data.error || "";

        // Escape HTML to avoid injection
        function escapeHtml(str) {
            return str
                .replace(/&/g, "&amp;")
                .replace(/</g, "&lt;")
                .replace(/>/g, "&gt;")
                .replace(/"/g, "&quot;")
                .replace(/'/g, "&#039;");
        }

        // Split into lines and add coloring spans for warnings and errors
        const lines = out.split(/\r?\n/);
        const html = lines.map(line => {
            const esc = escapeHtml(line);
            if (esc.includes("Syntax Error") || esc.includes("Semantic Error")) {
                return `<span class="error">${esc}</span>`;
            } else if (esc.includes("Warning:")) {
                return `<span class="warning">${esc}</span>`;
            } else {
                return `<span>${esc}</span>`;
            }
        }).join("\n");

        outputBox.innerHTML = html || "No output.";

    } catch (err) {
        outputBox.innerHTML = `<span class="error">Failed to reach backend.</span>`;
        console.error(err);
    }
});
