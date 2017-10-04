
bool RowCheck(int answer[9][9], int row, int shift);
bool ColCheck(int answer[9][9], int col, int shift);
bool SubCheck(int answer[9][9], int row, int col, int shift);
bool SubBuild(int answer[9][9],int shift);
void InitAll(int answer[9][9]);
void InitRest(int answer[9][9]);
void print_answer(int answer[9][9]);
bool AnswerCheck(int answer[9]);
