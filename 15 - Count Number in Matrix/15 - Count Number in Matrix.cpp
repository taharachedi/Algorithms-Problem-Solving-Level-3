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


short Read_Num(string Msg) {

	short Num = 0;

	do
	{
		cout << Msg << endl; 
		cin >> Num;

	} while ( Num < 0);

	return Num; 
}


short Count_Num_In_Matrix(short arr[3][3], short Rows, short Cols,short Num) {

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



int main()
{
	system("color 8F");

	short arr[3][3] = { {1,2,1},{2,3,4},{4,3,2} };

	cout << "\nMatrix1: \n";
	Print_Matrix(arr, 3, 3);

	short Num = Read_Num("\nEnter The Number To Count in Matrix? \n");

	cout << "\nNumber " << Num << " Count in Matrix is : ";
	cout << Count_Num_In_Matrix(arr, 3, 3, Num) << endl;


	
	system("pause>0");
    return 0;
}
