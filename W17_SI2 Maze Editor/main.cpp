#include "CommandManager.h"
#include "Maze.h"
#include <iostream>

int main()
{
	//std::vector<std::string> vec{ "moja", "pierwsza", "komenda" };
	//auto l1 = [](auto vec) {for (auto e: vec) std::cout << e;};
	//Maze labirynt;


	//cmd.registerCommand("place", l1);
	CommandManager cmd;
	cmd.runProgram();

	//labirynt.displayMaze();

	//place <type> <x> <y>
	//	load <file>
	//	save <file>
	//	help
	//	exit


	return 0;
}