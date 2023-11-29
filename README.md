# EvenOddOperations

**Author: Angel Zaldivar**

**Goal: Even and Odd Array Operations**

This C++ program, authored by Angel Zaldivar, focuses on array operations involving even and odd numbers. The goal is to take user input for an array, count the occurrences of even and odd numbers, and then create separate arrays for even and odd numbers.

**Code Explanation:**

The program includes the following functions:

1. **askUserForInputArray:**
    - Prompts the user to enter the size of the array (`aSize`) and the array elements.
    - Dynamically allocates memory for the array using `new`.
    - Returns a pointer to the dynamically allocated array.

2. **countOccurrences:**
    - Counts the occurrences of even and odd numbers in the given array.
    - Utilizes pointers to traverse the array.

3. **transferEvenValuesFromTo:**
    - Copies even values from the original array to a new array (`even`).
    - Uses a separate pointer (`temp`) to keep track of the position in the new array.
    
4. **transferOddValuesFromTo:**
    - Copies odd values from the original array to a new array (`odd`).
    - Uses a separate pointer (`temp`) to keep track of the position in the new array.

5. **printArray:**
    - Prints the elements of an array along with a provided caption.
    - Utilizes pointers to traverse the array.

**Main Function:**

In the `main` function, the program:
- Declares variables to store array size (`aSize`), counts of even and odd numbers (`evenCount` and `oddCount`), and pointers for the original array (`p`) and two new arrays (`aEven` and `aOdd`).
- Invokes `askUserForInputArray` to obtain user input for the original array.
- Calls `countOccurrences` to count the occurrences of even and odd numbers.
- Invokes `transferEvenValuesFromTo` and `transferOddValuesFromTo` to create separate arrays for even and odd numbers.
- Prints the even and odd arrays using the `printArray` function.

**Memory Management:**
- The program uses dynamic memory allocation with `new` to allocate memory for the arrays.
- It is important to note that the allocated memory should be deallocated using `delete` to avoid memory leaks. In this case, deallocation is not shown in the provided code.

In summary, the program demonstrates the use of pointers and dynamic memory allocation to handle arrays, count occurrences of even and odd numbers, and create separate arrays for even and odd values based on user input.
