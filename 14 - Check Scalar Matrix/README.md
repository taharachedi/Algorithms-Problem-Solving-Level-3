# 🟩 Problem 14: Scalar Matrix Checker 

> **A C++ program that checks if a 3x3 matrix is a scalar matrix.**

## 📘 Project Overview
This program takes a 3x3 matrix as input, checks if it is a scalar matrix, and displays the result.

---

## 🌟 Features
- **Matrix Display**: Displays the given 3x3 matrix in a clean and formatted grid.
- **Scalar Matrix Check**: Checks if the given matrix satisfies the conditions of a scalar matrix:
  - All diagonal elements (from top left to bottom right) must be the same.
  - All off-diagonal elements (all non-diagonal) must be 0.
- **Output Result**: Displays whether the matrix is a scalar matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the given 3x3 matrix in a readable grid format using `setw` for alignment.

2. **`is_Scalar_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Checks if the matrix is a scalar matrix:
     - It compares each diagonal element to the first diagonal element.
     - It ensures that all off-diagonal elements are 0.
     - If all conditions are met, it returns `true`; otherwise, it returns `false`.

### Program Flow
1. **Matrix Initialization**: The matrix is hardcoded to be a scalar matrix for this example: `{{3, 0, 0}, {0, 3, 0}, {0, 0, 3}}`.
2. **Matrix Display**: The matrix is printed in a neat, formatted grid.
3. **Scalar Matrix Check**: The program checks whether the matrix is a scalar matrix by verifying two conditions:
   - All diagonal elements should be equal to the first diagonal element.
   - All off-diagonal elements should be 0.
4. **Result Output**: It prints either `YES: Matrix is Scalar` or `NO: Matrix is Not Scalar` based on the result of the check.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:
  3   0   0 
  0   3   0 
  0   0   3 

YES: Matrix is Scalar
