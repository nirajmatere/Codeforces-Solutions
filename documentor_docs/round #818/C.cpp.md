# Technical Documentation: `round #818/C.cpp`

## Overview
The file `round #818/C.cpp` contains a C++ program written for a competitive programming problem (Codeforces Round #818, Problem C). The program checks whether an array $A$ can be transformed into an array $B$ based on a set of conditional bounds and structural checks across multiple test cases.

---

## Global Variables and Macros

* **Macro `#define ll long long`**: Defined at the top of the file, though standard `int` types are used throughout `main` and helper functions.
* **`int ultimatePrint`**: A global state flag initialized to `0`. It is updated inside the `check()` function to track whether a `"NO"` output has been emitted.
* **`int done`**: A global state flag initialized to `0`. It is modified inside the `check()` function.

---

## Helper Functions

### 1. `void printVector(vector<int>& v)`
* **Parameters**: Reference to a `std::vector<int>` `v`.
* **Behavior**: Iterates through vector `v` and prints each element separated by a space, followed by a newline.
* **Return Value**: None (`void`).

### 2. `int getMinIndex(vector<int>& a)`
* **Parameters**: Reference to a `std::vector<int>` `a`.
* **Behavior**: Finds the minimum element in array `a` and returns its 0-based index. If there are multiple occurrences of the minimum value, it returns the index of the first occurrence.
* **Return Value**: Index (`int`) of the minimum element in vector `a`.

### 3. `bool check(vector<int>& a, vector<int>& b)`
* **Parameters**: References to two vectors `a` and `b` of size `n`.
* **Behavior**:
  1. Iterates from `i = 0` to `n - 1`. If `a[i] > b[i]`, it prints `"NO"`, sets `printed = 1`, sets `ultimatePrint = 1`, breaks the loop, and returns `true`.
  2. Prints `"fine till here 1"` using `printf`.
  3. Iterates from `i = 0` to `n - 1`. If `a[i] < b[i]` and `b[i] > (b[(i + 1) % n] + 1)`, it prints `"NO"`, sets `flag = 1`, and sets `ultimatePrint = 1`.
  4. If `flag == 1`, returns `true`.
  5. Otherwise, sets `done = 1` and returns `false`.
* **Return Value**: `bool` (`true` if validation fails/triggers a `"NO"` condition, `false` otherwise).

---

## Main Function Logic (`main`)

### Input Processing
1. Reads `t`, the number of test cases.
2. For each test case:
   * Reads an integer `n` (the length of the arrays).
   * Reads `n` integers into `vector<int> a`.
   * Reads `n` integers into `vector<int> b`.

### Validation Flow per Test Case

1. **Exact Match Check**:
   * If `a == b`, it outputs `"Yes"` and proceeds immediately to the next testcase (`continue`).

2. **Upper Bound Check (`a[i] > b[i]`)**:
   * Iterates through `i` from `0` to `n - 1`.
   * If any `a[i] > b[i]`, it prints `"NO"` and immediately skips the rest of the current testcase execution (`continue`).

3. **Adjacent Bound Constraint Check**:
   * Iterates through `i` from `0` to `n - 1`.
   * Checks if `a[i] < b[i]` AND `b[i] > (b[(i + 1) % n] + 1)`.
   * If this condition evaluates to true, it prints `"NO"` and immediately skips the rest of the current testcase execution (`continue`).

4. **Commented-Out Simulation Block**:
   * Contains a commented-out loop that calls `check(a, b)` and increments `a[idx]` where `idx` is obtained from `getMinIndex(a)`. 

5. **Final Output**:
   * Checks if `ultimatePrint == 0`. If true, it prints `"Yes"`.

---

## Summary of Operations and Output Matrix

| Condition | Action / Output |
| :--- | :--- |
| `a == b` | Output `"Yes"`, move to next testcase |
| $\exists i : a[i] > b[i]$ | Output `"NO"`, move to next testcase |
| $\exists i : a[i] < b[i] \text{ and } b[i] > b[(i+1)\%n] + 1$ | Output `"NO"`, move to next testcase |
| Reaches end of loop body with `ultimatePrint == 0` | Output `"Yes"` |