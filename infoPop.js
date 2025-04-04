// Get all buttons with class hoverBtn
var buttons = document.querySelectorAll(".hoverBtn");

// Get the info popup
var infoPopup = document.getElementById('infopopup');

// Loop through each button to attach click event
buttons.forEach(function(button) {
    button.onclick = function() {
        // Get the data-target value from the clicked button
        var targetId = this.getAttribute("data-target");

        // Find the corresponding info-content by ID
        var infoContent = document.getElementById(targetId);

        // Display the info popup and corresponding content
        infoPopup.style.display = "block";
        infoContent.style.display = "block";
    }
});

// When the user clicks on <span> (x), close the login popup
function closeLogin() {
    infoPopup.style.display = "none";

    // Also hide all info-content elements
    var infoContents = document.querySelectorAll(".info-content");
    infoContents.forEach(function(content) {
        content.style.display = "none";
    });
}
