# Problem 29: Count Small and Capital Letters 🔢🔤

> **A C++ program that counts the number of small and capital letters in a given string.** 💻✨

---

## 📘 Project Overview
This C++ program takes a string input from the user and counts the number of small letters (lowercase) and capital letters (uppercase) in it. Additionally, it can count all characters in the string, based on user preference. The program provides two methods to perform the counting: one using separate functions and another using a unified function with an enum for customization.

---

## 🌟 Features
- **String Input**: Prompts the user to input a string 📝.
- **Counting Letters**: 
  - Counts the total number of characters, capital letters, and small letters in the string 🔢.
  - Provides two methods for counting: using individual functions or a unified function with an enum 📊.
- **Clear Output**: Displays the counts in a user-friendly format ✨.

---

## ⚙️ How It Works

### Key Functions:
1. **`Read_String()`**:
   - This function prompts the user to input a string and returns it as the output.
   - It uses `getline()` to read the entire line of input, including spaces.

2. **`Count_Small_Letters(string S1)`**:
   - This function iterates over the string and counts the number of lowercase (small) letters using `islower()`.

3. **`Count_Capital_Letters(string S1)`**:
   - This function counts the number of uppercase (capital) letters in the string using `isupper()`.

4. **`Count_Letters(string S1, enWhatToCount Type)`**:
   - This function counts the number of letters based on the specified type (`All`, `Capital_Letters`, or `Small_Letters`).
   - It uses an enum (`enWhatToCount`) to determine which type of letter to count, and returns the result accordingly.

### Enum `enWhatToCount`:
- **`Small_Letters`**: Counts the lowercase letters.
- **`Capital_Letters`**: Counts the uppercase letters.
- **`All`**: Counts all characters in the string (default behavior).

### Program Flow:
1. The program prompts the user to input a string via `Read_String()`.
2. It then calculates and displays:
   - The total length of the string.
   - The count of capital and small letters using both individual functions (`Count_Small_Letters()` and `Count_Capital_Letters()`) and the unified function (`Count_Letters()`).
3. The program outputs the counts in a readable format.

---

## ▶️ Sample Output
Here’s an example of what the output will look like when the program runs:

```plaintext
Please Enter Ur String : 
Hello World!

String Length = 12
Capital Letters Count = 2
Small Letters Count = 8

---------------- Methods 2 : ----------------

String Length = 12
Capital Letters Count = 2
Small Letters Count = 8
