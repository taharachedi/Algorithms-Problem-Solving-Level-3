# 🎯 Problem 42: Replace Words with Optional Case Sensitivity 

> **This program replaces all occurrences of a specific word in a given string with another word, with an option for case-sensitive or case-insensitive replacement.**

---

## 📘 Project Overview
This program allows the user to replace all instances of a specific word in a string with another word, either case-sensitively or case-insensitively. The function `Replace_Words()` takes four parameters: the string, the word to replace, the replacement word, and an optional boolean `MatchCase` flag (default `true`). If `MatchCase` is `false`, the replacement ignores case differences.

---

## 🌟 Features
1. **Replace Word in String**: Replaces all occurrences of a specified word with another word in the string.
2. **Case-Sensitive Option**: Offers the choice of replacing words in a case-sensitive or case-insensitive manner.
3. **String Manipulation**: Utilizes helper functions to split, join, and convert strings to lowercase as needed.

---

## ⚙️ How It Works

### 1. Functions
- **`Split_String(string S1, string Delimiter)`**:
  - Splits the input string `S1` into words using the specified delimiter (default space).
  
- **`Join_String(vector <string> vString, string Delimiter)`**:
  - Joins the vector of strings `vString` into a single string, separated by the specified delimiter.
  
- **`LowerAllString(string S1)`**:
  - Converts the entire string `S1` to lowercase.
  
- **`Replace_Words(string S1, string ToReplace, string ReplaceTo, bool MatchCase)`**:
  - Replaces occurrences of `ToReplace` in the string `S1` with `ReplaceTo`.
  - If `MatchCase` is `true`, it performs case-sensitive replacement. If `MatchCase` is `false`, it converts both the string and `ToReplace` to lowercase for case-insensitive matching.

### 2. Program Execution
1. Initializes the input string `S1`, the word `ToReplace`, and the replacement word `ReplaceTo`.
2. Replaces all occurrences of `ToReplace` in `S1` based on the `MatchCase` flag, using `Replace_Words()`.
3. Prints the original string and the modified string with both case-sensitive and case-insensitive replacements.

---

## ▶️ Sample Execution

### Input:
```plaintext
Original String : 
Morocco is The Best Country Ever! Visca Morocco

Replace With Match Case : 
Morocco is The Best Country Ever! Visca Morocco

Replace Without Match Case : 
USA is The Best Country Ever! Visca USA
