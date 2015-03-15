/*Author: Ndumiso Mtshali(213522460)*/
/*Testing the class TicTacToe*/
#include <iostream>
using namespace std;
#include "TicTacToe.h"

int main(void)
{
	TicTacToe TTTgame;
	
	int i = 0; //counter which determines which player should play.
	int numb; //This variable holds the position that is played by a player.
	
	do
	{

		
		if (i % 2 == 0)// player1 playes when i is even.
		{
			TTTgame.printBoard();
			cout <<"\n"<<"player1 play a position:" << endl;
			cin >> numb;
			while (!TTTgame.Move(numb, 'x')) /* while loop that allows for the validation of the move played. A false
											 is returned by the called function if the move is invalid. This causes the player to be prompted for another move.
											 Otherwise the played move is set with the relevent sign and a true is returned*/ 
			{
				cout << "please enter another position";
				cin >> numb;
			}
		
		}

		if (i % 2 != 0) // player2 playes when i is odd.
		{
			TTTgame.printBoard();
			cout <<"\n"<<"player2 play a position:" << endl;
			cin >> numb;
			while (!TTTgame.Move(numb, 'o'))
			{
				cout << "please enter another position";
				cin >> numb;
			}
		}

		i++;

	} while (!TTTgame.iWon());// checking for the winner after each move.

	return 0;
}