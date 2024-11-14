# Problem 30: Count Character Occurrences in a String 🔠🔢

> **A C++ program that counts how many times a specific character appears in a given string.** 💻✨

---

## 📘 Project Overview
This C++ program prompts the user to input a string and a specific character. It then counts how many times that character appears in the string and displays the result. This program is designed to demonstrate string manipulation and basic user input handling in C++.

---

## 🌟 Features
- **String Input**: Prompts the user to input a string 📝.
- **Character Input**: Allows the user to enter a character to search for in the string 🔠.
- **Counting Occurrences**: Counts how many times the specified character appears in the string 🔢.
- **Clear Output**: Displays the count of the specified character in a user-friendly format ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to input a string and returns it as the output.
   - It uses `getline()` to read the entire line of input, including spaces.

2. **`Read_Character()`**:
   - This function prompts the user to enter a character to search for in the string.
   - It returns the entered character as a `char` type.

3. **`Count_Letters(string S1, char C1)`**:
   - This function counts how many times the character `C1` appears in the string `S1`.
   - It iterates over the string and compares each character with `C1`. The count is incremented each time the characters match.

### Program Flow:
1. The program prompts the user to input a string via `Read_String()`.
2. It then prompts the user to input a character using `Read_Character()`.
3. The program counts how many times the specified character appears in the string using the `Count_Letters()` function.
4. The result is displayed to the user.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String: 
Hello World!

Please Enter a Character: 
o

Letter 'o' Count = 2
