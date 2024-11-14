# 🟧 Problem 7: Matrix Transpose Generator 

> **A simple C++ program to create, display, and transpose a 3x3 ordered matrix.**

## 📘 Project Overview
This program generates a 3x3 matrix with sequential numbers, displays it, and then outputs its transpose. It provides a practical demonstration of matrix manipulation techniques in C++.

---

## 🌟 Features
- **Ordered Matrix Generation**: Creates a 3x3 matrix filled with ordered numbers starting from 1.
- **Matrix Transposition**: Computes and displays the transpose of the generated matrix.
- **Structured Output**: Uses `iomanip` for formatting, ensuring the matrix is displayed in a neat grid.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Ordered_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Fills the matrix with sequential numbers from 1 up to 9.

2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Outputs the matrix in a 3x3 grid format with `setw` for alignment.

3. **`Transpose_Matrix(short arr[3][3], short Trans[3][3], short Rows, short Cols)`**
   - Computes the transpose of the matrix by swapping its rows and columns.

### Program Flow
1. **Initialize and Display Ordered Matrix**: Fills and displays the 3x3 matrix with numbers from 1 to 9.
2. **Compute and Display Transpose**: Calculates the transpose of the original matrix and displays the result.

---

## ▶️ Sample Output
A sample run of the program will display:

```plaintext
The Following is a 3x3 Ordered Matrix:
  1   2   3
  4   5   6
  7   8   9

The Following is The Transposed Matrix:
  1   4   7
  2   5   8
  3   6   9
