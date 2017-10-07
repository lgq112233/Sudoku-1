#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "shudu.h"
using namespace std;



int main(int argc,char *argv[])
{
	//int C;
	//cin >> C;

	int answer[9][9];
	int C = atoi(argv[argc - 1]);
	ofstream answerout;
	answerout.open("sudoku.txt");
	if (C >0)
	{
		bool back;
		int TryTimes = 0;
		srand((unsigned)time(NULL)); 
		int i = 0;
		while(i < C)
		{
			back = false;
			if (TryTimes > 0&&TryTimes<1000)
			{
				InitRest(answer);
			}
			else if (TryTimes==0)
			{
				InitAll(answer);
				SubBuild(answer, 0);
			}
			else if(TryTimes>=100)
			{
				InitAll(answer);
				SubBuild(answer, 0);
			}
			for (int j = 1; j < 9; j++)
			{
				bool success = SubBuild(answer, j);
				if (!success)
				{ 
					back = true;
					break;
				}
			}
			if (back)
			{
				TryTimes++;
			}
			else
			{
				for (int x = 0; x < 9; x++)
				{
					for (int y = 0; y < 9; y++)
					{
						answerout << answer[x][y] << ' ';
					}
					answerout << endl;
					if (x == 8)
						answerout<< endl;
				}
				
				TryTimes = 0; 
				i++;
			}
		}
		answerout.close();
	}
	else cout << "Please input a natural number" << endl;
	return 0;
}
