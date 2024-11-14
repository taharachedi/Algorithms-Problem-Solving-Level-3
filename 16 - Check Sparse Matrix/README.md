# 🧑‍💻 Problem 16: Matrix Sparsity Checker

> **A C++ program that checks if a given 3x3 matrix is sparse. A sparse matrix is one where the majority of its elements are zero.**

## 📘 Project Overview
This program defines a 3x3 matrix and checks if it is a sparse matrix. A matrix is considered sparse if more than half of its elements are zero.

---

## 🌟 Features
- **Matrix Display**: Displays the matrix in a neat and readable format.
- **Sparse Matrix Check**: Determines if the matrix is sparse by checking if the number of zeros exceeds half the total number of elements.
- **Flexible Functionality**: Includes functions to count specific numbers (zeros in this case) in the matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the matrix in a clean, formatted grid.

2. **`Count_Number_In_Matrix(short arr[3][3], short Rows, short Cols, short Num)`**
   - This function counts how many times the number `Num` appears in the matrix by iterating over the matrix elements.

3. **`is_Sparse_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function determines whether the matrix is sparse. It counts the zeros in the matrix and compares this count to the total number of elements. If the number of zeros is greater than or equal to half the total elements, the matrix is considered sparse.

### Program Flow
1. **Matrix Initialization**: The matrix `arr` is hardcoded to be `{{0, 0, 0}, {1, 2, 0}, {0, 2, 3}}` for this example.
2. **Matrix Display**: The matrix is printed in a formatted grid.
3. **Sparse Matrix Check**: The program checks if the matrix is sparse based on the count of zero elements.
4. **Result Display**: The program outputs whether the matrix is sparse or not.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:  
  0   0   0 
  1   2   0 
  0   2   3 

YES: it is Sparse
