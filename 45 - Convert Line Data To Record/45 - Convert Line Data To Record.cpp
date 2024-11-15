#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct stClient {

    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;
};



vector <string> Split_String(string S1, string Delimiter = "#//#") {

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



stClient Convert_LineData_To_Record(string Line, string Delimiter = "#//#") { 

    vector <string> vClientData = Split_String(Line); 

    stClient Client;

    Client.Account_Number = vClientData[0];
    Client.PIN_Code = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.Account_Balance = stod(vClientData[4]);

    return Client;
}


void Print_ClientRecord(stClient Client) {

    cout << "\nThe Following is The Extracted Client Record :\n";

    cout << "\nAccount Number : " << Client.Account_Number;
    cout << "\nPIN Code       : " << Client.PIN_Code;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccout Balance : " << Client.Account_Balance;

}




int main()
{
    system("color f3");

    string S1 = "A100#//#1234#//#Taha Rachedi#//#06 33 47 84 57#//#5000.000000";

    cout << "Line Record is : \n" << S1 << endl;

    stClient Client = Convert_LineData_To_Record(S1);

    Print_ClientRecord(Client);


    system("pause>0");
    return 0;
}
