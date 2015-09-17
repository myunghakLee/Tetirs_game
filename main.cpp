#include<iostream>
#include<fstream>
#include<curses.h>
#include<windows.h>
#include<time.h>
#include"scrine.h"


void make_terminal();

int main(int argc, char* argv[])
{
	std::cout << "테트리스 게임을 시작합니다." << std::endl;
	std::cout << "사용자 이름을 입력하세요." << std::endl;
	std::cout << "이름 : ";

	

	std::ifstream instream;
	instream.open("input.txt");
	char name[50];
	if (instream.fail())
	{
		std::cin >> name;
		srand(time(NULL));
	}
	else
	{
		instream >> name;
		int a;
		instream >> a;
		srand(a);

	}

	make_terminal();

	scrine sc;
	sc.print_scrine(name);
}

void make_terminal()
{

	initscr();

	noecho();
	resize_term(25, 50);
	keypad(stdscr, TRUE);
	curs_set(0);
	border('|', '|', '-', '-', '+', '+', '+', '+');
	refresh();

	clear();
}