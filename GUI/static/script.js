// Fade-in animation for output
window.onload = function() {
    const outputBox = document.querySelector('.output');
    if (outputBox) {
        outputBox.style.opacity = 0;
        setTimeout(() => {
            outputBox.style.transition = "opacity 1s";
            outputBox.style.opacity = 1;
        }, 200);
    }
};