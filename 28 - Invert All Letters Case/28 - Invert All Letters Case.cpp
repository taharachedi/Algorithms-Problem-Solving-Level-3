#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String :\n";
    getline(cin, S1);

    return S1;
}


char Invert_Character_Case(char C1) {
    return isupper(C1) ? tolower(C1) : toupper(C1);
}


string Invert_All_Letters_Case(string S1) {

    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = Invert_Character_Case(S1[i]);
    }
    return S1;
}


int main()
{
    system("color f3");

    string S1 = Read_String();
    cout << "\nString After Inverting All Letters Case :\n";
    S1 = Invert_All_Letters_Case(S1);
    cout << S1 << endl;


    system("pause>0");
    return 0;
}
