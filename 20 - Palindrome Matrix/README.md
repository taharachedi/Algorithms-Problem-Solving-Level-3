# 🔄 Problem 20: Palindrome Matrix Checker 

> **A C++ program that checks if a 3x3 matrix is a palindrome.**

## 📘 Project Overview
This program defines a 3x3 matrix and checks whether the matrix is a palindrome. A matrix is considered a palindrome if each row is symmetrical, meaning the first half of the row mirrors the second half. The program displays the matrix and provides a message indicating whether it is a palindrome.

---

## 🌟 Features
- **Matrix Display**: Displays a 3x3 matrix in a readable format.
- **Palindrome Check**: Checks if the matrix is a palindrome by comparing elements symmetrically in each row.
- **Result Output**: Displays a message indicating if the matrix is a palindrome or not.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the matrix in a clean, formatted manner, with appropriate spacing between the elements.

2. **`isPalindrome_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function checks if the matrix is a palindrome. It compares the elements of each row, ensuring that the first element matches the last, the second matches the second-to-last, and so on. If any mismatch is found, it returns `false`; otherwise, it returns `true`.

### Program Flow
1. **Matrix Display**: The program first prints the matrix.
2. **Palindrome Check**: The program checks if each row of the matrix is a palindrome by comparing the elements symmetrically.
3. **Result Output**: It outputs a message stating whether the matrix is a palindrome or not.

---

## ▶️ Sample Output 1
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1: 
  1   2   1   
  5   5   5   
  7   3   7   

YES: Matrix is Palindrome
