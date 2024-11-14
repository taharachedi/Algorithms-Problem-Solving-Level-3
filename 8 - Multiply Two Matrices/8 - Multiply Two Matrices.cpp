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
            printf(" %0*d ", 3, arr[i][j]);
        }
        cout << endl;
    }
    cout << endl; 
}





void Multiply_Two_Matrix(short arr1[3][3], short arr2[3][3], short Mult[3][3], short Rows, short Cols) {

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            short Sum = 0;

            for (short k = 0; k < 3; k++)
            {
                Sum += arr1[i][k] * arr2[k][j];
            }

            Mult[i][j] = Sum;
        }
    }
}


int main()
{
    system("color f4");

    srand((unsigned)time(NULL));

    short arr1[3][3]; 

    Fill_Random_Matrix(arr1, 3, 3); 
    cout << "\nMatrix1:\n";
    Print_Matrix(arr1, 3, 3); 
    
    short arr2[3][3]; 

    Fill_Random_Matrix(arr2, 3, 3); 
    cout << "\nMatrix2:\n";  
    Print_Matrix(arr2, 3, 3);   


    short Mult[3][3]; 

    Multiply_Two_Matrix(arr1, arr2, Mult, 3, 3);    
    cout << "\nResult1: \n";  
    Print_Matrix(Mult, 3, 3); 

    return 0;
} 
