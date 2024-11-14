# 🟩 Problem 10: Matrix Randomization and Summation 

> **A C++ program that generates a random 3x3 matrix, displays it, and calculates the sum of all its elements.**

## 📘 Project Overview
This program creates a 3x3 matrix with randomly generated numbers, prints the matrix in a formatted manner, and then computes the sum of all the matrix elements.

---

## 🌟 Features
- **Random Matrix Generation**: Fills a 3x3 matrix with random numbers between a specified range.
- **Matrix Display**: Outputs the matrix in a structured grid format.
- **Matrix Summation**: Calculates the sum of all elements in the matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Populates the matrix with random integers within a range (1 to 10 in this example).

2. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Displays the entire matrix in a formatted grid for better readability.

3. **`Sum_Matrix(short arr[3][3], short Rows, short Cols)`**
   - Loops through the matrix to compute the sum of all elements.

### Program Flow
1. **Matrix Generation and Display**: Initializes a 3x3 matrix with random values and displays it.
2. **Matrix Summation**: Calculates and displays the sum of all matrix elements.

---

## ▶️ Sample Output
Here’s what you might see when running the program:

```plaintext
Matrix1:
  4   7   9
  1   3   5
  6   2   8

Sum Of Matrix1 is: 45
