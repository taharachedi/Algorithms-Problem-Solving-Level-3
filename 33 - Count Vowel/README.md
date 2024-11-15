# 🎲 Problem 33: Vowel Counter 

> **A C++ program that counts the number of vowels in a given string.**

---

## 📘 Project Overview
This program allows the user to input a string and calculates the total number of vowels (a, e, i, o, u) present in the string. The program handles both uppercase and lowercase characters, ensuring accurate results regardless of case.

---

## 🌟 Features
- **String Input**: Reads a full string (including spaces) from the user.
- **Case Insensitivity**: Handles uppercase and lowercase vowels.
- **Dynamic Console Color**: Changes the console background and text color to enhance the user experience.
- **Clear Output**: Displays the total count of vowels in the string.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to input a string.
  - Reads and returns the entire input string using `getline`.
- **`is_Vowel(char C1)`**:
  - Converts the character to lowercase.
  - Checks if the character is one of the vowels: `a, e, i, o, u`.
- **`Count_Vowel(string S1)`**:
  - Iterates through each character in the string.
  - Increments a counter for each vowel found.

### 2. Program Execution
1. The program changes the console background and text color.
2. It prompts the user to enter a string.
3. It counts the number of vowels in the string using `Count_Vowel`.
4. The total number of vowels is displayed to the user.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
Please Enter Ur String :
Hello World

Number Of Vowels is = 3
