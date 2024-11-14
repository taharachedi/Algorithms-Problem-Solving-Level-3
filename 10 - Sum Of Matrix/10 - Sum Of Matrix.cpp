#include <iostream>
#include <cstdio>

using namespace std;

short Random_Number(short From, short To) {
    return rand() % (To - From + 1) + From;
}


void Fill_Random_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = Random_Number(1, 10);
		}
	}
}


void Print_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d  ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}


short Sum_Matrix(short arr[3][3], short Rows, short Cols) {

	short Sum = 0;
	 
	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++) 
		{
			Sum += arr[i][j];
		}
	}
	return Sum; 
}


int main()
{
	system("color f4");
	srand((unsigned)time(NULL));

	short arr[3][3];
	
	Fill_Random_Matrix(arr, 3, 3);
	cout << "Matrix1: \n";
	Print_Matrix(arr, 3, 3);

	cout << "\nSum Of Matrix1 is : " << Sum_Matrix(arr, 3, 3) << endl;
	system("color 8F");
    return 0;
}
