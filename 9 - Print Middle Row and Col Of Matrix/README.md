# 🟧 Problem 9: Matrix Randomization and Middle Row/Column Extraction 

> **A C++ program that generates a random 3x3 matrix, displays it, and extracts the middle row and column.**

## 📘 Project Overview
This program showcases matrix handling techniques by generating a 3x3 matrix with random values, displaying it in a structured format, and separately printing the middle row and middle column.

---

## 🌟 Features
- **Random Matrix Generation**: Fills a 3x3 matrix with random values in a specified range.
- **Matrix Display**: Outputs the matrix in a visually structured format.
- **Middle Row and Column Extraction**: Outputs only the middle row and column of the matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Populates the matrix with random integers from a defined range.

2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Outputs the entire 3x3 matrix in a tabular format.

3. **`Print_Middle_Row(short arr[3][3], short Rows, short Cols)`**
   - Extracts and displays the middle row of the matrix.

4. **`Print_Middle_Col(short arr[3][3], short Rows, short Cols)`**
   - Extracts and displays the middle column of the matrix.

### Program Flow
1. **Generate and Display Matrix**: Creates a random 3x3 matrix and displays it.
2. **Middle Row Extraction**: Extracts and displays the middle row from the matrix.
3. **Middle Column Extraction**: Extracts and displays the middle column from the matrix.

---

## ▶️ Sample Output
A sample run of the program might look like this:

```plaintext
Matrix1:
  4   7   9
  1   3   5
  6   2   8

Middle Row Of Matrix1 is:
  1   3   5

Middle Col Of Matrix1 is:
       7
       3
       2
