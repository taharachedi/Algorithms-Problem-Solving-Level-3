#include <iostream>

using namespace std;

void Print_Fibonacci_Series(short Number) {

    short Fib_Num = 0; 
    short Prev2 = 1, Prev1 = 0;
    
   // cout << "1  ";

    for (short i = 1; i <= Number; i++) 
    {
        Fib_Num = Prev2 + Prev1;   
        cout << Fib_Num << "  ";    
        Prev2 = Prev1;
        Prev1 = Fib_Num; 
    }
}


int main()
{
    Print_Fibonacci_Series(10);


    system("color 8F");
    system("pause>0");
    return 0;
}
