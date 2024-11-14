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



bool isNumber_Exists(short arr[3][3], short Rows, short Cols, short Num) {

	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++)  
		{
			if (arr[i][j] == Num)
				return true;
		}	
	}
	return false;
}



short Read_Number(string Msg) {

	short Num = 0;

	do
	{
		cout << Msg << endl; 
		cin >> Num; 

	} while (Num < 0);

	return Num;
}



int main()
{
	system("color 8F");

	short arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	cout << "\nMatrix1: \n";
	Print_Matrix(arr, 3, 3);


	short Num = Read_Number("\nPlease Enter The Num To Look From in Matrix? \n");

	if (isNumber_Exists(arr, 3, 3, Num)) 
		cout << "\nYes, it's There \n";
	else
		cout << "\nNo,it's Not There \n";


	system("pause>0");
    return 0;
}
