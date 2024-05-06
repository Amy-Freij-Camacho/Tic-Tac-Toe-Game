# Tic-Tac-Toe Game

<h2>Description</h2>
This program is a simple implementation of Tic Tac Toe in C, allowing two players to play on a 3x3 board. Players take turns entering row and column numbers to place their mark ('X' or 'O') on the board. The game continues until one player wins by forming a line of their marks horizontally, vertically, or diagonally, or until the board is full, resulting in a draw.
<br />


<h2>Languages </h2>

- <b>C Programming Language</b> 


<h2>Environments Used </h2>

- <b>Eclipse</b> 

<h2>Program walk-through:</h2>

<p align="side">
Initialization: <br/>
<br />The game initializes by setting up the game board with empty cells represented by '-' characters.
<br />
<br />The initial state of the board is printed to the console.
<br />
<br />
<br />
Game Loop:  <br/>
<br />- Players take turns entering their moves. They specify the row and column numbers where they want to place their mark.
<br />
<br />- Input validation ensures that the entered row and column numbers are within the valid range and that the selected cell is not already occupied.
<br />
<br />- The game board is updated with the player's mark after a valid move.
<br />
<br />- After each move, the board is printed again to show the current state.
<br />
<br />
<br />
Win or Draw Detection: <br/>
<br />- After each move, the program checks if the current player has achieved a winning configuration.
<br />
<br />- If a player wins, the game ends, and the winning player is announced.
<br />
<br />- The game board is updated with the player's mark after a valid move.
<br />
<br />- If the board is full and no player has won, the game ends in a draw.
<br />
<br />
<br />
User Interaction:  <br/>
<br />- Players interact with the game by entering row and column numbers via the console.
<br />
<br />- Error messages are displayed for invalid inputs, prompting the player to enter a valid move.
<br />

</p>
<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
