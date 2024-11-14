# 🟩 Problem 11: Matrix Randomization and Comparison 

> **A C++ program that generates two random 3x3 matrices, calculates their sums, and compares if they are equal.**

## 📘 Project Overview
This program generates two 3x3 matrices with random numbers, computes their sums, and checks whether the matrices are equal based on their sums.

---

## 🌟 Features
- **Random Matrix Generation**: Generates two 3x3 matrices with random values between a specified range (1 to 10).
- **Matrix Display**: Outputs each matrix in a formatted grid.
- **Matrix Summation**: Computes the sum of all elements in each matrix.
- **Matrix Equality Check**: Compares the two matrices by their sums and determines if they are equal.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Fills a 3x3 matrix with random values between 1 and 10.
   
2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the matrix in a clean grid format using `printf`.

3. **`Sum_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Calculates and returns the sum of all the matrix elements.

4. **`is_Equal(short arr1[3][3], short arr2[3][3], short Rows, short Cols)`**
   - Compares two matrices by their sums and returns `true` if the sums are equal.

### Program Flow
1. **Matrix Generation**: Two 3x3 matrices are filled with random values.
2. **Matrix Display**: Both matrices are displayed in a formatted grid.
3. **Matrix Summation**: The sums of both matrices are calculated.
4. **Equality Check**: The sums of both matrices are compared. If they are equal, it prints that the matrices are equal; otherwise, it prints that they are not equal.

---

## ▶️ Sample Output
Here's an example of what the output might look like when you run the program:

```plaintext
Matrix1:
  7  3  8
  4  2  5
  1  9  6

Sum1: 45

Matrix2:
  9  4  1
  6  7  2
  3  8  5

Sum2: 45

YES: Matrices are Equal
