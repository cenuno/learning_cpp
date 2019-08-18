# Chapter 2: The Anatomy of a C++ Program

C++ programs are organized into classes comprising member functions and member variables. Most of this book is devoted to explaining these parts in depth, but to get a sense of how a program fits together, you must see a complete working program.

In this lesson, you'll learn:

* The parts of a C++ program;
* How the parts work together;
* What a function is and what it does; and
* Basic input and output operations

## Notes

* What is the preprocessor directive "#include"?
    + A preprocessor is a tool that runs before the actual compilation starts. Preprocessor directives are commands to the preprocessor and always start with a pound sign (`#`).
    + `#include <filename>` tells the preprocessor to take the contents of the file (`iostream`) and include them at the line where the directive is made.

* What is `main()`?
    + The function `main()` starts the execution of a C++ program. It is a standardized convention that function `main()` is declared with an `int` preceding it. `int` is the return value type of the function `main()` and stands for integer.
    + Alternatively, you may see `int main (int argc, char* argv[])`, where the contents of the parenthesis are "arguments" supplied to the program that allows the user to start it with command line arguments.

* What is `cout` and `endl`?
    + `cout` is pronounced "console out" or "see out" and prints the _string literal_ to the terminal. `cout` is a _stream_ defined in the standard `std` _namespace_ (hence, `std::cout`)
        + The string literal "Hello World" is placed into this tream by way of `<<`, the stream insertion operator.
        + Note that `<<` needs to be used every time a new entity needs to be inserted into the stream.
    + `std::endl` is used to end a line and inserting into the stream is similar to inserting a carriage return.

* Do C++ programs need to return a value?
    + Functions in C++ need to return a value unless explicitly specified otherwise. 
    + One application is luanched by another and the parent application that is first launched wants to know if the child application(s) has completed its task successfully. The programmer can use the return value of `main()` to convey a success or error state to the parent application.
        + Conventionally, programmers return 0 in the event of success or -1 in the event of error.

* What are namespaces?
    + Namespaces are names given to parts of code that help in reducing the potential for a naming conflict. By invoking `std::cout`, you are telling the compiler to use that one unique `cout` that is available in the `std` namespace. 
    + To reduce typing, three options are available to C++ programmers:
         + Add the `<header file>` to their code whenever they use features from the same file (i.e. `std::cout`)
         + Tell the complier what namespace to search in
         ```C++
         using namespace std;

         // write to screen using std::cout
         cout << "Hello World" << endl;
         ```
         + Include only the features you wish to use from any given namespace
         ```C++
         using std::cout;
         using std::endl;

         // write to screen using std::cout
         cout << "Hello World"  << endl;

* What are functions in C++?
    + Functions enable you to divide the content of your application into functional units that can be invoked in a sequence of your choosing. A function, when invoked, typically returns a value to the invoking/calling function. The most famous function is `int main()`, which the compiler recognizes as the starting point of your C++ application and has to return an `int`.

* What is `std::cin` used for?
    + `std::cin` is used to read text and numbers entered into the Terminal. It is followed by `>>`, the _extraction operator_ (which looks closely related to `<<`, the insertion operator), which extracts data from the input stream. The `>>` extraction operator is followed by the variable where the data needs to be stored. 

