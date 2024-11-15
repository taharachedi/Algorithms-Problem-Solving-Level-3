# 🎲 Problem 34: Vowel Extractor 

> **A C++ program that extracts and displays all vowels from a given string.**

---

## 📘 Project Overview
This program allows the user to input a string and identifies all the vowels (a, e, i, o, u) present in the string. It handles both uppercase and lowercase letters and prints all vowels in the order they appear in the string.

---

## 🌟 Features
- **String Input**: Reads a full string, including spaces, from the user.
- **Case Insensitivity**: Identifies vowels regardless of whether they are uppercase or lowercase.
- **Dynamic Console Color**: Changes the console background and text color for an enhanced user experience.
- **Clear Output**: Displays all vowels in a single line, separated by spaces.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to input a string.
  - Reads and returns the entire string using `getline`.
- **`is_Vowel(char C1)`**:
  - Converts the character to lowercase.
  - Checks if the character is one of the vowels: `a, e, i, o, u`.
- **`Print_All_Vowels(string S1)`**:
  - Iterates through each character in the string.
  - Prints the vowels found, separated by spaces.

### 2. Program Execution
1. The program changes the console background and text color.
2. It prompts the user to enter a string.
3. It extracts and prints all vowels in the string using `Print_All_Vowels`.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
Please Enter Ur String:
Hello Universe

Vowels in String are : e o U i e e 
