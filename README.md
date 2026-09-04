# 📚 Data Structures Practicals in C

A collection of **Data Structures and Algorithms practical programs implemented in C**.

This repository is created for learning, practicing, and maintaining C programming practicals.

## 📌 Table of Contents

* [About](#-about)
* [Practicals](#-practicals)
* [Time Complexity](#-time-complexity)
* [How to Run](#️-how-to-run)
* [Repository Structure](#-repository-structure)
* [Technologies Used](#️-technologies-used)
* [Purpose](#-purpose)
* [Author](#-author)

---

## 📖 About

This repository contains basic **Data Structures and Algorithms programs in C**.

The programs are written in a simple and beginner-friendly way to understand searching, sorting, arrays, queues, and linked lists.

The repository includes practical implementations of:

* Searching Algorithms
* Sorting Algorithms
* Array Operations
* Array Traversal
* Array Sum and Average
* Array Copying
* Merging Arrays
* Array Rotation
* Finding Missing Elements
* Finding Duplicate Elements
* Counting Even and Odd Elements
* Counting Positive and Negative Elements
* Circular Queue
* Singly Linked List
* Basic Programming Problems

---

## 📚 Practicals

| **No.** | **Practical**                        | **File**                             |
| ------: | ------------------------------------ | ------------------------------------ |
|       1 | Linear Search                        | `01_LinearSearch.c`                  |
|       2 | Binary Search                        | `02_BinarySearch.c`                  |
|       3 | Bubble Sort                          | `03_BubbleSort.c`                    |
|       4 | Swap of Two Numbers                  | `04_Swapoftwonumbers.c`              |
|       5 | Find Minimum and Maximum             | `05_Find_min_max.c`                  |
|       6 | Selection Sort                       | `06_SelectionSort.c`                 |
|       7 | Reverse an Array                     | `07_ReverseArray.c`                  |
|       8 | Find Duplicate Elements              | `08_FindDuplicateElements.c`         |
|       9 | Quick Sort                           | `09_Quick_sort.c`                    |
|      10 | Circular Queue                       | `10_CircularQueue.c`                 |
|      11 | Insertion Sort                       | `11_InsertionSort.c`                 |
|      12 | Merge Sort                           | `12_MergeSort.C`                     |
|      13 | Deletion from Array                  | `13_Deletionfromarray.c`             |
|      14 | Insertion in Array                   | `14_InsertElementarray.c`            |
|      15 | Array Traversal                      | `15_ArrayTraversal.c`                |
|      16 | Sum of Array Elements                | `16_SumofArrayElements.c`            |
|      17 | Merge Two Arrays                     | `17_MergeTwoArrays.c`                |
|      18 | Find Average of Array Elements       | `18_FindAverageArray.c`              |
|      19 | Copy an Array                        | `19_CopyArray.c`                     |
|      20 | Find Missing Element                 | `20_FindMissingElement.c`            |
|      21 | Count Even and Odd Elements          | `21_CountEvenOdd.c`                  |
|      22 | Count Positive and Negative Elements | `22_CountPositiveNegativeElements.c` |
|      23 | Left Rotate an Array                 | `23_LeftRotateanArray.c`             |
|      24 | Right Rotate an Array                | `24_RightRotateanArray.c`            |
|      25 | Singly Linked List                   | `25_SinglyLinkedList.c`              |

---

## 🔍 1. Linear Search

Linear Search checks each element of an array one by one until the required element is found.

**File:** `01_LinearSearch.c`

**Time Complexity:** O(n)

---

## 🔎 2. Binary Search

Binary Search searches for an element in a sorted array by repeatedly dividing the search range into two halves.

**File:** `02_BinarySearch.c`

**Time Complexity:** O(log n)

---

## 🫧 3. Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

**File:** `03_BubbleSort.c`

**Time Complexity:** O(n²)

---

## 🔄 4. Swap of Two Numbers

This program demonstrates how to swap two numbers using a temporary variable.

**File:** `04_Swapoftwonumbers.c`

**Time Complexity:** O(1)

---

## 📉 5. Find Minimum and Maximum

This program finds the minimum and maximum elements from an array.

**File:** `05_Find_min_max.c`

**Time Complexity:** O(n)

---

## 🎯 6. Selection Sort

Selection Sort repeatedly finds the smallest element from the unsorted portion and places it in the correct position.

**File:** `06_SelectionSort.c`

**Time Complexity:** O(n²)

---

## 🔃 7. Reverse an Array

This program reverses the elements of an array by swapping elements from both ends.

**File:** `07_ReverseArray.c`

**Time Complexity:** O(n)

---

## 🔁 8. Find Duplicate Elements

This program identifies duplicate elements present in an array.

**File:** `08_FindDuplicateElements.c`

**Time Complexity:** O(n²)

---

## ⚡ 9. Quick Sort

Quick Sort is a divide-and-conquer sorting algorithm. It selects a pivot element and partitions the array around the pivot.

**File:** `09_Quick_sort.c`

### Quick Sort Complexity

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n²)
* **Average Space Complexity:** O(log n)

---

## 🔄 10. Circular Queue

A Circular Queue is a linear data structure in which the last position is connected back to the first position.

It efficiently uses the available space by reusing positions after dequeue operations.

**File:** `10_CircularQueue.c`

### Operations

* Enqueue
* Dequeue
* Display
* Exit

### Time Complexity

* **Enqueue:** O(1)
* **Dequeue:** O(1)
* **Display:** O(n)

---

## 📝 11. Insertion Sort

Insertion Sort builds the sorted array one element at a time. Each element is compared with the elements before it and inserted into its correct position.

**File:** `11_InsertionSort.c`

### Insertion Sort Complexity

* **Best Case:** O(n)
* **Average Case:** O(n²)
* **Worst Case:** O(n²)
* **Space Complexity:** O(1)

---

## 🔀 12. Merge Sort

Merge Sort is a divide-and-conquer sorting algorithm. It divides the array into smaller subarrays, sorts them, and then merges them to produce a sorted array.

**File:** `12_MergeSort.C`

### Merge Sort Complexity

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n log n)
* **Space Complexity:** O(n)

---

## 🗑️ 13. Deletion from Array

This program deletes an element from an array based on the position entered by the user.

After deletion, the remaining elements are shifted one position to the left to fill the empty space.

**File:** `13_Deletionfromarray.c`

### Operations

* Enter array elements
* Delete an element from a specified position
* Display the updated array

### Time Complexity

* **Deletion:** O(n)
* **Display:** O(n)

---

## ➕ 14. Insertion in Array

This program inserts a new element into an array at a position entered by the user.

The elements after the specified position are shifted one position to the right to create space for the new element.

**File:** `14_InsertElementarray.c`

### Operations

* Enter array elements
* Enter the position for insertion
* Enter the element to insert
* Display the updated array

### Time Complexity

* **Insertion:** O(n)
* **Display:** O(n)

---

## 📋 15. Array Traversal

Array Traversal is the process of visiting and accessing each element of an array sequentially.

This program demonstrates how to traverse an array and display all its elements.

**File:** `15_ArrayTraversal.c`

### Operations

* Enter array elements
* Traverse the array
* Display all elements

**Time Complexity:** O(n)

---

## ➕ 16. Sum of Array Elements

This program calculates the sum of all elements present in an array.

Each element is accessed and added to a running sum.

**File:** `16_SumofArrayElements.c`

### Operations

* Enter array elements
* Calculate the sum
* Display the sum

**Time Complexity:** O(n)

---

## 🔀 17. Merge Two Arrays

This program merges two arrays into a single array.

The elements of the first and second arrays are copied into a new array to create the merged array.

**File:** `17_MergeTwoArrays.c`

### Operations

* Enter elements of the first array
* Enter elements of the second array
* Merge both arrays
* Display the merged array

### Time Complexity

* **Merge:** O(n + m)
* **Display:** O(n + m)

Where `n` is the size of the first array and `m` is the size of the second array.

---

## 📊 18. Find Average of Array Elements

This program calculates the average of all elements present in an array.

The sum of all array elements is calculated first, and then the sum is divided by the total number of elements.

**File:** `18_FindAverageArray.c`

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## 📋 19. Copy an Array

This program copies all elements from one array into another array.

The original array remains unchanged, while each element is copied to the corresponding position in the new array.

**File:** `19_CopyArray.c`

### Time Complexity

**O(n)**

### Space Complexity

**O(n)**

---

## 🔍 20. Find Missing Element

This program finds the missing element from an array containing numbers from `1` to `N`, where one number is missing.

The program calculates the expected sum of numbers from `1` to `N` and subtracts the actual sum of the array elements to find the missing element.

**File:** `20_FindMissingElement.c`

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## 🔢 21. Count Even and Odd Elements

This program counts the number of **even and odd elements** present in an array.

An element is even if it is completely divisible by `2`; otherwise, it is odd.

**File:** `21_CountEvenOdd.c`

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## ➕➖ 22. Count Positive and Negative Elements

This program counts the number of **positive and negative elements** present in an array.

A number greater than `0` is considered positive, while a number less than `0` is considered negative.

The value `0` is neither positive nor negative, so it is not counted.

**File:** `22_CountPositiveNegativeElements.c`

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## ⬅️ 23. Left Rotate an Array

This program performs a left rotation on an array by one position.

In a left rotation, the first element of the array is moved to the last position, while all other elements are shifted one position to the left.

**File:** `23_LeftRotateanArray.c`

### Example

For an array:

```text
10 20 30 40 50
```

After one left rotation:

```text
20 30 40 50 10
```

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## ➡️ 24. Right Rotate an Array

This program performs a right rotation on an array by one position.

In a right rotation, the last element of the array is moved to the first position, while all other elements are shifted one position to the right.

**File:** `24_RightRotateanArray.c`

### Example

For an array:

```text
10 20 30 40 50
```

After one right rotation:

```text
50 10 20 30 40
```

### Time Complexity

**O(n)**

### Space Complexity

**O(1)**

---

## 🔗 25. Singly Linked List

A Singly Linked List is a linear data structure where each node contains data and a pointer to the next node.

This program creates a singly linked list by taking values from the user and inserting each node at the end of the list.

**File:** `25_SinglyLinkedList.c`

### Operations

* Insert
* Display

### Time Complexity

* **Insert at End:** O(n)
* **Display:** O(n)

---

## ⏱️ Time Complexity

| **Algorithm / Operation**      | **Time Complexity** |
| ------------------------------ | ------------------- |
| Linear Search                  | O(n)                |
| Binary Search                  | O(log n)            |
| Bubble Sort                    | O(n²)               |
| Selection Sort                 | O(n²)               |
| Insertion Sort                 | O(n²)               |
| Merge Sort                     | O(n log n)          |
| Quick Sort                     | O(n log n) Average  |
| Find Minimum & Maximum         | O(n)                |
| Reverse Array                  | O(n)                |
| Find Duplicate Elements        | O(n²)               |
| Circular Queue Enqueue         | O(1)                |
| Circular Queue Dequeue         | O(1)                |
| Array Deletion                 | O(n)                |
| Array Insertion                | O(n)                |
| Array Traversal                | O(n)                |
| Sum of Array Elements          | O(n)                |
| Merge Two Arrays               | O(n + m)            |
| Find Average of Array Elements | O(n)                |
| Copy Array                     | O(n)                |
| Find Missing Element           | O(n)                |
| Count Even and Odd             | O(n)                |
| Count Positive and Negative    | O(n)                |
| Left Rotate an Array           | O(n)                |
| Right Rotate an Array          | O(n)                |
| Linked List Insert at End      | O(n)                |
| Linked List Display            | O(n)                |

---

## ▶️ How to Run

### Prerequisites

Make sure GCC is installed on your system.

Check GCC installation using:

```bash
gcc --version
```

### Clone the Repository

```bash
git clone https://github.com/your-username/DSA-in-C.git
```

### Navigate to the Repository

```bash
cd DSA-in-C
```

### Compile a Program

For example:

```bash
gcc 24_RightRotateanArray.c -o right_rotate
```

### Run the Program

**Windows:**

```bash
right_rotate.exe
```

**Linux/macOS:**

```bash
./right_rotate
```

---

## 📂 Repository Structure

```text
DSA-in-C/
│
├── 01_LinearSearch.c
├── 02_BinarySearch.c
├── 03_BubbleSort.c
├── 04_Swapoftwonumbers.c
├── 05_Find_min_max.c
├── 06_SelectionSort.c
├── 07_ReverseArray.c
├── 08_FindDuplicateElements.c
├── 09_Quick_sort.c
├── 10_CircularQueue.c
├── 11_InsertionSort.c
├── 12_MergeSort.C
├── 13_Deletionfromarray.c
├── 14_InsertElementarray.c
├── 15_ArrayTraversal.c
├── 16_SumofArrayElements.c
├── 17_MergeTwoArrays.c
├── 18_FindAverageArray.c
├── 19_CopyArray.c
├── 20_FindMissingElement.c
├── 21_CountEvenOdd.c
├── 22_CountPositiveNegativeElements.c
├── 23_LeftRotateanArray.c
├── 24_RightRotateanArray.c
├── 25_SinglyLinkedList.c
└── README.md
```

---

## 🛠️ Technologies Used

* **C Programming**
* **GCC Compiler**
* **Git**
* **GitHub**
* **Visual Studio Code**

---

## 🎯 Purpose

The purpose of this repository is to:

* Learn Data Structures and Algorithms using C
* Practice fundamental programming concepts
* Understand algorithm implementation and complexity
* Build a collection of DSA practical programs
* Improve problem-solving and programming skills
* Maintain practical programs for academic and interview preparation

---

## 👩‍💻 Author

**Bhagyashree Bhusare**

This repository is maintained for learning, practice, and academic purposes.
