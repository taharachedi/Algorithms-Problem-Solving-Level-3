# Problem 27: Character Case Inverter 🔄

> **A C++ program that takes a user input character and inverts its case (upper to lower, or lower to upper).** 💻✨

---

## 📘 Project Overview
This C++ program allows users to input a single character and inverts its case. If the character is uppercase, it will be converted to lowercase, and vice versa. The program uses basic string manipulation and the `toupper()` and `tolower()` functions to achieve this.

---

## 🌟 Features
- **Character Input**: Prompts the user to input a single character 🔤.
- **Case Inversion**: Inverts the case of the entered character (upper to lower, or lower to upper) 🔄.
- **Simple User Interface**: Clear output message indicating the inverted case ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_Character()`**:
   - This function prompts the user to input a single character and returns the character.
   - It uses `cin` to capture the input from the user.

2. **`Invert_Character(char C1)`**:
   - This function checks whether the character `C1` is uppercase or lowercase.
   - If it is uppercase, it converts the character to lowercase using `tolower()`.
   - If it is lowercase, it converts the character to uppercase using `toupper()`.

### Program Flow:
1. The program first calls `Read_Character()` to get the input character from the user.
2. It then inverts the case of the character using `Invert_Character()`.
3. Finally, it outputs the character after the case inversion.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter A Character : 
A
Char After Inverting Cases : a
