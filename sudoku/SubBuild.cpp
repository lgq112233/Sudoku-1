#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "shudu.h"
using namespace std;
bool success = false;
int RanCreater(int size);
bool SubBuild(int answer[9][9],int shift)
{
	int x, y;
	int subrow = (shift / 3) * 3;
	int subcol = (shift % 3) * 3;
	int tmp;
	
	if (shift == 0)
	{
		for (int i = 1; i < 9; i++)
		{
			x = subrow + i / 3;
			y = subcol + i % 3;
			tmp = RanCreater(8) + 2;
			if (!RowCheck(answer, x, tmp)&&!SubCheck(answer, x, y, tmp) && !ColCheck(answer, y, tmp)  )
			{
				answer[x][y] = tmp;
			}
			else i--;
		}
	}
	else if(shift>0)
	{
		int Count = 0;
		tmp = rand()%9+1;
		for (int i = 0; i < 9; i++)
		{
			x = subrow + i / 3;
			y = subcol + i % 3;
			tmp++;
			tmp = tmp % 10;
			if (!SubCheck(answer, x, y, tmp) &&  !RowCheck(answer, x, tmp)&& !ColCheck(answer, y, tmp)&&tmp!=0)
			{
				answer[x][y] = tmp;
				Count = 0;
			}
			else
			{
				i--;
				Count++;
			}
			if (Count > 10)
			{
				return false;
				break;
			}
		}
	}
	return true;
}
void print_answer(int answer[9][9]) {
	for (int p = 0; p < 9; p++)
	{
		for (int q = 0; q < 9; q++)
		{
			cout << answer[p][q] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int RanCreater(int size)
{
	int x = rand() % size;
	return x;
}