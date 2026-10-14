# Implementation of Binary Search Tree and AVL Tree Using the Same Input

## 1. Original Problem Statement

The original problem is to develop a Binary Search Tree (BST) in C++ to store integer values and perform basic tree operations. A BST arranges values so that smaller values are stored in the left subtree and larger values are stored in the right subtree.

However, a BST can become unbalanced depending on the insertion order, which may increase the time required for searching and insertion.

## 2. Selected Modification

The original implementation using a Binary Search Tree is extended by implementing an AVL Tree.

Both trees receive the same sequence of input values. Their structures and traversal outputs can then be compared.

The following modifications are introduced:

1. Implemented a Binary Search Tree for inserting integer values.
2. Implemented an AVL Tree using the same input values.
3. Added height calculation for AVL Tree nodes.
4. Added balance factor calculation to detect imbalance.
5. Implemented LL, RR, LR, and RL rotations.
6. Displayed inorder traversal of both trees for comparison.
7. Displayed the heights of both trees to demonstrate the effect of balancing.

## 3. Objective

To implement a Binary Search Tree and an AVL Tree using the same input values and compare their structures, heights, and balancing behaviour.

## 4. Approach

The program accepts a sequence of integer values from the user.

Each value is inserted into the Binary Search Tree and the AVL Tree. The BST follows the ordinary insertion rules without automatically balancing the tree.

The AVL Tree maintains the BST ordering property and calculates the balance factor of each node. If a node becomes unbalanced, the program performs the appropriate LL, RR, LR, or RL rotation.

After all values are inserted, the program displays the inorder traversal and height of both trees.

## 5. Data Structures Used

### Binary Search Tree

Each node contains:

* Integer data
* Pointer to the left child
* Pointer to the right child

### AVL Tree

Each node contains:

* Integer data
* Pointer to the left child
* Pointer to the right child
* Height of the node

## 6. Operations Performed

1. Accept input values.
2. Insert values into the BST.
3. Insert the same values into the AVL Tree.
4. Display inorder traversal of the BST.
5. Display inorder traversal of the AVL Tree.
6. Display the height of both trees.

## 7. Complexity Analysis

Let `n` be the number of input values.

| Operation          | Binary Search Tree             | AVL Tree                          |
| ------------------ | ------------------------------ | --------------------------------- |
| Insertion          | Average O(log n), worst O(n)   | O(log n)                          |
| Searching          | Average O(log n), worst O(n)   | O(log n)                          |
| Inorder traversal  | O(n)                           | O(n)                              |
| Height calculation | O(n) if calculated recursively | O(1) for the root's stored height |
| Space complexity   | O(n)                           | O(n)                              |

The BST can become skewed when values are inserted in sorted order. An AVL Tree maintains height balance, providing O(log n) worst-case insertion and search times.

## 8. Programming Language

C++

## 9. Conclusion

The project demonstrates the implementation of a Binary Search Tree and an AVL Tree using the same input values. The BST follows the ordinary binary search ordering property, while the AVL Tree maintains balance through rotations. Comparing their heights and traversal results helps demonstrate why self-balancing trees are useful for maintaining efficient search and insertion operations.

