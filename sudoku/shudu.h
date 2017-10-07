
bool RowCheck(int answer[9][9], int row, int SubNum);
bool ColCheck(int answer[9][9], int col, int SubNum);
bool SubCheck(int answer[9][9], int row, int col, int SubNum);
bool SubBuild(int answer[9][9],int SubNum);
void InitAll(int answer[9][9]);
void InitRest(int answer[9][9]);
void print_answer(int answer[9][9]);