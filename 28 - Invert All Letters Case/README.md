# Problem 28: Invert All Letters Case🔄

> **A C++ program that takes a user input string and inverts the case of all its letters (upper to lower, or lower to upper).** 💻✨

---

## 📘 Project Overview
This C++ program allows users to input a string, and it will invert the case of all letters within that string. If a letter is uppercase, it is converted to lowercase, and if it is lowercase, it is converted to uppercase. Non-alphabetical characters remain unaffected. This is a simple demonstration of string manipulation in C++.

---

## 🌟 Features
- **String Input**: Prompts the user to input a string 📝.
- **Case Inversion**: Inverts the case of all letters in the string (upper to lower, or lower to upper) 🔄.
- **Clear Output**: Displays the modified string with the inverted case ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to enter a string and returns the input string.
   - It uses `getline()` to read the entire line, including spaces, from the user.

2. **`Invert_Character_Case(char C1)`**:
   - This helper function takes a single character and checks if it is uppercase or lowercase.
   - If the character is uppercase, it is converted to lowercase using `tolower()`.
   - If the character is lowercase, it is converted to uppercase using `toupper()`.

3. **`Invert_All_Letters_Case(string S1)`**:
   - This function loops through the string `S1` and calls `Invert_Character_Case()` for each character.
   - It returns the string with all letter cases inverted.

### Program Flow:
1. The program first calls `Read_String()` to get the input string from the user.
2. It then inverts the case of all letters in the string using `Invert_All_Letters_Case()`.
3. Finally, it outputs the string after the case inversion.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String :
Hello World

String After Inverting All Letters Case :
hELLO wORLD
