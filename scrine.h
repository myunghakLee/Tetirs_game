#ifndef __scrine__
#define __scrine__


#include<curses.h>
#include<iostream>



class score_scrine
{
private:
	WINDOW *score_win;
	int score;
public:
	score_scrine()
	{
		score_win = newwin(4, 10, 4, 30);
		wbkgd(score_win, COLOR_PAIR(1));

		score = 0;

	}
	void score_plus();
	void draw() const;
};

class user_name_scrine
{
private:
	WINDOW *user_name_win;
public:
	user_name_scrine()
	{
		user_name_win = newwin(4, 10, 10, 30);
	}
	void draw(char name[]) const;
};


class scrine
{
private:
	WINDOW *main_win;
	score_scrine score_win;
	user_name_scrine name_win;
	int fild[20][13];
public:
	scrine()
	{
		main_win = newwin(20, 22, 2, 2);
		for (int i = 0; i <= 19; i++)//ºó°ø°£
			for (int j = 1; j <= 12; j++)
				fild[i][j] = 0;
		for (int i = 0; i <= 18; i++)//º®
		{
			fild[i][0] = 10;
			fild[i][11] = 10;
			fild[i][12] = 10;
		}
		for (int i = 0; i <= 12; i++)//º®
		{
			fild[19][i] = 10;
		}
	}
	void draw() const;
	void print_scrine(char name[]);
	void gamming();
	void reprint_scrine();
};


#endif