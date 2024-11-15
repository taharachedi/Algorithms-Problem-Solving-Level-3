#include <iostream>
#include <string>

using namespace std;

string Read_String() {
    string S1 = "";

    cout << "\nPlease Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}



void Print_Each_Word_In_String(string S1) {

    string Delimiter = " ";

    cout << "\nUr String Words are : \n";
    
    string Word;
    short Pos = 0;

    while ((Pos = S1.find(Delimiter)) != std::string::npos)
    {
        Word = S1.substr(0, Pos);

        if (Word != ""){  // Bax maytb3x les espaces bouhdhom fster
            cout << Word << endl;
        }

        S1.erase(0, Pos + Delimiter.length());
    }
     
    if (S1 != "") // Print Last Word & if  No Delimiter
    {
        cout << S1 << endl;
    } 

 
}


int main()
{
    system("color f3");

    Print_Each_Word_In_String(Read_String());

    system("pause>0");
    return 0;
}
