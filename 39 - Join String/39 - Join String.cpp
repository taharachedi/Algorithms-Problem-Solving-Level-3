#include <iostream>
#include <string>
#include <vector>

using namespace std;


string Join_String(vector <string> vString, string Delimiter = " ") {

    string S1 = "";

    for (string& s : vString)
    {
        S1 = S1 + s + Delimiter;
    }

    return S1.substr(0, S1.length() - Delimiter.length());
}



string Join_String(string aString[], short length, string Delimiter = " ") {

    string S1 = "";

    for (short i = 0; i < length; i++)  
    {
        S1 = S1 + aString[i] + Delimiter;
    }

    return S1.substr(0, S1.length() - Delimiter.length());
}


int main()
{
    system("color f3");

    vector <string> vString = { "Abderrazzak" , "Hassania" , "Mohammed" , "Taha" };
    cout << "\nVector After Join : \n";
    cout << Join_String(vString , " + ");


    string aString[] = { "Abdo" , "Hassania" , "Med" , "Toto" };
    cout << "\n\nArray After Join : \n";
    cout << Join_String(aString, 4 , " && ");

    cout << system("pause>0");
    return 0;
} 
