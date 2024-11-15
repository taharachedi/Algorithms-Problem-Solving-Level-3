#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <fstream>

using namespace std;

const string FileName = "Clients.txt";


struct stClient
{
    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;

    bool Make_For_Delete = false;
};

vector<string> Split_String(string S1, string Delimiter = "#//#") {

    short Pos;
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

    stClient Client;
    vector <string> vRecord = Split_String(Line);

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



string Read_Account_Number() {

    string Account_Number;

    cout << "Please Enter Ur Account Number : ";
    cin >> Account_Number;

    return Account_Number;
}


void Print_Client_Card(stClient Client) {

    cout << "\nThe Following Are The Client Details : \n\n";

    cout << "\nAccount Number    : " << Client.Account_Number;
    cout << "\nPIN Code          : " << Client.PIN_Code;
    cout << "\nName              : " << Client.Name;
    cout << "\nPhone             : " << Client.Phone;
    cout << "\nAccount Balance   : " << Client.Account_Balance;
}


vector <stClient> Load_Data_From_File(string FileName) {

    fstream My_File;
    vector<stClient> vClient;

    My_File.open(FileName, ios::in);

    string Line;
    stClient Client;

    if (My_File.is_open())
    {
        while (getline(My_File, Line)) {

            Client = Convert_LineData_To_Record(Line);
            vClient.push_back(Client);
        }
        My_File.close();
    }
    return vClient;
}


vector <stClient> Save_ClientData_To_File(string FileName, vector<stClient>& vClient) { 

    fstream My_File;

    My_File.open(FileName, ios::out);

    string Line;

    if (My_File.is_open())
    {
        for (stClient& Client : vClient)
        {
            if (Client.Make_For_Delete == false)
            {
                Line = Convert_RecordData_To_Line(Client);
                My_File << Line << endl;
            }
        }
        My_File.close();
    }
    return vClient;
}


bool Find_Client_By_Account_Number(string Account_Number, vector<stClient> vClient ,stClient & Client_Info) {

    for (stClient& Client : vClient)
    {
        if (Client.Account_Number == Account_Number) {
            Client_Info = Client;
            return true;
        }
    }
    return false;
}



stClient Edit_Client_Record(string Account_Number) {

    stClient Client;

    Client.Account_Number = Account_Number;

    cout << "\nEnter Ur PIN Code       : ";
    getline(cin >> ws, Client.PIN_Code);

    cout << "\nEnter Ur Name           : ";
    getline(cin, Client.Name);

    cout << "\nEnter Ur Phone          : ";
    getline(cin, Client.Phone);

    cout << "\nEnter Ur Accout Balance : ";
    cin >> Client.Account_Balance;

    return Client;
}



bool Update_Client_By_Account(string Account_Number, vector<stClient>& vClient) {

    stClient Client;
    char Choice = 'n';

    if (Find_Client_By_Account_Number(Account_Number,vClient,Client))
    {
        Print_Client_Card(Client);

        cout << "\n\nAre U Sure U Want Update This Client ? (Y/N) ";
        cin >> Choice;

        if (toupper(Choice) == 'Y')
        {

            for (stClient& C : vClient)
            {
                if (C.Account_Number == Account_Number)
                {
                    C = Edit_Client_Record(Account_Number);
                    break;
                }
            }

            Save_ClientData_To_File(FileName, vClient); 
            
            cout << "\nClient Updated Successfully! ";
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

    string Account_Number = Read_Account_Number();
    vector <stClient> vClient = Load_Data_From_File(FileName);

    Update_Client_By_Account(Account_Number, vClient);

    system("pause>0");
    return 0;
}
