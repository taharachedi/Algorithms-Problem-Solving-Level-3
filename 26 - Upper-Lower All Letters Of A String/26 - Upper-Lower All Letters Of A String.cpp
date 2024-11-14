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


string Upper_All_Letters(string S1) {

    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = toupper(S1[i]);
    }
    return S1;
}


string Lower_All_Letters(string S1) {

    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }
    return S1;
}




int main()
{
    system("color f3");

    string S1 = Read_String();

    cout << "\nString After Upper :\n";
    S1 = Upper_All_Letters(S1);
    cout << S1 << endl;

    cout << "\nString After Lower : \n";
    S1 = Lower_All_Letters(S1);
    cout << S1 << endl;

    system("pause>0");
    return 0;
}
