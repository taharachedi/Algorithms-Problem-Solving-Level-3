#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string Remove_Punctuations(string S1) {

    string S2 = "";

    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
            S2 += S1[i];
    }

    return S2;
}


int main()
{
    system("color f3");

    string S1 = "Welcome To: USA ,it's A Great Country ; Visca USA!";

    cout << "Original String : \n" << S1 << endl;

    cout << "\nAfter Remove Punctuations : \n" << Remove_Punctuations(S1) << endl;


    system("pause>0");
    return 0;
}
