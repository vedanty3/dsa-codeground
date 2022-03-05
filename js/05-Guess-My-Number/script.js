'use strict';

let secretNumber = Math.trunc(Math.random() * 20) + 1;
let score = 20;
let highScore = 0;

function displayMessage(message) {
  document.querySelector('.message').textContent = message;
}

document.querySelector('.check').addEventListener('click', function () {
  const guess = Number(document.querySelector('.guess').value);
  if (!guess) {
    document.querySelector('.message').textContent = '😅 No number!';
  } else if (guess === secretNumber) {
    // document.querySelector('.message').textContent = '🎉 Correct guess!';
    displayMessage('🎉 Correct guess!');
    document.querySelector('body').style.backgroundColor = '#a80572';
    document.querySelector('.number').textContent = secretNumber;
    document.querySelector('.number').style.width = '30rem';
    if (score > highScore) {
      highScore = score;
      document.querySelector('.highscore').textContent = highScore;
    }
  } else if (guess != secretNumber) {
    if (score > 1) {
      displayMessage(guess > secretNumber ? '🔺 Too high!' : '🔻 Too low!');
      // document.querySelector('.message').textContent =
      //   guess > secretNumber ? '🔺 Too high!' : '🔻 Too low!';
      score--;
      document.querySelector('.score').textContent = score;
    } else {
      displayMessage('😭 You lost!');
      // document.querySelector('.message').textContent = '😭 You lost!';
      document.querySelector('.score').textContent = 0;
    }
  }
});

document.querySelector('.again').addEventListener('click', function () {
  score = 20;
  secretNumber = Math.trunc(Math.random() * 20) + 1;
  document.querySelector('.message').textContent = 'Start guessing...';
  document.querySelector('.score').textContent = score;
  document.querySelector('.number').textContent = '?';
  document.querySelector('.guess').value = '';
  document.querySelector('body').style.backgroundColor = '#222';
  document.querySelector('.number').style.width = '15rem';
});
