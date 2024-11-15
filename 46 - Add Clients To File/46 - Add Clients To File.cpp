#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

const string Clients_FileName = "Clients.txt";

struct stClient {
    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;
};



stClient Read_Client_Info() {

    stClient Client;

    cout << "Enter Account Number : ";
    getline(cin >> ws, Client.Account_Number);

    cout << "Enter PIN Code : ";
    getline(cin, Client.PIN_Code);

    cout << "Enter Name : ";
    getline(cin, Client.Name);

    cout << "Enter Phone : ";
    getline(cin, Client.Phone);

    cout << "Enter Account Balance : ";
    cin >> Client.Account_Balance;

    return Client;
}



string Convert_Record_To_Line(stClient Client, string Delimiter = "#//#") {

    string ClientRecord = "";

    ClientRecord += Client.Account_Number + Delimiter;
    ClientRecord += Client.PIN_Code + Delimiter;
    ClientRecord += Client.Name + Delimiter;
    ClientRecord += Client.Phone + Delimiter;
    ClientRecord += to_string(Client.Account_Balance);

    return ClientRecord;
}


void Add_DataLine_To_File(string FileName, string DataLine) {

    fstream My_File;
    My_File.open(FileName, ios::out | ios::app); 

    if (My_File.is_open())
    {
        My_File << DataLine << endl;
        My_File.close();
    }

}



void Add_NewClient() {

    stClient Client = Read_Client_Info();

    Add_DataLine_To_File(Clients_FileName, Convert_Record_To_Line(Client));  

}



void AddClients() {

    char AddMore = 'Y';

    do
    {
        system("cls");

        cout << "Adding New Client : \n\n";
        Add_NewClient();

        cout << "\nClient Added Successfully! Do U Want To Add More Clients ?  (Y/N) ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}



int main()
{
    system("color f3");

    AddClients();

    system("pause>0");
    return 0;
}
