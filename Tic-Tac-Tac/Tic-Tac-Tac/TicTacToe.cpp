#include <iostream>
#include "TicTacToe.h"
#include <string>
using namespace std;

TicTacToe::TicTacToe()
{
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


bool TicTacToe::iWon()
{
	if (check('x'))
	{
		cout <<"\n"<<" Player1 You won" << endl;
		printBoard();
		return check('x');
	}

	if (check('0'))
	{
		cout << "Player2 You won" << endl;
		printBoard();
		return check('0');
	}
}

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

void TicTacToe::printBoard()
	{
		int i;
		int j;

		cout << '[' << Board[0][0] << '|' << Board[0][1] << '|' << Board[0][2] << ']' << "\n"
			 << '[' << Board[1][0] << '|' << Board[1][1] << '|' << Board[1][2] << ']' << "\n"
			 << '[' << Board[2][0] << '|' << Board[2][1] << '|' << Board[2][2] << ']' << endl;
	}