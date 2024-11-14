#include <iostream>
#include <string>
#include <cctype>

using namespace std;



string Read_String() {
    string S1 = "";

    cout << "Please Enter Ur String : \n";
    getline(cin, S1);

    return S1;
}


short Count_Small_Letters(string S1) {
    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
            Count++;
    }
    return Count;
}


short Count_Capital_Letters(string S1) {
    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i])) 
            Count++;
    }
    return Count;
}




enum enWhatToCount { Small_Letters = 1, Capital_Letters = 2, All = 3 };


short Count_Letters(string S1, enWhatToCount Type = enWhatToCount::All) {

    if (Type == enWhatToCount::All)
        return S1.length();

    short Count = 0;

    for (short i = 0; i < S1.length(); i++)
    {
        if (Type == enWhatToCount::Capital_Letters && isupper(S1[i]))
            Count++;

        if (Type == enWhatToCount::Small_Letters && islower(S1[i]))
            Count++;
    }

    return Count;
}



int main()
{
    system("color f3");

    string S1 = Read_String();

    cout << "\nString Length = " << S1.length() << endl;
    cout << "Capital Letters Count = " << Count_Capital_Letters(S1) << endl;
    cout << "Small Letters Count = " << Count_Small_Letters(S1) << endl;


    cout << "\n---------------- Methods 2 : ----------------\n";

    cout << "\nString Length = " << Count_Letters(S1) << endl;
    cout << "Capital Letters Count = " << Count_Letters(S1,enWhatToCount::Capital_Letters) << endl;
    cout << "Small Letters Count = " << Count_Letters(S1,enWhatToCount::Small_Letters) << endl;


    system("pause>0");
    return 0;
}
