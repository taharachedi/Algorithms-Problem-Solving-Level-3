# 🎯 Problem 41: Replace Words in a String 

> **This program replaces all occurrences of a specific word in a given string with another word.**

---

## 📘 Project Overview
This program allows the user to replace all instances of a specific word in a string with another word. The function `Replace_Words()` takes three parameters: the string, the word to replace, and the replacement word. It uses the `find()` and `replace()` methods to perform the replacement.

---

## 🌟 Features
1. **Replace Word in String**: Replaces all occurrences of a specified word with another word in the string.
2. **User-Friendly Input**: Allows user to customize both the word to replace and the replacement word.
3. **Efficient String Manipulation**: Uses the `find()` and `replace()` methods of `string` class for efficient string manipulation.

---

## ⚙️ How It Works

### 1. Functions
- **`Replace_Words(string S1, string ToReplace, string ReplaceTo)`**:
  - Finds occurrences of `ToReplace` in the string `S1`.
  - Replaces each occurrence with the string `ReplaceTo`.
  - Continues until all instances are replaced.
  
### 2. Program Execution
1. Initializes the input string `S1` and the words `ToReplace` and `ReplaceTo`.
2. Replaces all occurrences of `ToReplace` in `S1` using `Replace_Words()`.
3. Prints the original and modified string.

---

## ▶️ Sample Execution

Example input and output:
```plaintext
Original String : 
Morocco is The Best Country Ever! Visca Morocco

String After Replace : 
USA is The Best Country Ever! Visca USA
