# 🏦 Problem 50: Update Client By Account Number 

> **This program allows users to search for a client's record in a file (`Clients.txt`) and update the client's information.**

---

## 📘 Project Overview

The **Client Management System** is a C++ program designed to manage client records stored in a text file. It allows users to:
- Search for a client by their account number.
- Display the client's current details.
- Update client information upon user confirmation.
- Save the updated records back to the file.

---

## 🌟 Features

1. **File Handling**:
   - Reads and writes client data from/to a text file (`Clients.txt`) formatted as:  
     `Account_Number#//#PIN_Code#//#Name#//#Phone#//#Account_Balance`.

2. **Search Functionality**:
   - Searches for a client by their account number in the stored data.

3. **Data Parsing**:
   - Processes each record using custom delimiters to extract and update information.

4. **Client Update**:
   - Provides an interactive way to edit client information and saves it securely.

---

## ⚙️ How It Works

### 1. Key Functions
- **`Split_String()`**:
  - Splits a string into components using a custom delimiter (`#//#`).

- **`Convert_LineData_To_Record()`**:
  - Converts a single line of data into a structured format (`stClient`).

- **`Load_Data_From_File()`**:
  - Reads all client records from the file into a vector of `stClient` structures.

- **`Save_ClientData_To_File()`**:
  - Writes all client records back to the file after updates, omitting deleted records.

- **`Find_Client_By_Account_Number()`**:
  - Searches the vector of client records for a specific account number.

- **`Edit_Client_Record()`**:
  - Interactively updates a client's record with new data.

- **`Update_Client_By_Account()`**:
  - Handles the overall process of finding, confirming, and updating a client's record.

### 2. Execution Flow
1. Prompts the user to input an account number.
2. Searches for the account in the client data loaded from `Clients.txt`.
3. If found, displays the client's details and confirms the update.
4. Allows the user to modify the record and saves the updated data back to the file.
5. If not found, informs the user that the account number does not exist.

---

## ▶️ Sample Execution

### Input:
```plaintext
Please Enter Ur Account Number : 123456

The Following Are The Client Details : 

Account Number    : 123456
PIN Code          : 1234
Name              : Taha Rachedu
Phone             : 555-1234
Account Balance   : 1000.50

Are U Sure U Want Update This Client ? (Y/N) Y

Enter Ur PIN Code       : 5678
Enter Ur Name           : Toto
Enter Ur Phone          : 555-6789
Enter Ur Accout Balance : 1200.75

Client Updated Successfully!

