#include"scrine.h"
#include<iostream>

void score_scrine::draw() const
{

	wbkgd(score_win, COLOR_PAIR(1));
	wattron(score_win, COLOR_PAIR(1));
	mvwprintw(score_win, 1, 1, "score");
	mvwprintw(score_win, 2, 1, "%d", score);
	wborder(score_win, '|', '|', '-', '-', '+', '+', '+', '+');
	wrefresh(score_win);


}

void score_scrine::score_plus()
{
	score++;
	draw();
}

void user_name_scrine::draw(char name[]) const
{

	wbkgd(user_name_win, COLOR_PAIR(1));
	wattron(user_name_win, COLOR_PAIR(1));
	mvwprintw(user_name_win, 1, 1, "NAME");
	mvwprintw(user_name_win, 2, 1, "%s", name);
	wborder(user_name_win, '|', '|', '-', '-', '+', '+', '+', '+');
	wrefresh(user_name_win);

}

void scrine::draw() const
{
	

	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	bkgd(COLOR_PAIR(1));
	bkgd(COLOR_PAIR(2));


	wattron(main_win, COLOR_PAIR(2));
	for (int i = 1; i <= 18; i++)
		mvwprintw(main_win, i, 1, "¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à");
	wattroff(main_win, COLOR_PAIR(2));
	wborder(main_win, '|', '|', '-', '-', '+', '+', '+', '+');
	wrefresh(main_win);
}

void scrine:: print_scrine(char name[])
{
	draw();
	score_win.draw();
	name_win.draw(name);
	gamming();
}
void scrine::gamming()
{
	
	reprint_scrine();




	char a;
	std::cin >> a;
}

void scrine::reprint_scrine()
{
	fild[1][1] = 1;
	for (int i = 1; i < 19; i++)
	{
		for (int j = 1; j < 12; j++)
		{
			if (fild[i][j] == 1)
			{
				wattron(main_win, COLOR_PAIR(1));
				mvprintw(main_win,i, j * 2 - 1, "¡á");
				wattroff(main_win, COLOR_PAIR(1));
			}
			else
			{
				wattron(main_win, COLOR_PAIR(2));
				mvprintw(i, j * 2 - 1, "¡à");
				wattroff(main_win, COLOR_PAIR(2));
			}

		}
	}



	wrefresh(main_win);
}