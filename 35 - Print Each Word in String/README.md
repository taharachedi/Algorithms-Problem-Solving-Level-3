# 🎲 Problem 35: Word Extractor 

> **A C++ program that extracts and displays each word from a user-provided string.**

---

## 📘 Project Overview
This program takes a string input from the user and splits it into individual words based on spaces. Each word is then displayed on a new line in the console.

---

## 🌟 Features
- **String Input**: Reads a full string, including spaces, from the user.
- **Word Splitting**: Extracts each word from the string using a delimiter (`space`).
- **Dynamic Console Color**: Customizes the console's background and text color for a better user experience.
- **Handles Extra Spaces**: Ignores and skips multiple consecutive spaces in the input.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to enter a string.
  - Reads and returns the string using `getline`.
- **`Print_Each_Word_In_String(string S1)`**:
  - Splits the string into words using `find()` and `substr()`.
  - Ignores empty strings caused by consecutive spaces.
  - Displays each word on a new line.

### 2. Program Execution
1. The program changes the console background and text color.
2. It prompts the user to enter a string.
3. It splits the string into words and displays each word on a new line.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
Please Enter Ur String:
Hello  World    This   is C++

Ur String Words are :
Hello
World
This
is
C++
