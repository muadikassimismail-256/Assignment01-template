# Homework
In this homework assignment, you will build a simple text-based game in C++. The game consists of a 5x5 grid where the player can move around, collect items, and avoid traps. Your task is to complete the following exercises to build the game step by step.<br>
## Exercise 1: Initialize the Game Board
Write a function called initialize_board that initializes a 5x5 board with zeros, items, and traps.<br>
### Hints:<br>
• Use 2D arrays to represent the board.<br>
• Manually place some items (denoted with 1) and traps (denoted with -1) on the board.<br>
• void initialize_board(int board[rows][cols])<br>
## Exercise 2: Display the Game Board
Write a function called display_board to display the current state of the board.<br>
### Hints:<br>
• Use nested loops to print each cell of the board.<br>
#### Example Output:<br>
0 0 0 0 0<br>
0 1 0 0 0<br>
0 0 -1 0 0<br>
0 0 0 0 0<br>
0 0 0 0 0<br>
## Exercise 3: User Movement
Write a function called move_cursor that allows the user to move a cursor within the game board. Ask the user to input a direction: 'U' for "up", 'D' for "down", 'L' for "left", 'R' for "right". And make sure that no invalid characters are inserted.<br>
### Hints:<br>
• void move_cursor(int &x, int &y, char direction)<br>
## Exercise 4: Collecting Items and Avoiding Traps
Write a function called check_position that checks whether the cursor has moved onto an item or a trap and updates the score accordingly. If the player collects an item his score increases by 10, if he walks into a trap, his score decreases by 10.<br>
#### Example Output:<br>
Item collected!<br>
or<br>
You hit a trap!<br>
## Exercise 5: Update the board
Write a function called update_board that updates the board. In case the current position is on an item, the item is collected and the 1 on the board is replaced with a 0.<br>
## Write the main function of the game
Write a main function that lets the player perform a certain number of moves (say 10) and then prints out his score at the end.<br>
### Hints:<br> 
• The output should look something like this:<br>

Current position (0,0)<br>
0 0 0 0 0<br>
0 1 0 -1 0<br>
0 0 -1 0 0<br>
0 0 -1 0 1<br>
0 -1 1 1 0<br>
Enter direction to go (U, D, L, R):D<br>
Current position (1,0)<br>
0 0 0 0 0<br>
0 1 0 -1 0<br>
0 0 -1 0 0<br>
0 0 -1 0 1<br>
0 -1 1 1 0<br>
Enter direction to go (U, D, L, R):R<br>
Item collected!<br>
Current position (1,1)<br>
0 0 0 0 0<br>
0 0 0 -1 0<br>
0 0 -1 0 0<br>
0 0 -1 0 1<br>
0 -1 1 1 0<br>
7<br>
Enter direction to go (U, D, L, R):D<br>
Current position (2,1)<br>
0 0 0 0 0<br>
0 0 0 -1 0<br>
0 0 -1 0 0<br>
0 0 -1 0 1<br>
0 -1 1 1 0<br>
