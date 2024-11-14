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



bool are_Typical(short arr1[3][3], short arr2[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				return false;
		}
	}
	return true;
}



int main()
{
	system("color 3F");
	srand((unsigned)time(NULL));

	short arr1[3][3];

	Fill_Random_Matrix(arr1, 3, 3);
	cout << "\nMatrix1 : \n";
	Print_Matrix(arr1, 3, 3);


	short arr2[3][3]; 

	Fill_Random_Matrix(arr2, 3, 3); 
	cout << "\nMatrix2 : \n"; 
 	Print_Matrix(arr2, 3, 3); 


	if (are_Typical(arr1, arr2, 3, 3))  
		cout << "\nYES: Matrices are Typical \n";      
	else
		cout << "\nNO: Matrices are Not Typical \n";  


	system("color 8F");
    return 0;
}
