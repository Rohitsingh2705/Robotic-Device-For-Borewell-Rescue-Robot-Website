// Example JavaScript for updating live data (using placeholders)
// Replace with actual data fetching and updating logic based on your hardware

function updateLiveReadings() {
    // Example: Fetch temperature and humidity data from API or hardware
    const temperature = 25.5; // Example temperature
    const humidity = 50; // Example humidity

    // Update DOM elements
    document.getElementById('temperature').textContent = temperature.toFixed(1);
    document.getElementById('humidity').textContent = humidity.toFixed(1);

    // Example for updating sensor readings
    const sensor1Data = 24.8; // Example sensor 1 temperature
    const sensor2Data = 26.2; // Example sensor 2 temperature

    document.getElementById('sensor1').textContent = sensor1Data.toFixed(1);
    document.getElementById('sensor2').textContent = sensor2Data.toFixed(1);
}

// Call the function to update readings initially and optionally set an interval
updateLiveReadings();
// Uncomment the line below to update readings every 5 seconds (example)
// setInterval(updateLiveReadings, 5000);
