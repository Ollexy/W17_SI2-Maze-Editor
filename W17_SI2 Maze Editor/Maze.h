#pragma once
#include <fstream>
#include <iostream>
#include <string>


class Maze
{
private:
	char mazeBoard[5][10];
public:
	Maze();
	void initializeMaze();
	void placeCharacter(char sign, int x, int y);
	char readCharacter(int x, int y);
	void displayMaze();
	void displayHelp();
	void readFromFile();
	void writeToFile();
};
