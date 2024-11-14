# 🔢 Problem 19: Random Matrix Min/Max Finder

> **A C++ program that generates a 3x3 matrix with random numbers and finds the minimum and maximum numbers in the matrix.**

## 📘 Project Overview
This program creates a 3x3 matrix filled with random numbers between 1 and 10, and then calculates and displays the minimum and maximum values within the matrix. It demonstrates how to generate random numbers, fill a matrix with them, and perform basic calculations (min and max) on the matrix elements.

---

## 🌟 Features
- **Random Matrix Generation**: Creates a 3x3 matrix with random numbers in a specified range (1 to 10).
- **Matrix Display**: Displays the matrix in a clean, readable format.
- **Min/Max Calculation**: Calculates and displays the minimum and maximum numbers in the generated matrix.

---

## ⚙️ How It Works

### Core Functions
1. **`Random_Number(short From, short To)`**
   - This function generates a random number between the specified range `From` and `To`, inclusive.

2. **`Fill_Random_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function fills a 3x3 matrix (`arr`) with random numbers generated using `Random_Number`.

3. **`Print_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function prints the matrix in a formatted grid, with proper spacing between the elements.

4. **`Min_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function calculates and returns the minimum number in the given 3x3 matrix.

5. **`Max_Matrix(short arr[3][3], short Rows, short Cols)`**
   - This function calculates and returns the maximum number in the given 3x3 matrix.

### Program Flow
1. **Matrix Generation**: The program generates a 3x3 matrix filled with random numbers between 1 and 10.
2. **Matrix Display**: The matrix is printed for the user to see.
3. **Min/Max Calculation**: The program calculates and displays the minimum and maximum values found in the matrix.

---

## ▶️ Sample Output 1
Here’s an example of what the output might look like when you run the program:

```plaintext
Matrix1:  
  5   3   9   
  7   8   1   
  6   4   2   

Min Number is : 1

Max Number is : 9
