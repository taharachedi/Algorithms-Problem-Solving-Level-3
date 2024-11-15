# 🎯 Problem 44: Convert Client Record to Line 

> **This program reads client data, formats it into a line using a separator, and displays both the input and formatted output.**

---

## 📘 Project Overview
This program defines a structure `stClient` to store information about a client. It then provides functions to read client data, format the data into a line using a specified separator, and display the input and output.

---

## 🌟 Features
1. **Client Structure**: Stores client-related information such as account number, PIN code, name, phone, and account balance.
2. **Input and Output Handling**: Captures user input, formats the data into a line, and displays both the input and the formatted output.

---

## ⚙️ How It Works

### 1. Structures and Functions
- **`struct stClient`**:
  - A structure to store client-related information.

- **`Read_Client_Info()`**:
  - Reads client information (account number, PIN code, name, phone, and account balance) from user input and returns a `stClient` structure.

- **`Convert_Record_To_Line(stClient Client, string Separator = "#//#")`**:
  - Takes a `stClient` structure and converts it into a line of text, using a specified separator (default is `#//#`).

### 2. Program Execution
1. The program initializes by setting up a color for the console output.
2. The `Read_Client_Info()` function is called to capture client data from user input.
3. The `Convert_Record_To_Line()` function formats the captured data into a line and displays it.
4. The program waits for the user to press a key before exiting.

---

## ▶️ Sample Execution

### Input:
```plaintext
Please Enter Client Data : 
Enter Account Number : 123456789
Enter PIN Code : 9876
Enter Name : Taha 
Enter Phone : 555-1234
Enter Account Balance : 1000.50

Client Record for Saving it : 
123456789#//#9876#//#Taha#//#555-1234#//#1000.5
