#include <iostream>
#include <string>

using namespace std;


string TrimLeft(string S1) { // 7yed les espaces dyal liser

    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ') // l9ina l7arf lewel sf saliina hhh
            return S1.substr(i, S1.length() - i);
    }
    return "";
}


string TrimRight(string S1) { // ky7yed lfaraghat li 3la limen     

    for (short i = S1.length() - 1 ; i >= 0 ; i--) //n9sna 1 bax nb9aw f espace dyal string
    {
        if (S1[i] != ' ')
            return S1.substr(0, i + 1); // zedna 1 bax ytb3 i+1 ra9m a partir du 0 (0 => i)
    }
    return "";
}


string Trim(string S1) {

    return TrimLeft(TrimRight(S1));
}


int main()
{
    system("color f3");

    string S1 = "      Taha Rachedi      ";

    cout << "\nString     : " << S1 << endl;
    cout << "\nTrim Left  : " << TrimLeft(S1) << endl;
    cout << "\nTrim Right : " << TrimRight(S1) << endl;
    cout << "\nTrim       : " << Trim(S1) << endl;



    system("pause>0");
    return 0;
}
