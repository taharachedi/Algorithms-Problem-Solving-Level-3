# 🏦 Problem 49: Delete Client By Account Number

> **This program searches for a client's data in a file (`Clients.txt`) and displays the information in a detailed format.**

---

## 📘 Project Overview

The **Client Management System** is a C++ program designed to manage client records stored in a text file. It allows users to:
- Search for a client by their account number.
- Display detailed information about the client if found.
- Delete a client record from the file upon confirmation.

---

## 🌟 Features

1. **File Handling**:
   - Reads and writes client data to a text file (`Clients.txt`) with each record formatted as:  
     `Account_Number#//#PIN_Code#//#Name#//#Phone#//#Account_Balance`.

2. **Search Functionality**:
   - Users can search for a client by entering their account number.

3. **Data Parsing**:
   - Each record from the file is split and stored in a structured format (`stClient`).

4. **Client Deletion**:
   - Allows users to delete a client record after confirmation.

---

## ⚙️ How It Works

### 1. Key Functions
- **`Split_String()`**:
  - Splits a string into components using a custom delimiter (`#//#`).

- **`Convert_LineData_To_Record()`**:
  - Converts a single line of data into a `stClient` structure.

- **`Load_ClientData_From_File()`**:
  - Loads all client data from the file into a vector of `stClient` structures.

- **`Find_Client_By_Account_Number()`**:
  - Searches the vector of client records for a specific account number.

- **`Print_Client_Details()`**:
  - Displays detailed information about a specific client.

- **`Delete_Client_By_Account()`**:
  - Deletes a client record by marking it for deletion and updating the file.

### 2. Execution Flow
1. The program loads all client data from the file `Clients.txt`.
2. Prompts the user to input an account number.
3. Searches for the account number in the data.
4. If found, displays the client's details and confirms deletion.
5. Updates the file after deletion or exits if no deletion occurs.

---

## ▶️ Sample Execution

### Input:
```plaintext
Please Enter Ur Account Number: A1000

The Following are The Client Details:

Account Number  : A1000
PIN Code        : 1234
Name            : Taha Rachedi
Phone           : 555-1234
Account Balance : 1000.5

Are U Sure U want Delete This Client :(Y/N) ?Y

Client Deleted Successfully!
