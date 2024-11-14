# Problem 26: String Case Converter🔄

> **A C++ program that takes a user input string and converts the entire string to uppercase and then to lowercase.** 💻✨

---

## 📘 Project Overview
This C++ program allows users to input a string and then converts the entire string to uppercase and lowercase. The program uses basic string manipulation and the `toupper()` and `tolower()` functions to achieve this.

---

## 🌟 Features
- **String Input**: Prompts the user to enter a string 📜.
- **Uppercase Conversion**: Converts the entire string to uppercase 🔠.
- **Lowercase Conversion**: Converts the entire string to lowercase 🔡.
- **Simple User Interface**: User-friendly with clear output messages ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to input a string and returns the string.
   - It uses `getline(cin, S1)` to support spaces between words.

2. **`Upper_All_Letters(string S1)`**:
   - This function processes the string `S1` and converts every character to uppercase using `toupper()`.

3. **`Lower_All_Letters(string S1)`**:
   - This function processes the string `S1` and converts every character to lowercase using `tolower()`.

### Program Flow:
1. The program first calls `Read_String()` to get the input string from the user.
2. It then converts the entire string to uppercase using `Upper_All_Letters()`.
3. Next, it converts the same string to lowercase using `Lower_All_Letters()`.
4. Finally, it outputs both the uppercase and lowercase versions of the string.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String: 
Hello World C++

String After Upper :
HELLO WORLD C++

String After Lower : 
hello world c++
