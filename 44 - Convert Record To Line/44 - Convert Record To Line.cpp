#include <iostream>
#include <string>

using namespace std;


struct stClient {

    string Account_Number;
    string PIN_Code;
    string Name;
    string Phone;
    double Account_Balance;
};



stClient Read_Client_Info() {

    stClient Client;

    cout << "\nEnter Account Number : ";
    getline(cin, Client.Account_Number);

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



string Convert_Record_To_Line(stClient Client, string Separator = "#//#") {

    string ClientRecord = "";

    ClientRecord += Client.Account_Number + Separator;
    ClientRecord += Client.PIN_Code + Separator; 
    ClientRecord += Client.Name + Separator; 
    ClientRecord += Client.Phone + Separator;
    ClientRecord += to_string(Client.Account_Balance);

    return ClientRecord;
}


int main()
{
    system("color f3");

    cout << "Please Enter Client Data : \n";

    stClient Client; 
    Client = Read_Client_Info();

    cout << "\nClient Record for Saving it : \n" << Convert_Record_To_Line(Client);

    
    system("pause>0");
    return 0;
}
