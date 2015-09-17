#ifndef __block__
#define __block__

class block
{
private:
	int up;

public:
	virtual int get_blcok(const int&, const int&) const { return 0; }
	int change_up(int a);
	int get_up() const;
};

class tetrimino_0 :public block
{
private:
	int block_shape[4][4][4];
public:
	virtual int get_block(const int& x, const int& y) const;
	tetrimino_0();
};







#endif