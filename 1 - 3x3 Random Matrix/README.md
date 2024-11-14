# 🎲 Problem 1: 3x3 Random Matrix Generator 

> **A C++ program that generates and displays a 3x3 matrix filled with random numbers ranging from 1 to 100.**

## 📘 Project Overview
This C++ program creates a 3x3 matrix filled with random integers, with each number between a specified range (1 to 100). The matrix is then printed to the console in a formatted, grid-like structure.

---

## 🌟 Features
- **Random Matrix Generation**: Fills a 3x3 matrix with random numbers.
- **Range Customization**: Allows configuration of the range for random number generation.
- **Formatted Display**: Prints the matrix in a neatly aligned format using C++’s `iomanip` library for improved readability.

---

## ⚙️ How It Works

### 1. Helper Functions
- **`Random_Number(short From, short To)`**:
  - Generates a random number within the specified range, `From` to `To`, using C++’s `rand()` function.
- **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
  - Iterates through a 3x3 matrix, filling each cell with a random number between 1 and 100.
- **`Print_Random_Matrix(short arr[3][3], short Rows, short Cols)`**:
  - Prints the matrix in a formatted layout, aligning numbers within each cell using `setw(3)` to enhance readability.

### 2. Program Execution
- **Random Seed Initialization**: The program initializes the random seed using the current time to ensure each execution produces different random numbers.
- **Matrix Creation**: A 3x3 matrix is populated with random values and displayed.

---

## ▶️ Sample Execution
Example output of the program:

```plaintext
The Following is a 3x3 Random Matrix :
 23  89  47
  4  58  77
 90  36  12
