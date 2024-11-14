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


bool is_Identity_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j  &&  arr[i][j] != 1) 
				return false;
					
			else if (i != j  &&  arr[i][j] != 0)
				return false;

		}
	}
	return true;
}



int main()
{
    short arr[3][3] = { {1,0,0 },{0,1,0},{0,0,1} };

	cout << "\nMatrix1: \n";
	Print_Matrix(arr, 3, 3);


	if (is_Identity_Matrix(arr, 3, 3))
		cout << "\nYES: Matrix is Identity \n";
	else
		cout << "\nNO: Matrix is Not Identity\n";


	system("color 8F");
    return 0;
}
