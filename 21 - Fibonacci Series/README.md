# Problem 21: Fibonacci Series Generator 

> **A C++ program to generate and display the Fibonacci series up to a given number of terms.**

## 📘 Project Overview
This C++ program calculates and prints the Fibonacci series up to a specified number of terms. The Fibonacci series is a sequence in which each number is the sum of the two preceding ones, typically starting with 0 and 1. The program uses a loop to generate the series and outputs the numbers.

---

## 🌟 Features
- **Fibonacci Series Calculation**: The program generates the Fibonacci series up to the specified number of terms.
- **Efficient Looping**: It uses a loop to calculate the next term in the series by adding the previous two terms.
- **User-Defined Term Limit**: The program allows you to specify the number of terms to generate.

---

## ⚙️ How It Works

### Core Function
1. **`Print_Fibonacci_Series(short Number)`**
   - This function calculates and prints the Fibonacci series up to the specified number of terms.
   - The function uses two variables (`Prev2` and `Prev1`) to store the last two terms of the Fibonacci sequence and generates the next term by adding these two variables.

### Program Flow
1. **Initialize Variables**: The program starts by initializing `Prev2` and `Prev1` to 1 and 0, respectively, which are the first two numbers of the Fibonacci series.
2. **Generate Fibonacci Terms**: The program uses a loop to generate the Fibonacci terms and print them in sequence until the specified number of terms is reached.
3. **Output**: The Fibonacci terms are printed to the console, separated by spaces.

---

## ▶️ Sample Output
Here’s an example of what the output might look like when you run the program:

```plaintext
1  1  2  3  5  8  13  21  34  55
