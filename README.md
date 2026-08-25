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
|      13 | Deletion from Array      | `13_DeletionFromArray.c`     |
|      14 | Insertion in Array       | `14_InsertiElementarray.c`   |
|      15 | Singly Linked List       | `15_SinglyLinkedList.c`      |

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

## 🛠️ Technologies Used

* C Programming
* GCC Compiler
* Git
* GitHub
* Visual Studio Code

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

## 🔗 15. Singly Linked List

A Singly Linked List is a linear data structure where each node contains data and a pointer to the next node.

This program creates a singly linked list by taking values from the user and inserting each node at the end of the list.

**File:** `15_SinglyLinkedList.c`

### Operations

* Insert
* Display

### Time Complexity

* **Insert at End:** O(n)
* **Display:** O(n)

## ➕ 15. Insertion in Array

This program inserts a new element into an array at a position entered by the user.

The elements after the specified position are shifted one position to the right to create space for the new element.

**File:** `15_ArrayInsertion.c`

### Operations

* Enter array elements
* Enter the position for insertion
* Enter the element to insert
* Display the updated array

### Time Complexity

* **Insertion:** O(n)
* **Display:** O(n)

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
gcc 14_DeletionFromArray.c -o deletion
```

### Run the Program

**Windows:**

```bash
deletion.exe
```

**Linux/macOS:**

```bash
./deletion
```

## ⏱️ Time Complexity

| **Algorithm / Operation** | **Time Complexity** |
| ------------------------- | ------------------- |
| Linear Search             | O(n)                |
| Binary Search             | O(log n)            |
| Bubble Sort               | O(n²)               |
| Selection Sort            | O(n²)               |
| Insertion Sort            | O(n²)               |
| Merge Sort                | O(n log n)          |
| Quick Sort                | O(n log n) Average  |
| Find Minimum & Maximum    | O(n)                |
| Reverse Array             | O(n)                |
| Find Duplicate Elements   | O(n²)               |
| Circular Queue Enqueue    | O(1)                |
| Circular Queue Dequeue    | O(1)                |
| Linked List Insert at End | O(n)                |
| Array Deletion            | O(n)                |

## 📂 Repository Structure

```text
DSA-in-C/
│
├── 01_LinearSearch.c
├── 02_BinarySearch.c
├── 03_BubbleSort.c
├── 04_Swapoftwonumbers.c
├── 05_find_min_max.c
├── 06_SelectionSort.c
├── 07_ReverseArray.c
├── 08_FindDuplicateElements.c
├── 09_QuickSort.c
├── 10_CircularQueue.c
├── 11_InsertionSort.c
├── 12_MergeSort.c
├── 13_Deletionfromarray.c
├── 14_InsertElementarray.c
├── 15_SinglyLinkedList.c
└── README.md
```

## 🎯 Purpose

The purpose of this repository is to:

* Learn Data Structures and Algorithms using C
* Practice fundamental programming concepts
* Understand algorithm implementation and complexity
* Build a collection of DSA practical programs
* Improve problem-solving and programming skills
* Maintain practical programs for academic and interview preparation

## 👩‍💻 Author

**Bhagyashree Bhusare**

This repository is maintained for learning, practice, and academic purposes.
