# 🎲 Problem 32: Vowel Checker 

> **A C++ program that reads a character and checks whether it is a vowel (a, e, i, o, u). The program changes the console text color based on the result.**

---

## 📘 Project Overview
This program allows the user to input a single character and verifies whether it is a vowel. If the input is a vowel, the console text color changes to green, and a confirmation message is displayed. Otherwise, the console text color changes to red, and a message indicating that the character is not a vowel is shown.

---

## 🌟 Features
- **Character Input**: Prompts the user to input a single character.
- **Case Insensitivity**: Handles both uppercase and lowercase characters.
- **Dynamic Console Color**: Changes the console's text color based on whether the input is a vowel.
- **User-Friendly Output**: Displays a clear message for both cases (vowel or not).

---

## ⚙️ How It Works

### 1. Functions
- **`Read_Character()`**:
  - Prompts the user to enter a character.
  - Reads the input character and returns it.
- **`is_Vowels(char C1)`**:
  - Converts the input character to lowercase.
  - Checks if the character is one of the vowels: `a, e, i, o, u`.

### 2. Program Execution
1. The program prompts the user to input a character.
2. It checks if the character is a vowel using the `is_Vowels` function.
3. Based on the result:
   - If the character is a vowel:
     - The console color changes to green.
     - A message confirming the input is a vowel is displayed.
   - If the character is not a vowel:
     - The console color changes to red.
     - A message indicating the input is not a vowel is displayed.

---

## ▶️ Sample Execution
Example output when a vowel is entered:

```plaintext
Please Enter A Character :
a

YES Letter 'a' is Vowel.
