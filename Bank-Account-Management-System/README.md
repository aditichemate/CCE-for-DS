# Bank Account Management System Using Doubly Linked List

## 1. Original Problem Statement

The original problem was to develop a Bank Account Management System using a Singly Linked List in C++. The system stores bank account details such as the account holder's name, account number, account type, and balance. It supports operations such as inserting, displaying, searching, and deleting account records.

## 2. Selected Modification

Initially, the Bank Account Management System was implemented using a Singly Linked List, where each node contains a pointer to the next node.

As a modification, the Singly Linked List was converted into a Doubly Linked List. Each node now contains two pointers: `next` and `prev`. The `next` pointer connects to the next node, while the `prev` pointer connects to the previous node.

The following modifications were implemented:

1. Added a `prev` pointer to each node.
2. Updated insertion logic to maintain both `next` and `prev` pointers.
3. Modified deletion logic to update neighbouring nodes correctly.
4. Added duplicate account number validation.
5. Implemented deposit and withdrawal operations.
6. Added validation to prevent negative balances and withdrawals exceeding available funds.
7. Included searching and displaying account records.
8. Used dynamic memory allocation for creating nodes.

## 3. Objective

To modify the existing Bank Account Management System from a Singly Linked List to a Doubly Linked List and understand how bidirectional links improve node management.

## 4. Approach

The program uses a Doubly Linked List in which each node represents one bank account. Each node stores the account holder's name, account number, account type, balance, and two pointers.

The `head` pointer refers to the first node. New account records are inserted into the list dynamically. The `next` and `prev` pointers are updated to maintain connections between neighbouring nodes.

The menu-driven program allows the user to add accounts, display account details, search for accounts, deposit money, withdraw money, and delete accounts.

## 5. Data Structure Used

**Doubly Linked List**

Each node contains:

* Account holder's name
* Account number
* Account type
* Account balance
* Pointer to the next node (`next`)
* Pointer to the previous node (`prev`)

## 6. Operations Performed

1. Add a bank account
2. Display all accounts
3. Search for an account
4. Deposit money
5. Withdraw money
6. Delete an account
7. Exit the program

## 7. Complexity Analysis

Let `n` represent the number of bank accounts.

| Operation                                       | Time Complexity |
| ----------------------------------------------- | --------------- |
| Insert at the end without a tail pointer        | O(n)            |
| Display all accounts                            | O(n)            |
| Search for an account                           | O(n)            |
| Deposit money, including account search         | O(n)            |
| Withdraw money, including account search        | O(n)            |
| Delete an account, including account search     | O(n)            |
| Delete a node when its address is already known | O(1)            |

**Space Complexity:** O(n), because each bank account requires one node.

## 8. Advantages of the Modification

* Each node can access both the previous and next nodes.
* Deletion is easier when the node's address is already known.
* Traversal can be performed in both directions.
* Dynamic memory allocation allows the list to grow as required.

## 9. Conclusion

The Bank Account Management System was initially implemented using a Singly Linked List and subsequently modified to use a Doubly Linked List. The addition of a `prev` pointer enables bidirectional connections between nodes. The project demonstrates dynamic account management and the importance of correctly updating pointers during insertion and deletion.
