# 🟩 Problem 8: Matrix Multiplication Program 

> **A C++ program to generate two random 3x3 matrices, display them, and output their product matrix.**

## 📘 Project Overview
This program demonstrates matrix manipulation by generating two random 3x3 matrices, displaying them, and calculating their product. The output shows the original matrices followed by their multiplication result.

---

## 🌟 Features
- **Random Matrix Generation**: Creates two 3x3 matrices with random values.
- **Matrix Multiplication**: Computes the product of the two matrices.
- **Formatted Output**: Uses `printf` to display matrices in a clean, formatted grid.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Fills the matrix with random numbers in a specified range.

2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Outputs the matrix in a 3x3 grid format, aligning values for readability.

3. **`Multiply_Two_Matrix(short arr1[3][3], short arr2[3][3], short Mult[3][3], short Rows, short Cols)`**
   - Computes the matrix product by performing the dot product of rows from the first matrix with columns of the second matrix.

### Program Flow
1. **Generate and Display Two Matrices**: Initializes and displays two 3x3 matrices with random values.
2. **Compute and Display Product**: Multiplies the matrices and outputs the resulting matrix.

---

## ▶️ Sample Output
A sample run of the program might look like this:

```plaintext
Matrix1:
  4   2   7 
  5   9   1 
  3   6   8 

Matrix2:
  1   5   2 
  9   4   3 
  7   3   6 

Result:
 75  47  55 
107  62  62 
103  59  63 
