# 🏦 Problem 48: Find Client By Account Number

> **This program searches for a client's data in a file (`Clients.txt`) and displays the information in a detailed format.**

---

## 📘 Project Overview

The **Client Management System** is a C++ program designed to manage client records stored in a text file. It allows users to search for a client by their account number and displays detailed information about the client if found.

---

## 🌟 Features

1. **File Handling**:
   - Reads client data from a text file (`Clients.txt`) with each record formatted as:  
     `Account_Number#//#PIN_Code#//#Name#//#Phone#//#Account_Balance`.

2. **Search Functionality**:
   - Users can search for a client by entering their account number.

3. **Data Parsing**:
   - Each record from the file is split and stored in a structured format (`stClient`).

4. **Client Data Display**:
   - Neatly displays client details such as account number, PIN code, name, phone number, and account balance.

---

## ⚙️ How It Works

### 1. Key Functions
- **`Split_String()`**:
  - Splits a string into components using a custom delimiter (`#//#`).

- **`Convert_LineData_To_Record()`**:
  - Converts a single line of data into a `stClient` structure.

- **`Load_ClientData_From_File()`**:
  - Loads all client data from the file into a vector of `stClient` structures.

- **`isFind_Client_ByAccountNumber()`**:
  - Searches the vector of client records for a specific account number.

- **`Print_Client_Details()`**:
  - Displays detailed information about a specific client.

### 2. Execution Flow
1. The program loads all client data from the file `Clients.txt`.
2. Prompts the user to input an account number.
3. Searches for the account number in the data.
4. If found, displays the client's details.
5. If not found, informs the user that the account number is not in the file.

---

## ▶️ Sample Execution

### Input:
```plaintext
Please Enter Account Number: A100

The Following are The Client Details:


Account  Number : A100
PIN Code        : 1234
Name            : Taha Rachedi
Phone           : 06 33 47 84 57
Account Balance : 5000

