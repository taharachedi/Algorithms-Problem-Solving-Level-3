# 🔍 Problem 17: Matrix Number Search

> **A C++ program that checks whether a specified number exists in a 3x3 matrix.**

## 📘 Project Overview
This program defines a 3x3 matrix and checks if a user-specified number exists within the matrix. The program provides an easy-to-follow method to search for an element in a matrix.

---

## 🌟 Features
- **Matrix Display**: Displays the matrix in a clean, readable format.
- **Number Search**: Prompts the user to input a number and searches for that number within the matrix.
- **User Interaction**: Allows the user to input a number to search for within the matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the matrix in a formatted grid, with proper spacing between the elements.

2. **`isNumber_Exists(short arr[3][3], short Rows, short Cols, short Num)`**
   - This function searches for the number `Num` in the matrix. If the number is found, it returns `true`; otherwise, it returns `false`.

3. **`Read_Number(string Msg)`**
   - This function prompts the user to enter a number. The number is validated to ensure it's not negative before returning it.

### Program Flow
1. **Matrix Initialization**: The matrix `arr` is hardcoded to be `{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}` for this example.
2. **Matrix Display**: The program first prints the matrix for the user to see.
3. **Number Input**: The program prompts the user to enter a number to search for.
4. **Search**: The program checks if the entered number exists in the matrix using the `isNumber_Exists` function.
5. **Result Display**: The program outputs whether the number was found in the matrix or not.

---

## ▶️ Sample Output 1
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:  
  1   2   3 
  4   5   6 
  7   8   9 

Please Enter The Num To Look From in Matrix? 
5

Yes, it's There
