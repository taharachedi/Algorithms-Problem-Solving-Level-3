#include <iostream>
#include <string>

using namespace std;


string Replace_Words(string S1, string ToReplace, string ReplaceTo) {

    short Pos = 0;


    while ((Pos = S1.find(ToReplace)) != std::string::npos) {

        S1 = S1.replace(Pos, ToReplace.length(), ReplaceTo); 

    }

    return S1;
}



int main()
{
    system("color f3");


    string S1 = "Morocco is The Best Country Ever! Visca Morocco";
    string ToReplace = "Morocco";
    string ReplaceTo = "USA";


    cout << "Original String : \n" << S1 << endl;

    cout << "\nString After Replace : \n" << Replace_Words(S1, ToReplace, ReplaceTo); 
    

    system("pause>0");
    return 0;
}
