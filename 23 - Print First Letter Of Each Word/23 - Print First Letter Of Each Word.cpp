#include <iostream>
#include <string>

using namespace std;

string Read_String() {
	string S1 = "";

	cout << "Please Enter Ur String : \n";
	getline(cin, S1);

	return S1;
}


void Print_First_Letters_OfEach_Word(string S1) {

	bool isFirstLetter = true;

	cout << "\nFirst Letters Of This String : \n";

	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter) {
			cout << S1[i] << endl;
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
}


int main() {

	system("color 6F");

	Print_First_Letters_OfEach_Word(Read_String());

	system("pause>0");
	return 0;
}
