#include <iostream>
#include <cstdio>

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
            printf(" %0*d  ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}


void Print_Middle_Row(short arr[3][3], short Rows, short Cols) {

    short Middle_Row = Rows / 2;

    for (short j = 0; j < Cols; j++)
    {
        printf(" %0*d  ", 2, arr[Middle_Row][j]);
    }
    cout << "\n";
}


void Print_Middle_Col(short arr[3][3], short Rows, short Cols) {

    short Middle_Col = Cols / 2;

    for (short i = 0; i < Rows; i++)
    {
        printf("\t%0*d \n", 2, arr[i][Middle_Col]);
    }
    cout << "\n";
}


int main()
{
    system("color f3");

    srand((unsigned)time(NULL));

    short arr[3][3];

    Fill_Random_Matrix(arr, 3, 3);
    cout << "\nMatrix1: \n";
    Print_Matrix(arr, 3, 3);

    cout << "\nMiddle Row Of Matrix1 is: \n";
    Print_Middle_Row(arr, 3, 3);

    cout << "\nMiddle Col Of Matrix1 is: \n";
    Print_Middle_Col(arr, 3, 3); 

    system("pause>0");
    return 0;
}
