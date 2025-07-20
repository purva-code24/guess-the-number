# guess-the-number

-----

## Number Guessing Game

This is a simple console-based number guessing game written in C. The game generates a random number between 1 and 100, and the player has to guess it.

### How to Play

1.  The game will prompt you to "guess the number between 1 to 100".
2.  Enter your guess and press Enter.
3.  If your guess is too high, the game will tell you "lower no. please\!".
4.  If your guess is too low, the game will tell you "higher no. please\!".
5.  The game continues until you guess the correct number.
6.  Once you guess correctly, it will display the number of attempts you took.

### Features

  * **Random Number Generation:** Uses `rand()` and `srand(time(0))` to generate a unique random number for each game.
  * **User Feedback:** Provides hints (higher/lower) to guide the player.
  * **Attempt Counter:** Tracks and displays the number of guesses taken.

### Technologies Used

  * C Programming Language

