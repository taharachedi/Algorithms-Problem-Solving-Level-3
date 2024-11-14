# 🎲 Problem 4: Random 3x3 Matrix Column Sum Calculator

> **A C++ program that generates a 3x3 matrix filled with random numbers, calculates the sum of each column, and displays these sums.**

## 📘 Project Overview
This C++ program creates a 3x3 matrix with random integer values between 1 and 100. It calculates the sum of each column and outputs both the matrix and the calculated column sums in a clear and formatted manner.

---

## 🌟 Features
- **Random Matrix Generation**: Fills a 3x3 matrix with random integers from 1 to 100.
- **Column Sum Calculation**: Calculates the sum of each column in the matrix.
- **Formatted Output**: Neatly displays both the matrix and column sums using the `iomanip` library for alignment.

---

## ⚙️ How It Works

### Core Functions
1. **`Random_Number(short From, short To)`**:
   - Generates a random integer within a specified range.
2. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
   - Populates each cell in a 3x3 matrix with random values.
3. **`Print_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
   - Prints the matrix in a formatted 3x3 grid.
4. **`Col_Sum(short arr[3][3], short Rows, short Cols)`**:
   - Calculates the sum of a specified column.
5. **`Print_Col_Sum(short arr[3][3], short Rows, short Cols)`**:
   - Prints each column’s sum by calling the `Col_Sum` function for each column.

### Program Execution
1. **Random Seed Initialization**: Sets the random seed using `time()` to ensure unique random values on each run.
2. **Matrix Population and Output**: Fills a 3x3 matrix with random values and prints it.
3. **Column Sum Calculation**: Calculates and displays the sum of each column.

---

## ▶️ Sample Output
The program’s output may look like the following:

```plaintext
The Following is a 3x3 Random Matrix:
 34  72  88
 65  90  12
 11  47  26

The Following are The Sum Of Each Col in The Matrix:
Col 1 Sum: 110
Col 2 Sum: 209
Col 3 Sum: 126
