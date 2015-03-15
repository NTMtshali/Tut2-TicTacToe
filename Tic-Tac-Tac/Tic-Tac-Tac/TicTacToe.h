/*Author: Ndumiso Mtshali(213522460)*/
/*Interface*/
#ifndef TicTacToe_H
#define TicTacToe_H

#include <iostream>
using namespace std;

class TicTacToe
{
	private:
		char Board[3][3]; // Character Board to be used for playing

	public:
		TicTacToe(); //default construct which initializes the object
		bool iWon();// boolean function checks for the winner after the two players have played after each turn.
		bool check(char); //boolean function checks for a column, diagonal or row with 3 signs of the same type(x's or o's)
		bool Move(int, char ); // boolean function checks whether a move is valid
		void printBoard(); // prints the current state of the board
};
#endif