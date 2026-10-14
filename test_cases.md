# Test Cases: Bank Account Management System

## Test Case 1: Insert One Account

**Input:** Add account number 101, holder name Rahul Patil, account type Savings, and initial balance 5000.

**Expected Output:** Account created successfully. The account details should be stored and displayed correctly.

**Purpose:** To verify basic insertion.

## Test Case 2: Insert Multiple Accounts

**Input:** Add three accounts with account numbers 101, 102, and 103.

**Expected Output:** All three accounts should be displayed in insertion order.

**Purpose:** To verify multiple insertions and traversal.

## Test Case 3: Duplicate Account Number

**Input:** Add an account with account number 101 when an account with that number already exists.

**Expected Output:** Account number already exists.

**Purpose:** To verify duplicate account validation.

## Test Case 4: Withdraw More Than the Available Balance

**Input:** An account has a balance of 5000. Attempt to withdraw 6000.

**Expected Output:** Insufficient balance. The account balance should remain 5000.

**Purpose:** To verify withdrawal validation.

## Test Case 5: Delete an Account

**Input:** Delete account number 102 from a list containing accounts 101, 102, and 103.

**Expected Output:** Account deleted successfully. The remaining accounts should be 101 and 103, with their links correctly maintained.

**Purpose:** To verify deletion and pointer updates in a doubly linked list.

## Edge Case: Display an Empty List

**Input:** Select Display Accounts before creating any account.

**Expected Output:** No accounts available.

**Purpose:** To verify empty-list handling.
