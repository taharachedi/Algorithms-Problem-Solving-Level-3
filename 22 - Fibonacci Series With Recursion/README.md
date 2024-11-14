# Problem 22: Fibonacci Series Generator (Recursive Version) 

> **A C++ program to recursively generate and display the Fibonacci series up to a given number of terms.**

## 📘 Project Overview
This C++ program calculates and prints the Fibonacci series using recursion. In this version, the Fibonacci series is generated recursively by summing the last two numbers of the series to compute the next one. The program prints the Fibonacci sequence up to a specified number of terms, starting from `1` and `0`.

---

## 🌟 Features
- **Recursive Fibonacci Calculation**: The program uses recursion to calculate the next term in the Fibonacci series.
- **Recursive Function**: The function `Print_Fibonacci_Series_Using_Recursion()` is called repeatedly until the specified number of terms is generated.
- **User-defined Number of Terms**: The program allows the user to specify how many terms of the Fibonacci series to print.

---

## ⚙️ How It Works

### Core Function
1. **`Print_Fibonacci_Series_Using_Recursion(short Num, short Prev2, short Prev1)`**
   - This function calculates and prints the Fibonacci series recursively.
   - The base case of the recursion is when `Num` is 0, at which point the function stops calling itself.
   - The function prints the current Fibonacci number, then updates the `Prev2` and `Prev1` values, and calls itself with the new values to compute the next Fibonacci term.

### Program Flow
1. **Recursive Calculation**: The program starts with the first two Fibonacci numbers `Prev2 = 1` and `Prev1 = 0`. It then recursively calculates the next Fibonacci number by adding the previous two numbers.
2. **Print and Recursion**: Each Fibonacci number is printed, and the function recursively calls itself with updated values until the desired number of terms is reached.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
1  1  2  3  5  8  13  21  34  55
