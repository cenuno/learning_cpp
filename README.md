# Learning C++

This repository contains notes from the 8<sup>th</sup> edition of ["Sams Teach Yourself C++ in One Hour a Day"](https://www.amazon.com/One-Hour-Sams-Teach-Yourself/dp/0789757745/ref=pd_lpo_sbs_14_t_0?_encoding=UTF8&psc=1&refRID=PSRAR28MSECY46E8PKJ9), written by Siddhartha Rao.

All source code directly comes from the book and all credit goes to Siddhartha for putting together a wonderful resource for developers curious abapp the C++ language.

## Notes on Programming, Building and Executing C++ Applications

This repo was built on a MacBook running macOS Mojave (version 10.14.4). Code was written using VIM. Code was complied using [g++](https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html) using Linux. All executables are named after the script (i.e. `math.app` is an executable that originates from the compiled `math.cpp` C++ file).

```bash
# change from project directory to ch_01/ directory
cd ch_01/

# instruct g++ to create an executable named math.app by compiling the math.cpp file
g++ -o math.app math.cpp

# execute math.app
./math.app
```

## Not Tracking Executable Files on Git

After reading ["Should appary files be stored in a Git repository?" from Quora](https://www.quora.com/Should-appary-files-be-stored-in-a-Git-repository), I've decided to not track executables. To do so, I'm manually adding the `.app` file extension to executables to take advantage of the fact that GitHub's [C++ `.gitignore`](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore) file ignores that particular file extension for executables. 
This decision was made with the understanding that there is no standard file extension type (similar to Window's `.exe`) for executable files on Linux machines since nearly any file can be executable in Linux (Source: [Community Wiki via Ask Ubuntu Stack Exchange](https://askubuntu.com/a/174356/959090)).

