/*Author: Ndumiso Mtshali(213522460)*/
/*Implementation*/
#include <iostream>
#include "TicTacToe.h"
#include <string>
using namespace std;

TicTacToe::TicTacToe()
{
	//Initialize the elements of the Board array with number characters
	Board[0][0] = '1';
	Board[0][1] = '2';
	Board[0][2] = '3';
	Board[1][0] = '4';
	Board[1][1] = '5';
	Board[1][2] = '6';
	Board[2][0] = '7';
	Board[2][1] = '8';
	Board[2][2] = '9';
}

/*function checks for a winner. A true is returned to the calling function
depending on which if statement was executed and then the relevent player that won is printed on screen. Otherwise a false is returned to the calling function.*/
bool TicTacToe::iWon()
{
	 
	if (check('x'))		// If a column, diagonal, or row of 3 x's is found true is retuned.
	{
		cout <<"\n"<<" Player1 You won" << endl;
		printBoard();
		return true;
	}

	if (check('0')) // If a column, diagonal, or row of 3 o's is found true is retuned.
	{
		cout << "Player2 You won" << endl;
		printBoard();
		return true;
	}

	else
	{

		return false; 
	}
}

	/*checks for a column, diagonal, or row with the same sign. If either of these is found a true is returned to
	the calling function otherwise a false is returned to it.*/
bool TicTacToe:: check(char sgn)
{
	
	if (Board[0][0] == sgn && Board[0][1] == sgn && Board[0][2] == sgn)
	{
		return true;
	}
	if (Board[1][0] == sgn && Board[1][1] == sgn && Board[1][2] == sgn)
	{
		return true;
	}
	if (Board[2][0] == sgn && Board[2][1] == sgn && Board[2][2] == sgn)
	{
		return true;
	}
	if (Board[0][0] == sgn && Board[1][0] == sgn && Board[2][0] == sgn)
	{
		return true;
	}
	if (Board[0][1] == sgn && Board[1][1] ==sgn &&  Board[2][1] == sgn)
	{
		return true;
	}
	if (Board[0][2] ==sgn && Board[1][2] == sgn && Board[2][2] == sgn)
	{
		return true;
	}
	if (Board[0][0] == sgn && Board[1][1]==sgn && Board[2][2] == sgn)
	{
		return true;
	}
	if (Board[2][0] == sgn && Board[1][1] == sgn && Board[0][2] == sgn)
	{
		return true;
	}

	else
		return false;
}

bool TicTacToe::Move(int numb, char sgn)
{
	/*checks whether a position played is valid. If its valid the position is set with the relevent sign(x or o) 
	then a true is returned to the calling function otherwise a false is returned to it. */
	switch (numb)
	{
	case 1 : if (Board[0][0] !=sgn)
				{
					Board[0][0] = sgn;
					return true;
				}
			 else
				{
					return false;
				}
		   break;
	case 2: if (Board[0][1] != sgn)
	{
		Board[0][1] = sgn;
		return true;
	}
			else
			{
				return false;
			}
			break;
	case 3: if (Board[0][2] != sgn)
	{
		Board[0][2] = sgn;
		return true;
	}
			else
			{
				return false;
			}
			break;

	case 4: if (Board[1][0] != sgn)
			{
				Board[1][0] = sgn;
				return true;
			}
			else
			{
				return false;
			}
			break;
	case 5: if (Board[1][1] != sgn)
			{
				Board[1][1] = sgn;
				return true;
			}
			else
			{
				return false;
			}
			break;
	case 6: if (Board[1][2] != sgn)
			{
				Board[1][2] = sgn;
				return true;
			}
			else
			{
				return false;
			}
			break;
	case 7: if (Board[2][0] != sgn)
			{
				Board[2][0] = sgn;
				return true;
			}
			else
			{
				return false;
			}
			break;
	case 8: if (Board[2][1] != sgn)
			{
				Board[2][1] = sgn;
				return true;
			}
			else
			{
				return false;
			}
			break;
	case 9: if (Board[2][2] != sgn)
			{
				Board[2][2] = sgn;
				return true;
			}
			break;
	default:
			return false;
			break;
	}
}

/*The function prints the current state of the board*/
void TicTacToe::printBoard()
	{
		
		cout << '[' << Board[0][0] << '|' << Board[0][1] << '|' << Board[0][2] << ']' << "\n"
			 << '[' << Board[1][0] << '|' << Board[1][1] << '|' << Board[1][2] << ']' << "\n"
			 << '[' << Board[2][0] << '|' << Board[2][1] << '|' << Board[2][2] << ']' << endl;
	}