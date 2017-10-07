#include "shudu.h"

bool RowCheck(int answer[9][9],int row, int SubNum)
{
	bool same = false;
	for (int i = 0; i < 9; i++)
	{
		if (answer[row][i] == SubNum) 
		{
			same = true;
			break;
		}
	}
	return same;
}
bool ColCheck(int answer[9][9],int col, int SubNum)
{
	bool same = false;
	for (int i = 0; i < 9; i++)
	{
		if (answer[i][col] == SubNum)
		{
			same = true;
			break;
		}
	}
	return same;
}
bool SubCheck(int answer[9][9],int row, int col, int SubNum)
{
	bool same = false;
	int SubRow = (row / 3) * 3;
	int SubCol = (col / 3) * 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (answer[SubRow + i][SubCol + j] == SubNum)
			{
				same = true;
				break;
			}
		}
	}
	return same;
}