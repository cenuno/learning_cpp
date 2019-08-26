# Chapter 4: Managing Arrays and Strings

In previous lessons, you declared variables to contain a single `int`, `char`,
or `string`. However, you may want to declare a collection of objects, such as
20 `int` values or a `string` of characters to hold a name.

In this lesson, you learn:

* What arrays are and how to declare and use them
* What strings are and how to use character arrays to make them
* A brief introduction to `std::string`

## Notes

* What is an array?
    + A collection of elements;
    + All elements are of the same type; and
    + This collection forms a complete set.

    In C++, arrays enable you to store data elements of a type in memory, in a
    sequential and ordered fashion.

    ```C++
    // example of static arrays
    // ElementType ArrayName [constant_number_of_elements] = {optional_initial_value}

    // store 500K integers
    int manyNumbers [500000] = {0};

    // store 34 characters
    char myCharacters [34] = {""};
    ```

    You can choose to initialize each element in an array with the same value.

    ```C++
    int myNumbers [5] = {6, 7, 8, 9, 10};
    ```

    Or you can partially fill some elements.

    ```C++
    int myNumbers [5] = {34, 56}
    // first two elements are 34 and 56. The rest are set to 0.
    ```

* How is data stored in an array?
    + In general, the amount of memory reserved by the compiler for an array in bytes is:
      ```C++
      Bytes consumed by an array = sizeof(element-type) * Number of Elements
      ```
    + Indexes in C++ start at 0 and not at 1, just like in Python.

* How to access data stored in an array?
    + Elements in an array can be accessed using their zero-based index.
        + First element is at `myNumbers[0]`;
        + Second element is at `myNumbers[1]`.
    + You can try fetching at index 1001 in an array of only 10 elements, but
      that will put the security and stability of your program at risk. The onus
      of ensuring that the array is not accessed beyond its bounds lies solely
      on the programmer.
        + Accessing an array beyond its bounds results in unpredictable behavior.
          In many cases, this causes your program to crash. **Accessing arrays
          beyond their bounds should be avoided at all costs**.
        + This type of error is called a _fence-post error_. It's named after
          the fact that the number of posts needed to build a fence is always
          one more than the number of sections in the fence.
        + The control flow that checks for this type of error is known as a
          _buffer overflow_ and ensures that input is checked before using it
          to index element where the limit is exceeded.

* How to declare and initialize multi-dimensional arrays?
    + C++ enables you to declare multi-dimensional arrays by indicating the number
      of elements you want to reserve in each dimension.
      ```C++
      int threeRowsThreeColumns [3] [3] = {{-501, 206, 2019}, {989, 101, 209}, {303, 456, 695}};
      ```
