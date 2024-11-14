# 🌸Problem 25: Lowercase First Letter of Each Word 

> **A C++ program that takes a user input string and converts the first letter of each word to lowercase.** 💡

---

## 📘 Project Overview
This C++ program allows users to input a string and then converts the first letter of each word to lowercase while keeping the rest of the letters unchanged. It uses basic string manipulation and the `tolower()` function to achieve this functionality.

---

## 🌟 Features
- **String Input**: Asks the user to enter a string 📜.
- **Lowercase Conversion**: Converts the first letter of each word to lowercase 🔡.
- **Handles Multiple Words**: Works with strings containing multiple words separated by spaces 🗣️.
- **Simple User Interface**: Easy-to-use interface with clear instructions and output ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to input a string and returns the string.
   - It uses `getline(cin, S1)` to support spaces between words.

2. **`Lower_First_Letter(string S1)`**:
   - This function processes the string `S1` and converts the first letter of each word to lowercase.
   - The program uses `tolower()` from `<cctype>` to convert the first non-space character of each word.
   - A boolean flag (`isFirstLetter`) is used to track when a new word begins, ensuring that only the first letter of each word is converted.

### Program Flow:
1. The program first calls `Read_String()` to get the input string from the user.
2. Then, it calls `Lower_First_Letter()` to convert the first letter of each word to lowercase.
3. Finally, it outputs the modified string with the updated first letters.

---

## ▶️ Sample Output
Here's an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String: 
Hello World C++ Programming

String After Conversion : 
hello world c++ programming
