#include <iostream>
#include <iomanip>

using namespace std;


short Random_Number(short From, short To) {
    return rand() % (To - From + 1) + From;
}


void Fill_Random_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = Random_Number(1, 100);
		}
	}
}



void Print_Random_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++)  
		{
			cout << setw(3) << arr[i][j] << " ";  
		}
		cout << endl;
	}
}


short Sum_Each_Cols(short arr[3][3], short Rows, short Cols) {

	short Sum = 0;
	
	for (short i = 0; i < Rows; i++)
	{
		Sum += arr[i][Cols];
	}
	return Sum;  
}


void Sum_Each_Cols_In_Array(short arr[3][3],short Sum[3],short Rows, short Cols) {

	for (short j = 0; j < Cols; j++)
	{
		Sum[j] = Sum_Each_Cols(arr, Rows, j);
	}
}


void Print_Sum_Each_Cols(short arr[3], short Cols) {

	for (short j = 0; j < Cols; j++)
	{
		cout << "Col " << j + 1 << " Sum : " << arr[j] << endl;
	}
}

int main()
{
	system("color f4");
	srand((unsigned)time(NULL));

	short arr[3][3];

	Fill_Random_Matrix(arr, 3, 3);
	cout << "\nThe Following is a 3x3  Random Matrix : \n";
	Print_Random_Matrix(arr, 3, 3);

	short Sum[3];

	Sum_Each_Cols_In_Array(arr, Sum, 3, 3);
	cout << "\nThe Following are The Sum of Each Col in The Matrix : \n";
	Print_Sum_Each_Cols(Sum, 3);

    return 0;
}