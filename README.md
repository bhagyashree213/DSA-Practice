# 📚 Data Structures Practicals in C

A collection of Data Structures and Algorithms practical programs implemented in C.

This repository is created for learning, practicing, and maintaining C programming practicals.

## 📌 Table of Contents

* [About](#-about)
* [Practicals](#-practicals)
* [Technologies Used](#️-technologies-used)
* [How to Run](#️-how-to-run)
* [Time Complexity](#-time-complexity)
* [Repository Structure](#-repository-structure)
* [Purpose](#-purpose)
* [Author](#-author)

## 📖 About

This repository contains basic Data Structures and Algorithms programs in C.

The programs are written in a simple and beginner-friendly way to understand searching, sorting, arrays, and fundamental data structures.

The repository includes practical implementations of:

* Searching Algorithms
* Sorting Algorithms
* Array Operations
* Basic Programming Problems
* Fundamental Data Structures and Algorithms
* Circular Queue
* Singly Linked List

## 📚 Practicals

| **No.** | **Practical**            | **File**                     |
| ------: | ------------------------ | ---------------------------- |
|       1 | Linear Search            | `01_LinearSearch.c`          |
|       2 | Binary Search            | `02_BinarySearch.c`          |
|       3 | Bubble Sort              | `03_BubbleSort.c`            |
|       4 | Swap of Two Numbers      | `04_Swapoftwonumbers.c`      |
|       5 | Find Minimum and Maximum | `05_find_min_max.c`          |
|       6 | Selection Sort           | `06_SelectionSort.c`         |
|       7 | Reverse an Array         | `07_ReverseArray.c`          |
|       8 | Find Duplicate Elements  | `08_FindDuplicateElements.c` |
|       9 | Quick Sort               | `09_QuickSort.c`             |
|      10 | Circular Queue           | `10_CircularQueue.c`         |
|      11 | Insertion Sort           | `11_InsertionSort.c`         |
|      12 | Merge Sort               | `12_MergeSort.c`             |
|      13 | Singly Linked List       | `13_SinglyLinkedList.c`      |

## 🔍 1. Linear Search

Linear Search checks each element of an array one by one until the required element is found.

**File:** `01_LinearSearch.c`

**Time Complexity:** O(n)

## 🔎 2. Binary Search

Binary Search is used to search for an element in a sorted array by repeatedly dividing the search range into two halves.

**File:** `02_BinarySearch.c`

**Time Complexity:** O(log n)

## 🫧 3. Bubble Sort

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

**File:** `03_BubbleSort.c`

**Time Complexity:** O(n²)

## 🔄 4. Swap of Two Numbers

This program demonstrates how to swap two numbers using a temporary variable.

**File:** `04_Swapoftwonumbers.c`

**Time Complexity:** O(1)

## 📉 5. Find Minimum and Maximum

This program finds the minimum and maximum elements from an array.

**File:** `05_find_min_max.c`

**Time Complexity:** O(n)

## 🎯 6. Selection Sort

Selection Sort repeatedly finds the smallest element from the unsorted portion and places it in the correct position.

**File:** `06_SelectionSort.c`

**Time Complexity:** O(n²)

## 🔃 7. Reverse an Array

This program reverses the elements of an array by swapping elements from both ends.

**File:** `07_ReverseArray.c`

**Time Complexity:** O(n)

## 🔁 8. Find Duplicate Elements

This program identifies duplicate elements present in an array.

**File:** `08_FindDuplicateElements.c`

**Time Complexity:** O(n²)

## ⚡ 9. Quick Sort

Quick Sort is a divide-and-conquer sorting algorithm. It selects a pivot element and partitions the array around the pivot.

**File:** `09_QuickSort.c`

### Quick Sort Complexity

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n²)
* **Average Space Complexity:** O(log n)

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

## 📝 11. Insertion Sort

Insertion Sort is a simple sorting algorithm that builds the sorted array one element at a time. Each element is compared with the elements before it and inserted into its correct position.

**File:** `11_InsertionSort.c`

### Insertion Sort Complexity

* **Best Case:** O(n)
* **Average Case:** O(n²)
* **Worst Case:** O(n²)
* **Space Complexity:** O(1)

## 🔀 12. Merge Sort

Merge Sort is a divide-and-conquer sorting algorithm. It divides the array into smaller subarrays, sorts them, and then merges them to produce a sorted array.

**File:** `12_MergeSort.c`

### Merge Sort Complexity

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n log n)
* **Space Complexity:** O(n)

## 🔗 13. Singly Linked List

A Singly Linked List is a linear data structure where each node contains data and a pointer to the next node.

This program creates a singly linked list by taking values from the user and inserting each node at the end of the list.

**File:** `13_SinglyLinkedList.c`

### Operations

* Insert
* Display

### Time Complexity

* **Insert at End:** O(n)
* **Display:** O(n)

## 🛠️ Technologies Used

* C Programming
* GCC Compiler
* Git
* GitHub
* Visual Studio Code

## ▶️ How to Run

### Prerequisites

Make sure GCC is installed on your system.

Check GCC installation using:

```bash
gcc --version
