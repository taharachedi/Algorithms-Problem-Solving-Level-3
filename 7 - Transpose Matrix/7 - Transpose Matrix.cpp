#include <iostream>
#include <iomanip>

using namespace std;

void Fill_Ordered_Matrix(short arr[3][3], short Rows, short Cols) {

	short Count = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Count++;
			arr[i][j] = Count;
		}
	}
}


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


void Transpose_Matrix(short arr[3][3],short Trans[3][3], short Rows, short Cols) {
	 
	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++)  
		{
			Trans[i][j] = arr[j][i];  
		}
	}
}


int main()
{
	system("color f2");

	short arr[3][3];

	Fill_Ordered_Matrix(arr, 3, 3);
	cout << "\nThe Following is a 3x3 Ordered Matrix : \n";
	Print_Matrix(arr, 3, 3);

	short Trans[3][3];

	Transpose_Matrix(arr, Trans, 3, 3);
	cout << "\nThe Following is The Transposed Matrix : \n";
	Print_Matrix(Trans, 3, 3);

	system("pause>0");
    return 0;
}
