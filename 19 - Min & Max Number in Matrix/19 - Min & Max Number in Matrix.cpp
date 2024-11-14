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
            arr[i][j] = Random_Number(1, 10);
        }
    }
}


void Print_Matrix(short arr[3][3], short Rows, short Cols) {

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << "\n";
    }
}


short Min_Matrix(short arr[3][3], short Rows, short Cols) {

    short Min = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] < Min)
                Min = arr[i][j];
        }
    }
    return Min;
}


short Max_Matrix(short arr[3][3], short Rows, short Cols) {

    short Max = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > Max)
                Max = arr[i][j]; 
        }
    }
    return Max; 
}



int main()
{
    srand((unsigned)time(NULL));

    short arr[3][3];

    Fill_Random_Matrix(arr, 3, 3);
    cout << "\nMatrix1: \n";
    Print_Matrix(arr, 3, 3);

    cout << "\nMin Number is : " << Min_Matrix(arr, 3, 3) << endl;
    cout << "\nMax Number is : " << Max_Matrix(arr, 3, 3) << endl;

    system("color 8F");
    return 0;
}
