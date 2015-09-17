#include"block.h"


int block::change_up(int a)
{
	up += a;

	up %= 4;
}
int block::get_up() const
{
	return up;
}

tetrimino_0::tetrimino_0() :block()
{
	int dummy[4][4][4] =
		//���� ȸ��0
	{ { { 1, 1, 0, 0 },
	{ 1, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 } },
	//���� ȸ��1
	{ { 1, 1, 0, 0 },
	{ 1, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 } },
	//���� ȸ��2
	{ { 1, 1, 0, 0 },
	{ 1, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 } },
	//���� ȸ��3
	{ { 1, 1, 0, 0 },
	{ 1, 1, 0, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 0, 0 } } };
}

int tetrimino_0::get_block(const int& x, const int& y) const
{
	return block_shape[get_up()][y][x];
}