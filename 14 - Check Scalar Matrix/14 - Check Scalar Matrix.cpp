#include <iostream>
#include <iomanip>

using namespace std;


void Print_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

bool is_Scalar_Matrix(short arr[3][3], short Rows, short Cols) {

	short FirstDiag = arr[0][0];

	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++) 
		{
			if (i == j && arr[i][j] != FirstDiag)
				return false;

			else if (i != j && arr[i][j] != 0)
				return false;
		
		}
	}
	return true;
}


int main()
{
	short arr[3][3] = { {3,0,0},{0,3,0},{0,0,3} };

	cout << "\nMatrix1: \n";
	Print_Matrix(arr, 3, 3);


	if (is_Scalar_Matrix(arr, 3, 3)) 
		cout << "\nYES: Matrix is Scalar \n";
	else
		cout << "\nNO: Matrix is Not Scalar\n";


	system("color 8F");
    return 0;
}
