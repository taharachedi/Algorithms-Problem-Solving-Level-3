# 🎲 Problem 36: Word Counter 

> **A C++ program to count the number of words in a user-provided string.**

---

## 📘 Project Overview
This program takes a string input from the user, counts the number of words it contains, and displays the total count. It effectively handles multiple spaces between words and ensures accurate counting.

---

## 🌟 Features
- **String Input**: Reads a complete string (including spaces) from the user.
- **Word Counting**: Counts the words in the string by splitting it based on spaces.
- **Handles Extra Spaces**: Ignores multiple consecutive spaces to ensure proper word counting.
- **Dynamic Console Color**: Enhances the user experience with a custom console background and text color.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to enter a string.
  - Reads the input using `getline()` and returns it.
- **`Count_Each_Word_In_String(string S1)`**:
  - Splits the string into words using the `find()` and `substr()` methods.
  - Increments a counter for each word, ignoring empty segments caused by multiple spaces.

### 2. Program Execution
1. The program sets a custom console color.
2. Prompts the user to input a string.
3. Counts and displays the number of words in the input.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
Please Enter Ur String:
Hello   World  This  is C++

The Number Of Words In Ur String Is = 5
