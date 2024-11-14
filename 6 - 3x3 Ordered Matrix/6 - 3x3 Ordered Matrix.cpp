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

void Print_Ordered_Matrix(short arr[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++) 
		{
			cout << setw(3) << arr[i][j] << " "; 
		}
		cout << endl;                          
	}

}

int main()
{
	system("color f4");

	short arr[3][3];

	Fill_Ordered_Matrix(arr, 3, 3);
	cout << "\nThe Following is a 3x3 Ordered Matrix :\n";
	Print_Ordered_Matrix(arr, 3, 3);

    return 0;
}
