# 🔢 Problem 15: Matrix Number Counter 

> **A C++ program that counts how many times a specific number appears in a 3x3 matrix.**

## 📘 Project Overview
This program defines a 3x3 matrix and counts how many times a specific number appears in the matrix. It also includes functionality for user input and matrix display.

---

## 🌟 Features
- **Matrix Display**: Displays the matrix in a clean and well-formatted grid.
- **User Input**: Prompts the user to input a number to search for in the matrix.
- **Number Counting**: Counts the occurrences of the given number in the matrix and displays the result.
- **Error Handling**: Ensures the input number is non-negative.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the given 3x3 matrix in a neatly formatted grid using `setw` for proper alignment.

2. **`Read_Num(string Msg)`**
   - Prompts the user for a number input and ensures the number is non-negative. If the user enters a negative number, it keeps prompting until a valid number is entered.

3. **`Count_Num_In_Matrix(short arr[3][3], short Rows, short Cols, short Num)`**
   - This function counts how many times the number `Num` appears in the 3x3 matrix by iterating over each element of the matrix and checking for matches.

### Program Flow
1. **Matrix Initialization**: The matrix is hardcoded to be `{{1, 2, 1}, {2, 3, 4}, {4, 3, 2}}` for this example.
2. **Matrix Display**: The matrix is displayed in a neatly formatted grid.
3. **User Input**: The program prompts the user to enter a number to search for in the matrix.
4. **Counting Occurrences**: The program counts how many times the specified number appears in the matrix and prints the result.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1: 
  1   2   1 
  2   3   4 
  4   3   2 

Enter The Number To Count in Matrix? 
1

Number 1 Count in Matrix is : 2
