#include <iostream>
#include <string>
#include <vector>

using namespace std;

string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}

vector <string> Split_String(string S1,string Delimiter = " ") {

    vector <string> vString;

    short Pos = 0;
    string Word;

    while ((Pos = S1.find(Delimiter)) != std::string::npos)
    {
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


void Print_Split_Vector(vector <string>& vString) {

    for (string& S1 : vString)
    {
        cout << S1 << endl;
    }
}



int main()
{
    system("color f3");

    string S1 = Read_String();

    vector <string> vString;

    vString = Split_String(S1);

    cout << "\nTokens = " << vString.size() << endl;
    
    Print_Split_Vector(vString);

    system("pause>0");
    return 0;
}
