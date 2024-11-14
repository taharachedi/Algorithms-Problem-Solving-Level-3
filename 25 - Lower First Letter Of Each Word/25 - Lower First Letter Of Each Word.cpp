#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String: \n";
    getline(cin, S1);

    return S1;
}

string Lower_First_Letter(string S1) {

    bool isFirstLetter = true;

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {
            S1[i] = tolower(S1[i]);
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}

int main()
{
    system("color f3");

    string S1 = Read_String();
    cout << "\nString After Conversion : \n";
    S1 = Lower_First_Letter(S1);
    cout << S1 << endl;

    return 0;
}
