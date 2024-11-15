# 🎯 Problem 46: Add New Client and Store Data in File 

> **This program allows users to input client information, convert it to a formatted string, and append the data to a file for storage.**

---

## 📘 Project Overview
This program provides functionality to add client data (such as account number, PIN code, name, phone number, and account balance) into a file (`Clients.txt`). The data is formatted using a specific delimiter (`#//#`) and stored in the file for later use.

---

## 🌟 Features
1. **Client Structure**: Stores client-related information.
2. **Data Conversion**: Converts the collected data into a formatted string suitable for file storage.
3. **File Handling**: Appends client data to a text file (`Clients.txt`) using file I/O operations.

---

## ⚙️ How It Works

### 1. Structures and Functions
- **`struct stClient`**:
  - A structure to store client-related information (account number, PIN code, name, phone, account balance).

- **`Read_Client_Info()`**:
  - Prompts the user to input client data, such as account number, PIN code, name, phone, and account balance.
  - Returns the data as an `stClient` structure.

- **`Convert_Record_To_Line()`**:
  - Converts the client structure into a formatted string using a delimiter (`#//#` by default).

- **`Add_DataLine_To_File()`**:
  - Appends the formatted client data string to a file (`Clients.txt`).

- **`Add_NewClient()`**:
  - Calls `Read_Client_Info()` to gather client data and then appends it to the file using `Add_DataLine_To_File()`.

- **`AddClients()`**:
  - A loop that allows the user to add multiple clients, asking if they want to add more after each entry.

### 2. Program Execution
1. The program initializes by setting a console color.
2. It enters the `AddClients()` function, which starts a loop allowing the user to enter client data and save it to the file.
3. After each client is added, the program asks if the user wants to add another client.
4. The program appends the formatted client data to the `Clients.txt` file.
5. The program ends when the user chooses not to add more clients.

---

## ▶️ Sample Execution

### Input:
```plaintext
Enter Account Number : A100
Enter PIN Code : 1234
Enter Name : Taha Rachedi
Enter Phone : 06 33 47 84 57
Enter Account Balance : 5000.0

Adding New Client : 

Client Added Successfully! Do U Want To Add More Clients ?  (Y/N)

A100#//#1234#//#Taha Rachedi#//#06 33 47 84 57#//#5000.000000
