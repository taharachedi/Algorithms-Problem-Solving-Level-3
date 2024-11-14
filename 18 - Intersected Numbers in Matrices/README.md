# 🔍 Problem 18: Intersecting Numbers in Matrices 

> **A C++ program that finds the common numbers between two 3x3 matrices and displays them.**

## 📘 Project Overview
This program defines two 3x3 matrices and finds the intersecting (common) numbers between them. The program demonstrates how to compare two matrices and identify elements that appear in both matrices.

---

## 🌟 Features
- **Matrix Display**: Displays two matrices in a clean, readable format.
- **Intersection Search**: Finds and displays the numbers that are common between the two matrices.
- **User Interaction**: The matrices are hardcoded, but the program can be extended to take user input if required.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the matrix in a formatted grid, with proper spacing between the elements.

2. **`isNumber_Exists(short arr[3][3], short Rows, short Cols, short Num)`**
   - This function searches for the number `Num` in the given matrix. If the number is found, it returns `true`; otherwise, it returns `false`.

3. **`Print_Intersected_Num(short arr1[3][3], short Rows, short Cols, short arr2[3][3])`**
   - This function identifies the numbers that exist in both matrices (`arr1` and `arr2`) and prints them. It uses `isNumber_Exists` to check if each element in `arr1` is also present in `arr2`.

### Program Flow
1. **Matrix Initialization**: Two 3x3 matrices, `arr1` and `arr2`, are hardcoded for this example.
   - `arr1` = `{{1, 8, 9}, {2, 3, 4}, {5, 4, 3}}`
   - `arr2` = `{{0, 0, 1}, {1, 1, 2}, {3, 0, 1}}`
   
2. **Matrix Display**: The program prints both matrices for the user to see.

3. **Intersection Calculation**: The program then calculates the intersecting numbers between the two matrices by comparing each element in `arr1` with `arr2`.

4. **Result Display**: The program outputs the intersected numbers from the matrices.

---

## ▶️ Sample Output 1
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:  
  1   8   9   
  2   3   4   
  5   4   3   

Matrix2:  
  0   0   1   
  1   1   2   
  3   0   1   

Intersected Numbers in Matrices :  
  1     1     2
  3
