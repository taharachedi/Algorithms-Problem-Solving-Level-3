#include <iostream>
#include <string>
#include <cctype>

using namespace std;


char Read_Character() {
    char C1 = ' ';

    cout << "Please Enter A Character : \n";
    cin >> C1;

    return C1;
}


char Invert_Character(char C1) {
    return isupper(C1) ? tolower(C1) : toupper(C1);
}


int main()
{
    system("color f3");

    char C1 = Read_Character();

    cout << "Char After Inverting Cases : ";
    C1 = Invert_Character(C1);
    cout << C1 << endl;

    system("pause>0");
    return 0;
}
