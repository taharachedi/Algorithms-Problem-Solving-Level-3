# 🎯 Problem 40: Reverse Words in a String 

> **This program reverses the order of words in a given string.**

---

## 📘 Project Overview
This program reads a string from the user, splits it into individual words, and then reverses the order of those words. It utilizes `vector` to handle the words and iterators to perform the reversal.

---

## 🌟 Features
1. **Split String into Words**: Breaks the input string into a vector of words using a specified delimiter (default is a space).
2. **Reverse Words in String**: Reverses the order of words using iterators.
3. **User-Friendly Input**: Reads the entire string (including spaces) from the user.

---

## ⚙️ How It Works

### 1. Functions
- **`Read_String()`**:
  - Prompts the user to enter a string.
  - Uses `getline()` to capture the input, including spaces.

- **`SplitString(string S1, string Delimiter)`**:
  - Splits the string `S1` into words based on the `Delimiter`.
  - Removes leading and trailing delimiters while storing meaningful words in a `vector`.

- **`Reverse_Words_In_String(string S1)`**:
  - Calls `SplitString()` to tokenize the string.
  - Iterates through the `vector` in reverse order to create a new string.
  - Removes the trailing delimiter before returning the result.

### 2. Program Execution
1. Reads a string from the user.
2. Splits the string into words.
3. Reverses the order of the words.
4. Prints the reversed string.

---

## ▶️ Sample Execution

### Input:
```plaintext
Please Enter Ur String : 
Hello world from ALTEN

String After Reversing Words : 
ALTEN from world Hello
