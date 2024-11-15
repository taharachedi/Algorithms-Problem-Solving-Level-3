#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}


bool is_Vowel(char C1) {

    C1 = tolower(C1);

    return (C1 == 'a' || C1 == 'e' || C1 == 'i' || C1 == 'o' || C1 == 'u');
}


short Count_Vowel(string S1) {
    
    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (is_Vowel(S1[i]))
            Count++;
    }
    return Count;
}



int main()
{
    system("color f3");

    string S1 = Read_String();
    cout << "\nNumber Of Vowels is = " << Count_Vowel(S1) << endl;


    system("pause>0");
    return 0;
}
