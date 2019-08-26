# Chapter 3: Using Variables & Declaring Constants

Variables are tools that help the programmer temporarily store data for a finite amount of time. Constants are tools that help the programmer define artifacts that are not allowed to change or make changes.

In this lesson, you find out:

* How to declare and define variables and constants;
* How to assign values to variables and manipulate those values;
* How to write the value of a variable to the screen; and
* How to use keywords `auto` and `constexpr`.

## Notes

Random Access Memory (RAM) is space in the computer for temporary storage. Think of it similar to a storage area. To access a location in memory, say location ABC, the process needs to be asked via an instruction to fetch a value from there or write a value to it.

* How do you define a variable?
    ```C++
    // unless the initial value is assigned, you cannot be sure of the contents of that memory location
    // which can be bad for the program
    VariableType VariableName;

    // instead, initialize the variable with some value 
    VariableType VariableName = InitialValue;

* How do you declare a constant?
    ```C++
    const type-name constant-name = value;
    ```
    + It is good programming practice to define variabes that are not supposed to change their values as `const`. The usage of the `const` keyword indicates that the programmer has thought about ensuring the constantness of data where required and protects their application from inadvertent changes to this constant.

* Why did I need to run the following in bash?
    ```bash
    g++ -o constant_expression.app constant_expression.cpp -std=c++11
    ```
    + In order to take advantage of `constexpr`, I needed to compile with C++11 (or greater) support enabled. Adding the `-std=c++11` option to the `g++` compile call allowed me to manually specify which version of C++ to use when the machine compiles the `.cpp` file. For more on the standard libraries available, [read the Command Options section found  here](https://gcc.gnu.org/onlinedocs/libstdc++/manual/using.html#manual.intro.using.flags).

* What are enumerators?
     + Enumerators are a set of constants composed of enumerations. Using the keyword `enum` allows you to create a type of variable whose values are restricted to a certain set defined by you.

