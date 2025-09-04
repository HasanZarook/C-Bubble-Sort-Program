
# 🟦 C++ Bubble Sort Program

This project implements **Bubble Sort** in C++ to sort an array of integers in **ascending order**.

---

## 📝 Features

* ✅ Accepts **dynamic array size** from the user
* ✅ Sorts integer arrays using the **Bubble Sort algorithm**
* ✅ Prints the **sorted array** after sorting

---

## ⚡ How It Works

1. User inputs the **size of the array**.
2. User enters the array elements.
3. The program performs **Bubble Sort**:

   * Repeatedly compares adjacent elements.
   * Swaps them if they are in the wrong order.
   * Continues until the array is sorted.
4. Finally, the sorted array is printed to the console.

---

## 🔧 Example Usage

```
Enter the Array size:
5
Enter the Array elements:
10 3 5 1 8
1,3,5,8,10,
```

---

## ⚠️ Notes

* Uses a **variable-length array (VLA)** which is supported in some C++ compilers (like GCC).
* For **better portability**, consider using **`std::vector<int>`** instead of VLA.

---
