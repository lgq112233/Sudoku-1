#include "shudu.h"

bool RowCheck(int answer[9][9],int row, int shift)
{
	bool success = false;
	for (int i = 0; i < 9; i++)
	{
		if (answer[row][i] == shift) 
		{
			success = true;
			break;
		}
	}
	return success;
}
bool ColCheck(int answer[9][9],int col, int shift)
{
	bool success = false;
	for (int i = 0; i < 9; i++)
	{
		if (answer[i][col] == shift)
		{
			success = true;
			break;
		}
	}
	return success;
}
bool SubCheck(int answer[9][9],int row, int col, int shift)
{
	bool success = false;
	int SubRow = (row / 3) * 3;
	int SubCol = (col / 3) * 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (answer[SubRow + i][SubCol + j] == shift)
			{
				success = true;
				break;
			}
		}
	}
	return success;
}