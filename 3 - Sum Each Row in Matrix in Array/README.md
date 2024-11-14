# 🎲 Problem 3: Sum Each Row in Matrix in Array

> **A C++ program that generates a 3x3 matrix filled with random numbers, calculates the sum of each row, and stores these sums in an array.**

## 📘 Project Overview
This program in C++ creates a 3x3 matrix filled with random integers (between 1 and 100). It then calculates the sum of each row, stores these sums in an array, and displays the matrix along with the row sums.

---

## 🌟 Features
- **Random Matrix Generation**: Populates a 3x3 matrix with random integers from 1 to 100.
- **Row Sum Calculation**: Calculates and stores the sum of each row in a separate array.
- **Formatted Output**: Displays both the matrix and row sums in a well-aligned format using the `iomanip` library.

---

## ⚙️ How It Works

### Core Functions
1. **`Random_Number(short From, short To)`**:
   - Generates a random integer within a specified range.
2. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
   - Populates each cell in a 3x3 matrix with random values.
3. **`Print_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
   - Prints the matrix in a formatted 3x3 grid for better readability.
4. **`Row_Sum(short arr[3][3], short Rows, short Cols)`**:
   - Calculates the sum of a specified row in the matrix.
5. **`Row_Sum_In_Array(short arr[3][3], short Sum[3], short Rows, short Cols)`**:
   - Fills the `Sum` array with the sum of each row from the matrix.
6. **`Print_Row_Sum_In_array(short Sum[3], short Rows)`**:
   - Prints each row's sum from the `Sum` array.

### Program Execution
1. **Random Seed Initialization**: Initializes the random seed using `time()` to ensure different random values on each run.
2. **Matrix Population and Output**: Fills a 3x3 matrix with random values and prints it.
3. **Row Sum Calculation**: Calculates and prints the sum of each row by storing them in an array.

---

## ▶️ Sample Output
The program’s output may look like the following:

```plaintext
The Following is a 3x3 Random Matrix:
 34  72  88
 65  90  12
 11  47  26

The Following are The Sum Of Each Row in The Matrix:
Row 1 Sum: 194
Row 2 Sum: 167
Row 3 Sum:  84
