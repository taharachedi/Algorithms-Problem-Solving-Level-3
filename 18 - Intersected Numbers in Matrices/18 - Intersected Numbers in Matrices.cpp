#include <iostream>
#include <iomanip>

using namespace std;


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


void Print_Intersected_Num(short arr1[3][3], short Rows, short Cols, short arr2[3][3]) {

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (isNumber_Exists(arr2, Rows, Cols, arr1[i][j]))     
                cout << setw(3) << arr1[i][j] << "    ";
        }
    }
}



int main()
{
    system("color 8F");

    short arr1[3][3] = { {1,8,9},{2,3,4},{5,4,3} };
    short arr2[3][3] = { {0,0,1},{1,1,2},{3,0,1} };


    cout << "\nMatrix1: \n";
    Print_Matrix(arr1, 3, 3);

    cout << "\nMatrix2: \n";
    Print_Matrix(arr2, 3, 3);

    cout << "\nIntersected Numbers in Matrices : \n";
    Print_Intersected_Num(arr1, 3, 3, arr2);  



    system("pause>0");
    return 0;
}
