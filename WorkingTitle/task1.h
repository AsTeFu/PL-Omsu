int Task1();

int GetMatrixFromFile(char **matrix);
int GetDimensionMatrix(int &rows, int &columns);
int SaveMatrix(char **matrix, int rows, int columns);

int PrintMatrix(char **matrix, int rows, int columns);

int Swap(char &a, char &b);

int BubbleSortMatrix(char **matrix, int rows, int columns);
int BubbleSort(char* array, int length);

int InsertionSortMatrix(char **matrix, int rows, int columns);
int InsertionSort(char *array, int length);

int SelectionSortMatrix(char **matrix, int rows, int columns);
int SelectionSort(char *array, int length);