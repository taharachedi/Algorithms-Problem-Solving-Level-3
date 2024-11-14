# 🎲 Problem 5: Sum Each Col in Matrix in Array

> **A simple C++ program to generate a 3x3 matrix with random values, calculate the sum of each column, and display the results in a neatly formatted output.**

## 📘 Project Overview
This program generates a 3x3 matrix with random numbers between 1 and 100, calculates the sum for each column, and displays the matrix along with the computed column sums. It’s a useful exercise in matrix manipulation, column-wise calculations, and structured data handling in C++.

---

## 🌟 Features
- **Random Matrix Generation**: Creates a 3x3 matrix with values randomly chosen between 1 and 100.
- **Column Sum Calculation**: Calculates and stores the sum of each column.
- **Neat Output Formatting**: Uses `iomanip` to format the matrix and column sums in an easy-to-read layout.

---

## ⚙️ How It Works

### Core Functions
1. **`Random_Number(short From, short To)`**
   - Generates a random number within the given range `[From, To]`.

2. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Populates the 3x3 matrix with random numbers using `Random_Number`.

3. **`Print_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the matrix in a 3x3 grid, aligning values with `setw`.

4. **`Sum_Each_Cols(short arr[3][3], short Rows, short Cols)`**
   - Computes the sum of a specified column in the matrix.

5. **`Sum_Each_Cols_In_Array(short arr[3][3], short Sum[3], short Rows, short Cols)`**
   - Stores each column’s sum in the `Sum` array.

6. **`Print_Sum_Each_Cols(short arr[3], short Cols)`**
   - Prints each column's sum from the `Sum` array.

### Program Execution
1. **Initialize Random Seed**: Sets the seed using `time()` for unique random values in each run.
2. **Matrix Generation and Display**: Fills and prints the random matrix.
3. **Column Sum Calculation**: Computes and prints the sum for each column.

---

## ▶️ Sample Output
A sample run of the program might look like this:

```plaintext
The Following is a 3x3 Random Matrix:
 45  88  23
 11  94  39
 67  15  72

The Following are The Sum of Each Col in The Matrix:
Col 1 Sum: 123
Col 2 Sum: 197
Col 3 Sum: 134
