#include <iostream>
#include <string>

using namespace std;


string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}


short Count_Each_Word_In_String(string S1) {

    short Count = 0;
    short Pos = 0;
    string Delimiter = " ";  
    string Word;

    while ((Pos = S1.find(Delimiter)) != std::string::npos)
    {
        Word = S1.substr(0, Pos);

        if (Word != "")   
        {
            Count++;
        }

        S1.erase(0, Pos + Delimiter.length());
    }

    if (S1 != "")
    {
        Count++;
    }
    return Count;
}




int main()
{
    system("color f3");

    string S1 = Read_String();

    cout << "\nThe Number Of Words In Ur String Is = ";
    cout << Count_Each_Word_In_String(S1); 
       
    system("pause>0");
    return 0;
}
