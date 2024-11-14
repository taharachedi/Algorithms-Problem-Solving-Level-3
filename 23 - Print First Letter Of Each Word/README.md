# Problem 23: First Letter of Each Word Printer 

> **A C++ program that takes a user input string and prints the first letter of each word in the string.**

## 📘 Project Overview
This C++ program prompts the user to enter a string and then prints the first letter of each word in that string. It uses basic string manipulation techniques to identify the first letter of each word by looking for spaces and word boundaries. The program is designed to handle any string with multiple words and spaces.

---

## 🌟 Features
- **String Input**: The program prompts the user to input a string.
- **First Letter Extraction**: The program extracts and prints the first letter of each word in the input string.
- **Handles Multiple Words**: The program works with strings that contain multiple words separated by spaces.
- **Simple User Interface**: The program provides clear output with instructions for the user.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to enter a string and returns the string.
   - It uses `getline(cin, S1)` to read the entire line of text, allowing spaces between words.

2. **`Print_First_Letters_OfEach_Word(string S1)`**:
   - This function processes the input string `S1` and prints the first letter of each word.
   - The function iterates through the string and identifies the first non-space character after each space. These characters are printed as the first letter of each word.
   - A boolean flag (`isFirstLetter`) is used to track when a new word starts (i.e., after a space).

### Program Flow:
1. The program first calls `Read_String()` to obtain the user's input.
2. Then, it calls `Print_First_Letters_OfEach_Word()` to process the string and print the first letter of each word.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Please Enter Ur String : 
Hello World C++ Programming

First Letters Of This String : 
H
W
C
P
