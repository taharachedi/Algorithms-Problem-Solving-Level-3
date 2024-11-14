#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string Read_String() {
    string S1 = "";

    cout << "\nPlease Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}


char Read_Character() {
    char C1;

    cout << "\nPlease Enter A Character : \n";
    cin >> C1;

    return C1;
}


char Invert_Character(char C1) {
    return isupper(C1) ? tolower(C1) : toupper(C1);
}



short Count_Letters(string S1, char C1 ,bool MatchCase = true) {

    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase) {
            if (S1[i] == C1)
                Count++;
        }
        else {
            if (toupper(S1[i]) == toupper(C1))
                Count++;
        }
     
    }

    return Count;
}



int main()
{
    system("color f3");

    string S1 = Read_String();
    char C1 = Read_Character();

    cout << "\nLetter \'" << C1 << "\' Count = " << Count_Letters(S1, C1) << endl;

    cout << "\nLetter \'" << C1 << "\' Or \'" << Invert_Character(C1) << "\' Count = ";
    cout << Count_Letters(S1, C1, false) << endl;

    system("pause>0");
    return 0;
}
