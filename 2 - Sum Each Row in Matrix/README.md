# 🎲 Problem 2: Sum Each Row in Matrix

> **A C++ program that generates a 3x3 matrix filled with random numbers, displays it, and calculates the sum of each row.**

## 📘 Project Overview
This C++ program creates a 3x3 matrix populated with random integers in the range of 1 to 100. The program then calculates the sum of each row and prints both the matrix and the row sums to the console.

---

## 🌟 Features
- **Random Matrix Generation**: Fills a 3x3 matrix with random integers between 1 and 100.
- **Row Summation**: Calculates and displays the sum of each row in the matrix.
- **Formatted Output**: Uses C++’s `iomanip` library to print the matrix in a clean, formatted layout.

---

## ⚙️ How It Works

### 1. Core Functions
- **`Random_Number(short From, short To)`**:
  - Generates a random integer within a specified range, from `From` to `To`, using the `rand()` function.
- **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
  - Populates each cell in a 3x3 matrix with random numbers in the specified range.
- **`Print_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
  - Prints the matrix in a grid format, with aligned cells for better readability.
- **`Sum_Each_Row(short arr[3][3], short Rows, short Cols)`**:
  - Computes the sum of the specified row in the matrix.
- **`Print_Sum_Each_Row(short arr[3][3], short Rows, short Cols)`**:
  - Iterates through each row in the matrix, printing the sum of the elements in that row.

### 2. Program Execution
- **Random Seed Initialization**: Initializes the random seed with the current time, ensuring different random numbers on each run.
- **Matrix Population and Output**: Fills a 3x3 matrix with random values, prints it, and displays the sum of each row.

---

## ▶️ Sample Execution
Example output of the program:

```plaintext
The Following is a 3x3 Random Matrix:
 23  89  47
  4  58  77
 90  36  12

The Following are The Sum Of Each Row in The Matrix:
Row 1 Sum: 159
Row 2 Sum: 139
Row 3 Sum: 138
