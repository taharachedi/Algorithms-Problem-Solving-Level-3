#include <iostream>
#include <string>

using namespace std;

string Read_String() {
    string S1 = "";

    cout << "\nPlease Enter Ur String: \n";
    getline(cin, S1);

    return S1;
}


char Read_Character() {
    char C1 = ' ';

    cout << "\nPlease Enter a Character: \n";
    cin >> C1;

    return C1;
}


short Count_Letters(string S1, char C1) {

    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == C1)
            Count++;
    }
    return Count;
}


int main()
{
    system("color f3");

    string S1 = Read_String();
    char C1 = Read_Character();

    cout << "\nLetter \'" << C1 << "\' Count = " << Count_Letters(S1, C1) << endl;

    system("pause>0");
    return 0;
}
