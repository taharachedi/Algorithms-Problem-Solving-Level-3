#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const string FileName = "Clients.txt";


struct stClient {

    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;
};



vector<string> Split_String(string S1, string Delimiter = "#//#") {

    short Pos = 0;
    string Word = "";

    vector<string>vString;

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

    vector<string>vRecord = Split_String(Line);

    stClient Client;


    Client.Account_Number = vRecord[0];
    Client.PIN_Code = vRecord[1];
    Client.Name = vRecord[2];
    Client.Phone = vRecord[3];
    Client.Account_Balance = stod(vRecord[4]);

    return Client;
}




vector<stClient> Load_ClientData_From_File(string FileName) {

    fstream My_File;

    vector<stClient> vClient;

    My_File.open(FileName, ios::in); // Read Mode

    if (My_File.is_open())
    {
        string Line;
        stClient Client;

        while (getline(My_File, Line)) {

            Client = Convert_LineData_To_Record(Line); 
            vClient.push_back(Client);
        }

        My_File.close();
        
    }
    return vClient;
}


string Read_Account_Number() {

    string Account_Number;

    cout << "Please Enter Account Number : ";
    cin >> Account_Number;

    return Account_Number;
}



void Print_Client_Details(stClient Client) {

    cout << "\nThe Following are The Client Details : \n\n";

    cout << "Account  Number : " << Client.Account_Number << endl;
    cout << "PIN Code        : " << Client.PIN_Code << endl;
    cout << "Name            : " << Client.Name << endl;
    cout << "Phone           : " << Client.Phone << endl;
    cout << "Account Balance : " << Client.Account_Balance << endl;
}



bool isFind_Client_ByAccountNumber(string AccountNumber, stClient &Client_Info) {

    vector<stClient> vClient = Load_ClientData_From_File(FileName);

    for (stClient Client : vClient) 
    { 
        if (Client.Account_Number == AccountNumber) { 

            Client_Info = Client;  
            return true;
        }

    }
    return false;
}




int main()
{
    system("color f3");

    string Account_Number = Read_Account_Number();
    stClient Client;

    if (isFind_Client_ByAccountNumber(Account_Number,Client))
    {
        Print_Client_Details(Client);
    }
    else
    {
        cout << "\nClient With Account Number (" << Account_Number << ") Not Found! ";
    }


    system("pause>0");
    return 0;
}
