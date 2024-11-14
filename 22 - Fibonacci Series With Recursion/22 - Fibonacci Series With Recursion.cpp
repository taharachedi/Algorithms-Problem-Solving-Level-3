#include <iostream>

 using namespace std;


void Print_Fibonacci_Series_Using_Recursion(short Num, short Prev2, short Prev1) {
    
    short Fib_Num = 0;

    if (Num > 0)
    {
        Fib_Num = Prev2 + Prev1; 
        cout << Fib_Num << "  ";  
        Prev2 = Prev1;
        Prev1 = Fib_Num;
        
        
        Print_Fibonacci_Series_Using_Recursion(Num - 1, Prev2, Prev1);   
    }
}


int main()
{
    Print_Fibonacci_Series_Using_Recursion(10, 1, 0); 

    system("color 8F");
    system("pause>0");
    return 0;
}
