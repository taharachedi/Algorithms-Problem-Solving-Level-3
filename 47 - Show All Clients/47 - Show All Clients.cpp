#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>


using namespace std;

const string Clients_FileName = "Clients.txt";

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


    vector<stClient> vClient;
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




void Print_ClientRecord(stClient Client) {


    cout << left << "|" << setw(15) << Client.Account_Number;
    cout << left << "|" << setw(10) << Client.PIN_Code;
    cout << left << "|" << setw(30) << Client.Name;
    cout << left << "|" << setw(12) << Client.Phone;
    cout << left << "|" << setw(12) << Client.Account_Balance;

   
}



void Print_All_ClientData(vector <stClient> vClient) {


    cout << "\t\t\t\tCLient List (" << vClient.size() << ") Client(s).";
    cout << "\n-----------------------------------------------------------------------------------------\n";


    cout << left << "|" << setw(15) << "Account_Number";
    cout << left << "|" << setw(10) << "PIN_Code";
    cout << left << "|" << setw(30) << "Name";
    cout << left << "|" << setw(12) << "Phone";
    cout << left << "|" << setw(12) << "Account_Balance";

    cout << "\n-----------------------------------------------------------------------------------------\n";


    for (stClient& Client : vClient)
    {
        Print_ClientRecord(Client);
        cout << endl;
    }


    cout << "\n-----------------------------------------------------------------------------------------\n";

}



int main()
{
    system("color f3");

    vector<stClient> vClient = Load_ClientData_From_File(Clients_FileName); 
    Print_All_ClientData(vClient); 

    system("pause>0");
    return 0;
}
