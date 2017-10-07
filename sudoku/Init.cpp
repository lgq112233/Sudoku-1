#include<iostream>
void InitAll(int answer[9][9])
{
	for (int r = 0; r < 9; r++)
	{
		for (int c = 0; c < 9; c++)
			answer[r][c] = 0;
	}
	answer[0][0] = 1;

}
void InitRest(int answer[9][9])
{
	for (int r = 3; r < 9; r++)
	{
		for (int c = 0; c < 9; c++)
			answer[r][c] = 0;


	}
	for (int r = 0; r < 3; r++)
	{
		for (int c = 3; c < 9; c++)
			answer[r][c] = 0;
	}
}


