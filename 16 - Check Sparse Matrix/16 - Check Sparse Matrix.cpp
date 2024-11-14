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
		cout << endl;
	}
}



short Count_Number_In_Matrix(short arr[3][3], short Rows, short Cols,short Num) {

	short Count = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] == Num)
				Count++;
		}
	}
	return Count; 
}

bool is_Sparse_Matrix(short arr[3][3], short Rows, short Cols) {

	short Count_Zero = Count_Number_In_Matrix(arr, Rows, Cols, 0);   
	short Matrix_Size = Rows * Cols;

	return (Count_Zero >= (Matrix_Size - Count_Zero));   
	// return (Count_Zero >= ceil ((float) Matrix_Size / 2)
}



int main()
{
	system("color 8F");

	short arr[3][3] = { {0,0,0},{1,2,0},{0,2,3} };

	cout << "\nMatrix1:  \n";
	Print_Matrix(arr, 3, 3);


	if (is_Sparse_Matrix(arr, 3, 3))
		cout << "\nYES: it is Sparse \n";
	else
		cout << "\nNO: it is Not Sparse \n";
	

	system("pause>0");
    return 0;
}
