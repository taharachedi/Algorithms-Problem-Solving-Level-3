# Problem 32: Vowel Checker in 🌟🔤

This C++ program helps you check if a given character is a vowel. Simply input a character, and the program will tell you if it’s a vowel or not! Additionally, the terminal color changes based on the result — green for vowels and red for non-vowels.

## 📋 Features
- **Interactive Input**: Prompts the user to enter a character.
- **Vowel Check**: Determines if the character is a vowel (`a, e, i, o, u`) regardless of case.
- **Dynamic Console Color**: Changes the terminal background color to green for vowels and red for non-vowels.
- **User-Friendly Output**: Displays a clear message based on the character type.

## 🛠️ How It Works
1. **User Input**: The `Read_Character()` function captures a single character input from the user.
2. **Vowel Check**: The `is_Vowels()` function checks if the character matches any vowel (`a, e, i, o, u`). It converts the character to lowercase for case-insensitive comparison.
3. **Color Change**: The program changes the console color based on whether the character is a vowel (green) or not (red).
4. **Result Display**: The program displays a message indicating whether the character is a vowel or not.

## 📝 Code Explanation
```cpp
#include <iostream>
#include <string>
using namespace std;

// Function to read a single character from the user
char Read_Character() {
    char C1 = ' ';
    cout << "Please Enter A Character : \n";
    cin >> C1;
    return C1;
}

// Function to check if a character is a vowel
bool is_Vowels(char C1) {
    C1 = tolower(C1); // Converts to lowercase for case-insensitive comparison
    return (C1 == 'a' || C1 == 'e' || C1 == 'i' || C1 == 'o' || C1 == 'u');
}

int main() {
    char C1 = Read_Character();

    // Check and display if the character is a vowel
    if (is_Vowels(C1)) {
        system("color 2F"); // Green background for vowels
        cout << "\nYES, Letter \'" << C1 << "\' is a Vowel." << endl;
    } else {
        system("color 4F"); // Red background for non-vowels
        cout << "\nNO, Letter \'" << C1 << "\' is Not a Vowel." << endl;
    }

    system("pause>0");
    return 0;
}
