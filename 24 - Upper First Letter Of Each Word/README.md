# 🌟Problem 24: Uppercase First Letter of Each Word 

> **A C++ program that takes a user input string and converts the first letter of each word to uppercase.** ✨

---

## 📘 Project Overview
This C++ program allows users to input a string and then converts the first letter of each word to uppercase while keeping the rest of the letters in lowercase. It makes use of basic string manipulation and the `toupper()` function to achieve this functionality.

---

## 🌟 Features
- **String Input**: Prompts the user to enter a string 📜.
- **Uppercase Conversion**: Converts the first letter of each word to uppercase 🔠.
- **Handles Multiple Words**: Works with strings containing multiple words separated by spaces 🗣️.
- **Simple User Interface**: Easy-to-use interface with clear instructions and output 🌈.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to enter a string and returns the string.
   - It uses `getline(cin, S1)` to allow spaces between words.

2. **`Upper_First_Letter(string S1)`**:
   - This function processes the input string `S1` and converts the first letter of each word to uppercase.
   - The program uses the `toupper()` function from `<cctype>` to convert the first non-space character after each space.
   - The function uses a boolean flag (`isFirstLetter`) to detect when a new word starts.

### Program Flow:
1. The program first calls `Read_String()` to get the user input.
2. Then, it calls `Upper_First_Letter()` to convert the first letter of each word to uppercase.
3. Finally, it outputs the modified string.

---

## ▶️ Sample Output
Here's an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String: 
hello world c++ programming

String After Conversion: 
Hello World C++ Programming
