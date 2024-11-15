# 🎯 Problem 47: Display Client Data from File 

> **This program reads client data from a file (`Clients.txt`), converts it to a structured format, and displays it in a neatly formatted table.**

---

## 📘 Project Overview
This program loads client data from a file, parses each record into a structured format (`stClient`), and then displays all the client information in a tabular format on the console.

---

## 🌟 Features
1. **Client Structure**: Stores client-related information (account number, PIN code, name, phone number, account balance).
2. **File Handling**: Loads client data from the file (`Clients.txt`).
3. **Data Parsing**: Splits each record in the file into individual components.
4. **Display Functionality**: Displays the client data in a neatly formatted table.

---

## ⚙️ How It Works

### 1. Structures and Functions
- **`struct stClient`**:
  - A structure to store client-related information: account number, PIN code, name, phone, and account balance.

- **`Split_String()`**:
  - Splits a string into a vector of substrings based on a delimiter (default is `#//#`).
  - It is used to parse each line of the file into separate pieces of information.

- **`Convert_LineData_To_Record()`**:
  - Converts a single line of data from the file into an `stClient` structure by calling `Split_String()` to parse the line.
  
- **`Load_ClientData_From_File()`**:
  - Reads the file (`Clients.txt`) line by line, converting each line into a client structure (`stClient`) using `Convert_LineData_To_Record()`.
  - Stores the parsed client data into a vector of `stClient`.

- **`Print_ClientRecord()`**:
  - Prints the details of a single client in a formatted way using `setw()` for proper column width alignment.

- **`Print_All_ClientData()`**:
  - Prints the headers of the client data table and then calls `Print_ClientRecord()` for each client in the vector.
  
### 2. Program Execution
1. The program reads client data from `Clients.txt` using the `Load_ClientData_From_File()` function.
2. The data is parsed and converted into a vector of `stClient` structures.
3. The `Print_All_ClientData()` function is called to display the client data in a neat table format.
4. The program finishes after displaying all the client data.

---

## ▶️ Sample Execution

### Input (from file `Clients.txt`):
```plaintext
A100#//#1234#//#Taha Rachedi#//#06 33 47 84 57#//#5000.0
A101#//#4321#//#Sara Benali#//#06 44 33 22 11#//#3000.0
A102#//#5678#//#Omar Farouk#//#06 77 33 55 88#//#1500.0

                                 CLient List (3) Client(s).
-----------------------------------------------------------------------------------------
| Account_Number | PIN_Code | Name                         | Phone      | Account_Balance |
-----------------------------------------------------------------------------------------
| A100           | 1234     | Taha Rachedi                 | 06 33 47 84 57 | 5000.00        |
| A101           | 4321     | Sara Benali                  | 06 44 33 22 11 | 3000.00        |
| A102           | 5678     | Omar Farouk                  | 06 77 33 55 88 | 1500.00        |
-----------------------------------------------------------------------------------------
