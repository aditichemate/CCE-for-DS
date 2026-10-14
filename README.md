# Bank Account Management System Using Doubly Linked List

## 1. Original Problem Statement

The original problem was to develop a Bank Account Management System using a Singly Linked List in C++. The system manages bank account details such as account holder name, account number, account type, and balance. It supports basic operations such as inserting, displaying, searching, and deleting account records.

## 2. Selected Modification

Initially, the Bank Account Management System was implemented using a Singly Linked List, in which each node contained a pointer to the next node.

As a modification, the Singly Linked List was converted into a Doubly Linked List. In the modified implementation, each node contains two pointers: `next` and `prev`. The `next` pointer connects a node to the next account, while the `prev` pointer connects it to the previous account.

The following modifications were made:

1. Replaced the singly linked list structure with a doubly linked list structure.
2. Added a `prev` pointer to every node.
3. Updated insertion logic to maintain both `next` and `prev` pointers.
4. Modified deletion logic to correctly update the links of neighbouring nodes.
5. Added validation to prevent duplicate account numbers.
6. Included deposit and withdrawal operations with balance validation.
7. Added search and display operations for account records.
8. Implemented dynamic memory management to create and delete nodes.

## 3. Objective

To modify the existing Bank Account Management System from a Singly Linked List to a Doubly Linked List and understand how bidirectional links improve node management.

## 4. Approach

The program uses a Doubly Linked List in which every node represents one bank account. Each node stores the account holder's name, account number, account type, balance, and two pointers.

The `head` pointer refers to the first node. When a new account is inserted, a new node is created dynamically and linked to the list. The `next` and `prev` pointers are updated to maintain the connections between neighbouring nodes.

The program provides a menu-driven interface for adding accounts, displaying account details, searching for an account, depositing money, withdrawing money, and deleting accounts. Validation checks help prevent duplicate account numbers, invalid balances, and withdrawals exceeding the available balance.

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

**Space Complexity:** O(n), because each account requires one node.

## 8. Advantages of the Modification

* Each node can access both the next and previous nodes.
* Deletion is easier to manage when the node's address is already known.
* Both forward and backward traversal are possible.
* The program provides a practical demonstration of doubly linked list operations.

## 9. Conclusion

The Bank Account Management System was initially implemented using a Singly Linked List and subsequently modified to use a Doubly Linked List. The modification introduced a `prev` pointer alongside the existing `next` pointer, allowing connections in both directions. The project demonstrates how a doubly linked list can be used to manage bank account records dynamically while maintaining proper links during insertion and deletion.
