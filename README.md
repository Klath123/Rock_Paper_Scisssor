# Rock_Paper_Scisssor
Overview
This is a simple Rock-Paper-Scissors game implemented in C. The program allows a player to compete against the computer in the classic game, where:

Scissors beat Paper
Rock beats Scissors
Paper beats Rock
The game runs in a continuous loop until the player exits manually.

How It Works
Computer's Choice:

The computer generates a random number between 0 and 100.
Based on this random number:
If the number is ≤ 33, the computer chooses Scissors.
If the number is > 33 and ≤ 66, the computer chooses Rock.
If the number is > 66, the computer chooses Paper.
Player's Input:

The player is prompted to enter:
1 for Scissors
2 for Rock
3 for Paper
If the player enters an invalid choice, the program re-prompts until a valid input is provided.
Game Logic:

The game() function determines the winner:
If both the player and the computer choose the same option, it's a draw.
The rules of Rock-Paper-Scissors are applied to determine the winner otherwise.
Result Display:

The program displays the computer's choice.
It announces whether the player won, lost, or if it was a draw.
Replay:

After every round, the game restarts automatically.
