# Chapter 1: Getting Started

In this lesson, you find out:

* Why C++ is a standard in software development
* How to enter, compile, and link your first working C++ program
* What's new in C++

## Notes

* What does "#include <iostream>" do?
    + > That is a [C++ standard library](https://en.wikipedia.org/wiki/C%2B%2B_Standard_Library) header file for [input output streams](https://en.wikipedia.org/wiki/Input/output_(C%2B%2B)#Input.2Foutput_streams). It includes functionality to read and write from streams. You only need to include it if you wish to use streams. - Elliot Frish, courtesy of [Stack Overflow](https://stackoverflow.com/a/22645144/7954106)

* What does `std::cout` mean?
    + display a line on the screen.

* What does `std::end1` mean?
    + instructs `cout` to end that line.

* What does `return 0` mean?
    + application exits by returning 0 to the operating system.

* How does an interpreted language differ from a compiled language?
    + Languages such as Python are interpreted. There is no compilation step. Interpreted languages use an interpreter that directly reads the script text file (code) and performs the desired actions. This result in two direct consequences:
        + the interpreter needs to be installed on a machine where the script needs to be executed; and
        + performance usually takes a hit as the interpreter works as a runtime translator between the microprocessor and the code written.

* What is the difference between an interpreter and a complier?
    + An interpreter is a tool that interprets what you code (or an intermediate byte code) and performs certain actions.
    + A compiler is one that takes your code as an input and generates an object file. In the case of C++, after compiling and linking you have an executable that can run directly by the process without need for any further interpretation.

* What does the linker do?
    + A complier takes C++ code file as an input and generates an object file in machine language. Often your code has dependencies on libraries and functions in other code files. Creating these links and generating an executable that integrates all dependencies directly and indirectly coded by you is the job of the linker.

* What are the steps in the normal development lifecycle?
    + code;
    + compile to create object file;
    + link to create executable;
	+ note: compilation and linking is usually done in one step
    + execute to test;
    + debug;
    + fix errors in code; and
    + repeat.

