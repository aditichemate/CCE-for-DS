# Test Cases: BST and AVL Tree Using the Same Input

## Test Case 1: Basic Input

**Input:**

```text
5
30 20 40 10 50
```

**Expected Output:**

```text
BST Inorder Traversal: 10 20 30 40 50
AVL Inorder Traversal: 10 20 30 40 50
BST Height: 3
AVL Height: 3
```

**Purpose:** To verify that both trees receive the same values and produce the same inorder traversal.

## Test Case 2: Sorted Input

**Input:**

```text
5
10 20 30 40 50
```

**Expected Output:**

```text
BST Inorder Traversal: 10 20 30 40 50
AVL Inorder Traversal: 10 20 30 40 50
BST Height: 5
AVL Height: 3
```

**Purpose:** To demonstrate that a BST can become skewed while an AVL Tree performs rotations to maintain balance.

## Test Case 3: Duplicate Values

**Input:**

```text
5
20 10 20 30 10
```

**Expected Output:**

```text
BST Inorder Traversal: 10 20 30
AVL Inorder Traversal: 10 20 30
```

**Purpose:** To verify that duplicate values are ignored in both implementations.

## Test Case 4: Empty Input

**Input:**

```text
0
```

**Expected Output:**

```text
BST Inorder Traversal:
AVL Inorder Traversal:
BST Height: 0
AVL Height: 0
```

**Purpose:** To verify that both trees handle an empty input correctly.
