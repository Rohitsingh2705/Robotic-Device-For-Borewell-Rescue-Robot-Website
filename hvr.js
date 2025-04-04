// Get all elements with class 'hoverBtn'
const buttons = document.querySelectorAll('.hoverBtn');

// Loop through each button and add event listeners
buttons.forEach(button => {
  const cardId = button.getAttribute('data-card-id');
  const card = document.getElementById(cardId);

  button.addEventListener('mouseenter', function() {
    if (card) {
      card.style.display = 'block';
    }
  });

  // Keep the card visible when hovering over it
  if (card) {
    card.addEventListener('mouseenter', function() {
      card.style.display = 'block';
    });

    card.addEventListener('mouseleave', function() {
      card.style.display = 'none';
    });
  }

  button.addEventListener('mouseleave', function() {
    if (card) {
      card.style.display = 'none';
    }
  });
});
