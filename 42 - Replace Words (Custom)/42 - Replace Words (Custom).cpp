#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;



vector <string> Split_String(string S1, string Delimiter = " ") {

    short Pos = 0;
    string Word = "";

    vector <string> vString;

    while ((Pos = S1.find(Delimiter)) != std::string::npos) {

        Word = S1.substr(0, Pos); 

        if (Word != "")
        {
            vString.push_back(Word);
        }

        S1.erase(0, Pos + Delimiter.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1);
    }

    return vString;
}



string Join_String(vector <string> vString , string Delimiter = " ") {

    string S1 = "";

    for (string& s : vString)
    {
        S1 += s + Delimiter;
    }

    return S1.substr(0, S1.length() - Delimiter.length());
}



string LowerAllString(string S1) {

    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]);
    }

    return S1;
}



 
string Replace_Words(string S1,string ToReplace,string ReplaceTo , bool MatchCase = true) {

    vector <string> vString = Split_String(S1);

    for (string& s : vString)
    {

        if (MatchCase)
        {
            if (s == ToReplace)
            {
                s = ReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(ToReplace))
            {
                s = ReplaceTo; 
            }
        }

    }

    return Join_String(vString);
}





int main()
{
    system("color f3");

    string S1 = "Morocco is The Best Country Ever! Visca Morocco";
    string ToReplace = "morocco";
    string ReplaceTo = "USA";

    cout << "Original String : \n" << S1 << endl;

    cout << "\nReplace With Match Case : \n" << Replace_Words(S1 , ToReplace,ReplaceTo) << endl;

    cout << "\nReplace Without Match Case : \n" << Replace_Words(S1, ToReplace, ReplaceTo, false) << endl;


    system("pause>0");
    return 0;
}
