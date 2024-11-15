# 🎯 Problem 38: String Trimming in C++

> **A C++ program to remove leading, trailing, and both leading and trailing spaces from a string.**

---

## 📘 Project Overview
This program demonstrates how to trim whitespace from the beginning, end, or both sides of a string using custom functions.

---

## 🌟 Features
- **Trim Left**: Removes all leading (left) spaces from a string.
- **Trim Right**: Removes all trailing (right) spaces from a string.
- **Trim**: Combines both trimming operations to remove spaces from both sides.

---

## ⚙️ How It Works

### 1. Functions
- **`TrimLeft(string S1)`**:
  - Iterates from the start of the string and removes spaces until the first non-space character is found.
  - Returns the trimmed string starting from the first non-space character.

- **`TrimRight(string S1)`**:
  - Iterates from the end of the string and removes spaces until the first non-space character is encountered.
  - Returns the string up to the last non-space character.

- **`Trim(string S1)`**:
  - Calls `TrimLeft` and `TrimRight` to remove spaces from both sides of the string.

### 2. Program Execution
1. A predefined string with leading and trailing spaces is used.
2. Each function is called to demonstrate its functionality.
3. The original, left-trimmed, right-trimmed, and fully trimmed strings are displayed.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
String     :       Taha Rachedi      
Trim Left  : Taha Rachedi      
Trim Right :       Taha Rachedi
Trim       : Taha Rachedi
