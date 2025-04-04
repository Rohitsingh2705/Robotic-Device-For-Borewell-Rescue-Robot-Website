// Get the login popup
var loginPopup = document.getElementById('loginPopup');

// Get the button that opens the login popup
var loginBtn = document.getElementById("loginBtn");

// When the user clicks on the button, open the login popup
loginBtn.onclick = function() {
    loginPopup.style.display = "block";
}

// When the user clicks on <span> (x), close the login popup
function closeLogin() {
    loginPopup.style.display = "none";
}

// Handle form submission
document.getElementById("loginForm").onsubmit = function(event) {
    event.preventDefault(); // Prevent the form from submitting

    // Perform your authentication logic here (e.g., check username and password)
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;

    // Example authentication logic (replace with your actual logic)
    if (username === "RUDRAKSHA" && password === "GG") {
        // Redirect to another page upon successful login
        window.location.href = "sidebar.html"; // Replace with your desired redirect URL
    } else {
        alert("Invalid username or password. Please try again.");
    }

    // Close the login popup regardless of authentication result
    loginPopup.style.display = "none";
};











// Get the login popup
var aboutus_popup = document.getElementById('aboutus_popup');

// Get the button that opens the login popup
var aboutUs = document.getElementById("aboutUs");

// When the user clicks on the button, open the login popup
aboutUs.onclick = function() {
    aboutus_popup.style.display = "block";
}

// When the user clicks on <span> (x), close the login popup
function closeeLogin() {
    aboutus_popup.style.display = "none";
}







