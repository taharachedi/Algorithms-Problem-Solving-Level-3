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


bool is_Equal(short arr1[3][3], short arr2[3][3],short Rows,short Cols) {
	return Sum_Matrix(arr1, Rows, Cols) == Sum_Matrix(arr2, Rows, Cols);
	
}



int main()
{
	system("color f2");
	srand((unsigned)time(NULL));

	short arr1[3][3]; 

	Fill_Random_Matrix(arr1, 3, 3); 
	cout << "\nMatrix1:\n";
	Print_Matrix(arr1, 3, 3);
	cout << "\nSum1 : " << Sum_Matrix(arr1, 3, 3) << endl;  

	short arr2[3][3]; 

	Fill_Random_Matrix(arr2, 3, 3); 
	cout << "\nMatrix2:\n"; 
	Print_Matrix(arr2, 3, 3); 
	cout << "\nSum2 : " << Sum_Matrix(arr2, 3, 3) << endl; 

	if (is_Equal(arr1, arr2,3,3))
		cout << "\nYES: Matrices are Equal \n";
	else
		cout << "\nNO: Matrices are Not Equal \n";


	system("color 8F");
    return 0;
}
