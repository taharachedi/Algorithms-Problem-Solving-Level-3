# 🎯Problem 43: Remove Punctuations from String 

> **This program removes all punctuation characters from a given string.**

---

## 📘 Project Overview
This program defines a function `Remove_Punctuations()` that takes a string and removes all punctuation characters. The function loops through each character in the input string and checks if it's a punctuation character using the `ispunct()` function. If it's not a punctuation, it appends it to a new string.

---

## 🌟 Features
1. **Remove Punctuation**: Removes all punctuation characters from a given string.
2. **String Manipulation**: The program processes each character and excludes punctuation.

---

## ⚙️ How It Works

### 1. Functions
- **`Remove_Punctuations(string S1)`**:
  - Iterates over each character of the input string `S1` and constructs a new string `S2`, which contains only non-punctuation characters.
  - It uses the `ispunct()` function to check if a character is punctuation and excludes it from the result.

### 2. Program Execution
1. Initializes the input string `S1`.
2. Removes punctuation using the `Remove_Punctuations()` function.
3. Prints the original string and the string after removing punctuation.

---

## ▶️ Sample Execution

### Input:
```plaintext
Original String : 
Welcome To: USA ,it's A Great Country ; Visca USA!

After Remove Punctuations : 
Welcome To USA its A Great Country  Visca USA
