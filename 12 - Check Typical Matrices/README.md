# 🟩 Problem 12: Matrix Comparison 

> **A C++ program that generates two random 3x3 matrices and checks if they are "typical" (identical element by element).**

## 📘 Project Overview
This program generates two 3x3 matrices with random values, compares them element by element, and determines whether the two matrices are identical (typical).

---

## 🌟 Features
- **Random Matrix Generation**: Generates two 3x3 matrices with random values between a specified range (1 to 10).
- **Matrix Display**: Outputs each matrix in a clean, formatted grid.
- **Element-wise Matrix Comparison**: Compares two matrices element by element and determines if they are identical.
- **Typical Matrix Check**: If all elements in both matrices match, they are considered "typical."

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Fills a 3x3 matrix with random values between 1 and 10.
   
2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the matrix in a neat, formatted grid using `printf`.

3. **`are_Typical(short arr1[3][3], short arr2[3][3], short Rows, short Cols)`**
   - Compares the two matrices element by element. If all elements match, it returns `true`; otherwise, it returns `false`.

### Program Flow
1. **Matrix Generation**: Two 3x3 matrices are filled with random values between 1 and 10.
2. **Matrix Display**: Both matrices are displayed in a grid format.
3. **Element-wise Comparison**: The program checks if the matrices are "typical" by comparing each corresponding element.
4. **Equality Check**: If the matrices are identical element by element, the program will output that the matrices are "Typical"; otherwise, it will state that they are not typical.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:
  7  3  8
  4  2  5
  1  9  6

Matrix2:
  9  4  1
  6  7  2
  3  8  5

NO: Matrices are Not Typical
