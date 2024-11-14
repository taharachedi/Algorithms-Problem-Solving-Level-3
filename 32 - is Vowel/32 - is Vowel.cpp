#include <iostream>
#include <string>

using namespace std;

char Read_Character() {
    char C1 = ' ';

    cout << "Please Enter A Character : \n";
    cin >> C1;

    return C1;
}


bool is_Vowels(char C1) {

    C1 = tolower(C1);

    return (C1 == 'a' || C1 == 'e' || C1 == 'i' || C1 == 'o' || C1 == 'u');
}


int main()
{
    char C1 = Read_Character();


    if (is_Vowels(C1)){
        system("color 2F");
        cout << "\nYES Letter \'" << C1 << "\' is Vowel." << endl;
    }
    else {
        system("color 4F");
        cout << "\nNO Letter \'" << C1 << "\' is Not Vowel." << endl;
    }

    system("pause>0");
    return 0;
}
