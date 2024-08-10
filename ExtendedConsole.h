#pragma once
#include <iostream>
#ifndef EXTENDEDCONSOLE
namespace Console {
	void clearConsole() { std::cout << "\033[2J\033[1;1H"; }
	void setForeground(std::string color) {
		if (color == "black") { std::cout << "\x1b[30m"; }
		if (color == "red") { std::cout << "\x1b[31m"; }
		if (color == "green") { std::cout << "\x1b[32m"; }
		if (color == "yellow") { std::cout << "\x1b[33m"; }
		if (color == "blue") { std::cout << "\x1b[34m"; }
		if (color == "magenta") { std::cout << "\x1b[35m"; }
		if (color == "cyan") { std::cout << "\x1b[36m"; }
		if (color == "white") { std::cout << "\x1b[37m"; }
	}
	void setBackgroundColor(std::string color) {
		if (color == "black") { std::cout << "\x1b[40m"; }
		if (color == "red") { std::cout << "\x1b[41m"; }
		if (color == "green") { std::cout << "\x1b[42m"; }
		if (color == "yellow") { std::cout << "\x1b[43m"; }
		if (color == "blue") { std::cout << "\x1b[44m"; }
		if (color == "magenta") { std::cout << "\x1b[45m"; }
		if (color == "cyan") { std::cout << "\x1b[46m"; }
		if (color == "white") { std::cout << "\x1b[47m"; }
	}
	void resetForeground() { std::cout << "\x1b[39m"; }
	void resetBackground() { std::cout << "\x1b[39m"; }
	void setTextStyle(int id) {
		if (id == 1) { std::cout << "\x1b[1m"; }
		if (id == 2) { std::cout << "\x1b[3m"; }
		if (id == 3) { std::cout << "\x1b[4m"; }
		if (id == 4) { std::cout << "\x1b[9m"; }
	}
	void resetALL() {
		std::cout << "\x1b[0m";
	}
}
#endif
