#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cctype>

using namespace std;

const string FileName = "Clients.txt";

struct stClient
{
    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;
    
    bool Mark_For_Delete = false;
};



vector<string> Split_String(string S1, string Delimiter = "#//#") {

    short Pos = 0;
    string Word;

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

    vector<string>vRecord = Split_String(Line);
    stClient Client;

    Client.Account_Number = vRecord[0];
    Client.PIN_Code = vRecord[1];
    Client.Name = vRecord[2];
    Client.Phone = vRecord[3];
    Client.Account_Balance = stod(vRecord[4]);

    return Client;
}



string Convert_RecordData_To_Line(stClient Client, string Delimiter = "#//#") {

    string Line = "";

    Line += Client.Account_Number + Delimiter;
    Line += Client.PIN_Code + Delimiter;
    Line += Client.Name + Delimiter;
    Line += Client.Phone + Delimiter;
    Line += to_string(Client.Account_Balance);

    return Line;
}



vector<stClient> Load_ClientData_From_File(string FileName) {

    vector<stClient>vClient;

    fstream My_File;
    My_File.open(FileName, ios::in);

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




vector <stClient> Save_ClientsData_To_File(string FileName, vector <stClient> vClient) {

    fstream My_File;
    My_File.open(FileName, ios::out);

    string Line; 

    if (My_File.is_open())
    {
        for (stClient& Client : vClient)
        {
            if (Client.Mark_For_Delete == false) { // We Only Write Records That Are Not Market For Delete

                Line = Convert_RecordData_To_Line(Client);
                My_File << Line << endl;
            }
        }

        My_File.close();
    }
    return vClient;
}



string Read_Account_Number() {

    string Account_Number;

    cout << "Please Enter Ur Account Number : ";
    cin >> Account_Number;

    return Account_Number;
}


void Print_Client_Details(stClient Client) {

    cout << "\nThe Following are The Client Details : \n\n";

    cout << "Account Number  : " << Client.Account_Number << endl;
    cout << "PIN Code        : " << Client.PIN_Code << endl;
    cout << "Name            : " << Client.Name << endl;
    cout << "Phone           : " << Client.Phone << endl;
    cout << "Account Balance : " << Client.Account_Balance << endl;
}


bool Find_Client_By_Account_Number(string Account_Number, vector <stClient> vClient, stClient& Client_Info) {

    for (stClient& Client : vClient)
    {
        if (Client.Account_Number == Account_Number)
        {
            Client_Info = Client;
            return true;
        }
    }
    return false;
}



bool Mark_Client_For_Delete_By_Account_Number(string Account_Number, vector<stClient>& vClient) {

    for (stClient& Client : vClient)
    {
        if (Client.Account_Number == Account_Number) {

            Client.Mark_For_Delete = true;
            return true;
        }
    }
    return false;
}






bool Delete_Client_By_Account(string Account_Number, vector<stClient>& vClient) {

    char Answer = 'n';
    stClient Client;


    if (Find_Client_By_Account_Number(Account_Number,vClient,Client))
    {
        Print_Client_Details(Client);

        cout << "\n\nAre U Sure U want Delete This Client :(Y/N) ?";
        cin >> Answer;


        if (toupper(Answer) == 'Y')
        {
            Mark_Client_For_Delete_By_Account_Number(Account_Number, vClient);
            Save_ClientsData_To_File(FileName, vClient);

            // Refresh Client

            vClient = Load_ClientData_From_File(FileName);

            cout << "\n\nClient Deleted Successfully! ";
            return true;
        }
    }
    else
    {
        cout << "\nClient With Account Number (" << Account_Number << ") Not Found !";
        return false;
    }
    
}


int main()
{
    system("color f3");

    vector <stClient> vClients = Load_ClientData_From_File(FileName);

    string Account_Number = Read_Account_Number();

    Delete_Client_By_Account(Account_Number, vClients);


    system("pause>0");
    return 0;
}
