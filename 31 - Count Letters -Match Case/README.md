# Problem 31: Character Occurrence Counter with Case Sensitivity🔠🔍

> **A C++ program that counts how many times a specific character appears in a given string with an option to match or ignore case sensitivity.** 💻✨

---

## 📘 Project Overview
This C++ program prompts the user to input a string and a specific character. It then counts how many times that character appears in the string, both with and without case sensitivity, and displays the results.

---

## 🌟 Features
- **String Input**: Prompts the user to input a string 📝.
- **Character Input**: Allows the user to specify a character to search for in the string 🔠.
- **Case-Sensitive and Case-Insensitive Counting**: Option to count character matches based on exact case or to ignore case sensitivity 🔍.
- **Inverted Case Display**: Displays both the entered character and its inverted case version (uppercase to lowercase and vice versa) ✨.
- **Clear Output**: Provides results in a user-friendly format with and without case matching.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - Prompts the user to input a string and returns it as output.
   - Uses `getline()` to capture the entire line, including spaces.

2. **`Read_Character()`**:
   - Prompts the user to enter a character to search for in the string.
   - Returns the entered character.

3. **`Invert_Character(char C1)`**:
   - This function inverts the case of the given character `C1`.
   - If `C1` is uppercase, it converts it to lowercase and vice versa.

4. **`Count_Letters(string S1, char C1, bool MatchCase = true)`**:
   - Counts how many times the specified character `C1` appears in the string `S1`.
   - If `MatchCase` is true, the count is case-sensitive (e.g., 'A' and 'a' are counted separately).
   - If `MatchCase` is false, the count is case-insensitive (e.g., 'A' and 'a' are considered the same).

### Program Flow:
1. The program prompts the user to input a string via `Read_String()`.
2. It then prompts the user to input a character using `Read_Character()`.
3. The program counts how many times the specified character appears in the string, first with case sensitivity enabled and then with case sensitivity disabled.
4. The result is displayed to the user in both cases.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String:
Hello World!

Please Enter A Character:
o

Letter 'o' Count = 1

Letter 'o' Or 'O' Count = 2
