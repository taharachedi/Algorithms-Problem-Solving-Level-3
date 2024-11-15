# 🎲 Problem 37: String Splitter in C++

> **A C++ program to split a user-provided string into individual words (tokens) based on a delimiter and display them.**

---

## 📘 Project Overview
This program allows users to input a string, splits it into words (or tokens) based on a specified delimiter (default: space), and displays the split tokens along with their count.

---

## 🌟 Features
- **String Input**: Reads a complete string with spaces from the user.
- **Custom Delimiters**: Splits the string using a default or user-defined delimiter.
- **Vector Storage**: Stores the tokens in a dynamic vector for flexibility and easy processing.
- **Token Display**: Prints each token in a new line and shows the total number of tokens.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to input a string.
  - Uses `getline()` to read the entire input, including spaces.
- **`Split_String(string S1, string Delimiter = " ")`**:
  - Splits the input string into tokens based on the specified delimiter.
  - Stores non-empty tokens in a vector and returns the vector.
- **`Print_Split_Vector(vector<string>& vString)`**:
  - Iterates through the vector of tokens and prints each on a new line.

### 2. Program Execution
1. Reads a string from the user.
2. Splits the string into tokens based on spaces.
3. Displays the total number of tokens and each token.

---

## ▶️ Sample Execution
Example input and output:

```plaintext
Please Enter Ur String:
Hello   World  This  is   C++ 

Tokens = 5
Hello
World
This
is
C++
