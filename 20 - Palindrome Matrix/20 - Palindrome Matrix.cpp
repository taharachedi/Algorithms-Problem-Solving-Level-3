#include <iostream>
#include <iomanip>

using namespace std;


void Print_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows ; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << "\n";
	}
}


bool isPalindrome_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (arr[i][j] != arr[i][Cols - j - 1])
				return false;
		}
	}
	return true;
}




int main()
{
    short arr[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

	cout << "\nMatrix1: \n";
	Print_Matrix(arr, 3, 3);


	if (isPalindrome_Matrix(arr, 3, 3))
		cout << "\nYES: Matrix is Palindrome \n";
	else
		cout << "\nNO: Matrix is Not Palindrome \n";


	system("color 8F");
    return 0;
}
