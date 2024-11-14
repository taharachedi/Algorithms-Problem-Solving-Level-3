# 🟦 Problem 6: Ordered Matrix Generator 

> **A simple C++ program to create a 3x3 ordered matrix with sequential numbers, displaying the matrix in a formatted output.**

## 📘 Project Overview
This program generates a 3x3 matrix with ordered sequential numbers starting from 1 and displays it in a neat grid format. It’s a useful example of array manipulation and sequential data filling in C++.

---

## 🌟 Features
- **Ordered Matrix Generation**: Creates a 3x3 matrix filled with sequential numbers starting from 1.
- **Neat Output Formatting**: Uses `iomanip` to align matrix elements for readability.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Ordered_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Fills the 3x3 matrix with ordered numbers starting from 1 up to 9.

2. **`Print_Ordered_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Prints the matrix in a structured 3x3 grid format using `setw` for alignment.

### Program Execution
1. **Initialize the Matrix**: The program fills the 3x3 matrix with sequential numbers from 1.
2. **Matrix Display**: Prints the ordered matrix in a structured format.

---

## ▶️ Sample Output
A sample run of the program might look like this:

```plaintext
The Following is a 3x3 Ordered Matrix:
  1   2   3
  4   5   6
  7   8   9
