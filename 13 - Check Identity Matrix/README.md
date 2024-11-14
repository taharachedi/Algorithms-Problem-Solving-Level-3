# 🟩 Problem 13: Identity Matrix Checker 

> **A C++ program that checks if a 3x3 matrix is an identity matrix.**

## 📘 Project Overview
This program takes a 3x3 matrix as input, checks if it is an identity matrix, and displays the result.

---

## 🌟 Features
- **Matrix Display**: Displays the given 3x3 matrix in a clean and formatted grid.
- **Identity Matrix Check**: Checks if the given matrix satisfies the conditions of an identity matrix:
  - All diagonal elements (from top left to bottom right) must be 1.
  - All off-diagonal elements (all non-diagonal) must be 0.
- **Output Result**: Displays whether the matrix is an identity matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the given 3x3 matrix in a readable grid format using `setw` for alignment.

2. **`is_Identity_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Checks if the matrix is an identity matrix:
     - It compares each diagonal element to 1 and all off-diagonal elements to 0.
     - If all conditions are met, it returns `true`; otherwise, it returns `false`.

### Program Flow
1. **Matrix Initialization**: The matrix is hardcoded to be an identity matrix for this example: `{{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}`.
2. **Matrix Display**: The matrix is printed in a neat, formatted grid.
3. **Identity Check**: The program checks whether the matrix is an identity matrix by verifying each element.
4. **Result Output**: It prints either `YES: Matrix is Identity` or `NO: Matrix is Not Identity` based on the result of the check.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:
  1   0   0 
  0   1   0 
  0   0   1 

YES: Matrix is Identity
