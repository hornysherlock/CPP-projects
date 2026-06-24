# Bank Management System

A console-based bank management system demonstrating file serialization and object-oriented programming concepts in C++.

## Overview

This is a high school computer science project that implements a complete banking system with core features like account management, deposits, withdrawals, and persistent data storage using file serialization.

## Features

- **Account Management**: Create, update, and delete bank accounts
- **Financial Transactions**: Deposit and withdraw funds
- **File Persistence**: Save and load account data from binary files
- **Account Search**: Find accounts by account number
- **Interest Calculation**: Automatic interest accrual (if implemented)
- **Menu-Driven Interface**: User-friendly console menu for all operations

## Tech Stack

- **Language**: C++ (with standard library)
- **Data Storage**: Binary file serialization (fstream)
- **I/O**: Console-based interface using iostream and conio.h
- **Platform**: Windows (console application)

## Project Structure

```
├── BankManagementFinal.cpp    # Main source code
├── Account.dat                 # Binary data file (persisted accounts)
├── BankManagementFinal.exe     # Compiled executable
└── README.md                   # This file
```

## How to Use

### Compilation

To compile the project:
```bash
g++ BankManagementFinal.cpp -o BankManagementFinal
```

### Running

Execute the compiled program:
```bash
./BankManagementFinal
```

The program will display a menu with options for:
1. Create a new account
2. Deposit funds
3. Withdraw funds
4. Check account balance
5. Search for an account
6. View all accounts
7. Exit

### Data Persistence

Account data is automatically saved to `Account.dat` after each transaction. On the next run, the program loads existing accounts from this file.

## Educational Value

This project demonstrates:
- Object-oriented programming (classes and objects)
- File I/O operations in C++
- Binary file serialization
- Data validation and error handling
- Menu-driven application design

## Authors

- Parth Sharma
- Nitesh Pandya
- Class 12, Computer Science

## License

Educational project - free to use and modify for learning purposes.

---

*This project was created as part of the Class 12 Computer Science curriculum.*
