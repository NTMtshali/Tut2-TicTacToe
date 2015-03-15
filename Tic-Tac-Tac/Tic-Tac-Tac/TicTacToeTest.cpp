#include <iostream>
using namespace std;
#include "TicTacToe.h"

int main(void)
{
	TicTacToe TTTgame;
	
	int i=0;
	int numb;
	
	do
	{

		
		if (i % 2 == 0)
		{
			TTTgame.printBoard();
			cout <<"\n"<<"player1 play a position:" << endl;
			cin >> numb;
			while (!TTTgame.Move(numb, 'x'))
			{
				cout << "please enter another position";
				cin >> numb;
			}
		
		}

		if (i % 2 != 0)
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

	} while (!TTTgame.iWon());

	return 0;
}