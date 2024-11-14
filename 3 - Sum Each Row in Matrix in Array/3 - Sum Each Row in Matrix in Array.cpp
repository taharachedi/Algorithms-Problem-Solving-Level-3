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


short Row_Sum(short arr[3][3], short Rows, short Cols) {

    short Sum = 0;
    
    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[Rows][j]; 
    }

    return Sum;
}


void Row_Sum_In_Array(short arr[3][3], short Sum[3], short Rows, short Cols) {

    for (short i = 0; i < Rows; i++)
    {
        Sum[i] = Row_Sum(arr, i, Cols); 
    }
}


void Print_Row_Sum_In_array(short Sum[3], short Rows) {


    for (short i = 0; i < Rows; i++)
    {
        cout << "Rows " << i + 1 << " Sum : " << Sum[i] << endl;
    }
}



int main()
{
    system("color f2");
    srand((unsigned)time(NULL));

    short arr[3][3];
    short Sum[3];

    Fill_Random_Matrix(arr, 3, 3);

    cout << "\nThe Following is a 3x3 Random Matrix : \n";
    Print_Random_Matrix(arr, 3, 3);

    Row_Sum_In_Array(arr, Sum, 3, 3);  
    cout << "\nThe Following are The Sum Of Each Row in The Matrix : \n";
    Print_Row_Sum_In_array(Sum,3);

    return 0;
}
