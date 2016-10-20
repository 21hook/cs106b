/**
 * grid.cpp
 *
 * topics: 
 * 		1. notaion
 * 		2. APIs
 * 		3. parameter, assignmet by value(deep copy => copy by value)
 * 		3. usage: game board, image, table, nestd html...
 * 		
 */
#include "simpio.h"
#include "grid.h" // for Grid Class

/**
 * grid as parameter(pass by value)
 */

Grid<char> createBoard(int x, int y) {
	Grid<char> board(x, y);// notation: Grid<primitives> name; => Grid<paraType> name;

	for(int row=0; row<board.numRows(); row++) {
		for(int col=0; col<board.numCols(); col++) {
			board[row][col] = ' '; // APIs: board[i][j] => board.get(int i, int j); board[i][j] = value => board.setAt(int i, int j, paraType value)
		}
	}
	return board;
}

int main()
{
	Grid gameBoard<char> = createBoard(3, 3); // assignmet(copy by value)

	return 0;
}