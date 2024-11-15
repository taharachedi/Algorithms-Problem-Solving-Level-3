# 🎯 Problem 45: Convert Line Data to Client Record 

> **This program reads a formatted string (representing a client's record), splits it into individual data fields, and displays the extracted information.**

---

## 📘 Project Overview
This program defines a structure `stClient` to store client information such as account number, PIN code, name, phone number, and account balance. It then processes a formatted string (where the fields are separated by a specified delimiter) and displays the extracted data.

---

## 🌟 Features
1. **Client Structure**: Stores client-related information including account number, PIN code, name, phone, and account balance.
2. **String Parsing**: Splits a formatted string into individual data fields using a delimiter (`#//#` by default).
3. **Record Extraction**: Converts the split data back into a client record and displays the result.

---

## ⚙️ How It Works

### 1. Structures and Functions
- **`struct stClient`**:
  - A structure to store client-related information.

- **`Split_String()`**:
  - Splits a string into substrings based on a delimiter (`#//#` by default).

- **`Convert_LineData_To_Record()`**:
  - Converts a formatted string into a `stClient` record by splitting the string and assigning the fields.

- **`Print_ClientRecord()`**:
  - Displays the contents of a `stClient` structure.

### 2. Program Execution
1. The program initializes by setting up a color for the console output.
2. A formatted string (`S1`) representing a client record is defined.
3. The program then converts this string into a `stClient` structure using the `Convert_LineData_To_Record()` function.
4. The extracted client record is displayed using `Print_ClientRecord()`.
5. The program waits for the user to press a key before exiting.

---

## ▶️ Sample Execution

### Example input and output:
```plaintext
Line Record is : 
A100#//#1234#//#Taha Rachedi#//#06 33 47 84 57#//#5000.000000

The Following is The Extracted Client Record :

Account Number : A100
PIN Code       : 1234
Name           : Taha Rachedi
Phone          : 06 33 47 84 57
Accout Balance : 5000
