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



vector <string> SplitString(string S1, string Delimiter = " ") {

    vector <string> vString;

    short Pos = 0;
    string Word = "";

    while ((Pos = S1.find(Delimiter)) != std::string::npos) {

        Word = S1.substr(0, Pos); // Store The Word

        if (Word != "")
        {
            vString.push_back(Word);
        }

        S1.erase(0, Pos + Delimiter.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1); // Add Last Word || String without Space
    }

    return vString;
}



string Reverse_Words_In_String(string S1) { 

    vector <string> vString = SplitString(S1);  
    
    vector <string>::iterator iter = vString.end();

    string S2 = "";
    string Delim = " ";
    
    while (iter != vString.begin()) {

        --iter; 

        S2 += *iter + Delim; 
    }

    S2 = S2.substr(0, S2.length() - Delim.length()); // Remove Last Space

    return S2;
}




int main()
{
    system("color f3");

    string S1 = Read_String();

    cout << "\nString After Reversing Words : \n";
    cout << Reverse_Words_In_String(S1) << endl;


    system("pause>0");
    return 0;
}
