# C++ Programming Language

<p>
C++, a general-purpose programming language that supports procedural, object-oriented, and generic programming. C++ is an extension of the C programming language and is commonly used for developing operating systems, system software, embedded systems, and various application software. It is known for its efficiency, performance, and flexibility.
</p>

## Table of Contents

- [C++ Programming Language](#c-programming-language)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [History](#history)
  - [Features](#features)
  - [Hello World](#hello-world)
  - [Basic Syntax](#basic-syntax)
  - [Data Types](#data-types)
  - [Variables](#variables)
  - [Constants](#constants)
  - [Operators](#operators)
  - [Decision Making](#decision-making)
  - [Loops](#loops)
  - [Functions](#functions)
  - [Arrays](#arrays)
  - [Pointers](#pointers)
  - [Strings](#strings)
  - [Structures](#structures)
  - [Classes](#classes)
  - [File I/O](#file-io)
  - [Exception Handling](#exception-handling)
  - [Preprocessor](#preprocessor)
  - [Templates](#templates)
  - [STL](#stl)
  - [Multithreading](#multithreading)
  - [References](#references)

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The language has expanded significantly over time, and modern C++ now has object-oriented, generic, and functional features in addition to facilities for low-level memory manipulation. It is almost always implemented as a compiled language, and many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Oracle, and IBM, so it is available on many platforms.

C++ was designed with a bias toward system programming and embedded, resource-constrained software and large systems, with performance, efficiency, and flexibility of use as its design highlights. C++ has also been found useful in many other contexts, with key strengths being software infrastructure and resource-constrained applications, including desktop applications, video games, servers (e.g. e-commerce, web search, or SQL servers), and performance-critical applications (e.g. telephone switches or space probes). C++ is a compiled language, with implementations of it available on many platforms and provided by various organizations, including the FSF, LLVM, Microsoft, Intel, Oracle, and IBM.

C++ is standardized by the International Organization for Standardization (ISO), with the latest standard version ratified and published by ISO in December 2020 as ISO/IEC 14882:2020 (informally known as C++20). The C++ programming language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03, C++11, C++14, and C++17 standards. The current C++20 standard supersedes these with new features and an enlarged standard library. Before the initial standardization in 1998, C++ was developed by Danish computer scientist Bjarne Stroustrup at Bell Labs since 1979 as an extension of the C language; he wanted an efficient and flexible language similar to C that also provided high-level features for program organization.

Many other programming languages have been influenced by C++, including C#, D, Java, and newer versions of C (after 1998).

## History

C++ was developed by Bjarne Stroustrup, as an extension to the C language. He added features such as classes, inheritance, virtual functions, operator overloading, multiple inheritance, templates, and exception handling. His main aim was to design a language with far better facilities for manipulating user-defined types, to data security and to catch more errors during compilation.

The first commercial implementation of C++ was released in October of 1985. This was the Cfront compiler, which translates C++ code to C. In 1989, the compiler was changed to use a native C++ compiler, called Cfront 3.0. This was not compatible with the previous version, and was criticized for its poor performance. In 1991, AT&T released a new version of C++ called C++ 2.0, which was compatible with Cfront 3.0. In 1998, the ISO working group standardized the language as a separate language distinct from C, and named it C++98.

## Features

C++ is a statically typed, compiled, general-purpose, case-sensitive, free-form programming language that supports procedural, object-oriented, and generic programming.

C++ is regarded as a middle-level language, as it comprises a combination of both high-level and low-level language features.

C++ was developed by Bjarne Stroustrup starting in 1979 at Bell Labs in Murray Hill, New Jersey, as an enhancement to the C language and originally named C with Classes but later it was renamed C++ in 1983.

C++ is a superset of C, and that virtually any legal C program is a legal C++ program.

Note − A programming language is said to use static typing when type checking is performed during compile-time as opposed to run-time. C++ programming language is a hybrid language that supports both procedural and object-oriented programming paradigms.

Some of the applications where C++ programming is used:

- Operating Systems
- Language Compilers
- Assemblers
- Text Editors
- Print Spoolers
- Network Drivers
- Modern Programs
- Databases
- Language Interpreters
- Utilities

## Hello World

```cpp
#include <iostream>
using namespace std;

int main() {
   cout << "Hello, World!";
   return 0;
}
```

## Basic Syntax

- C++ is case-sensitive.
- Each C++ statement ends with a semicolon (;).
- The execution of a C++ program starts from the main() function.
- The curly braces { } indicate the beginning and the end of a function.
- Comments can be added between /_ and _/.
- The #include is a preprocessor command that is used to include header files.
- The using namespace std; statement tells the compiler to use the std namespace. Namespaces are a relatively recent addition to C++.
- The cout object, together with the << operator, is used to output values/print text.

## Data Types

Data types in C++ is mainly divided into three types: Primitive Data Types, Abstract or User-Defined Data Types, and Derived Data Types.

- Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables. For example: int, char, float, bool, etc.

- Abstract or User-Defined Data Types: These data types are defined by the user itself. For example: class, structure, union, enum, etc.

- Derived Data Types: These data types are derived from the primitive data types. For example: array, pointer, etc.

## Variables

A variable is a name given to a memory location that stores data of a specific type. The compiler allocates memory for the variable based on the data type of a variable.

```cpp

// Variable declaration:

int a, b, c;

// Variable initialization:

a = 10;
b = 20;
c = a + b;

// Variable declaration and initialization:

int a = 10, b = 20, c = a + b;

```

## Constants

Constants are also like normal variables. But, only difference is, their values can not be modified by the program once they are defined.

```cpp

// Constant declaration:

const int a = 10;

// Constant declaration and initialization:

const int a = 10, b = 20;

```

## Operators

Operators are used to perform operations on variables and values.

- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Misc Operators

## Decision Making

Decision making structures require that the programmer specifies one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false.

- if statement
- if...else statement
- nested if statement
- switch statement

## Loops

Loops are used in programming to repeat a specific block of code. In this article, you will learn to create while and do...while loops in C++ programming.

- while loop
- do...while loop
- for loop
- nested loops

## Functions

A function is a group of statements that together perform a task. Every C++ program has at least one function, which is main(), and all the most trivial programs can define additional functions.

You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division usually is such that each function performs a specific task.

A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

The C++ standard library provides numerous built-in functions that your program can call. For example, function strcat() to concatenate two strings, function memcpy() to copy one memory location to another location and many more functions.

A function can also be referred as a method or a sub-routine or a procedure, etc.

## Arrays

An array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar type of elements as in the data type must be the same for all elements.

```cpp

// Array declaration:

int arr[5];

// Array declaration and initialization:

int arr[5] = { 10, 20, 30, 40, 50 };


// Accessing array elements:

int arr[5] = { 10, 20, 30, 40, 50 };

cout << arr[0]; // 10
cout << arr[1]; // 20
cout << arr[2]; // 30
cout << arr[3]; // 40
cout << arr[4]; // 50

```

## Pointers

A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is:

```cpp

type *var-name;

```

Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable. The asterisk \* used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations:

```cpp

int    *ip;    // pointer to an integer

double *dp;    // pointer to a double

float  *fp;    // pointer to a float

char   *ch     // pointer to a character

```

## Strings

In C++, a string is an object of the class String. This class is available in the string header file. The string class can be initialized using its constructor or by using an equal sign (=).

```cpp

// String initialization using constructor:

string str1("Hello World");

// String initialization using equal sign:

string str2 = "Hello World";

```

## Structures

A structure is a user-defined data type available in C++ that allows to combining data items of different kinds. Structures are used to represent a record. Suppose you want to keep track of your books in a library. You might want to track the following attributes about each book −

- Title
- Author
- Subject
- Book ID

```cpp

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

```

## Classes

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

```cpp

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

```

## File I/O

File handling is an important part of any web application.

PHP has several functions for creating, reading, uploading, and editing files.

The PHP file functions allow you to create, open, read, write, and close files on the server.

## Exception Handling

An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero.

Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and throw.

- throw: A program throws an exception when a problem shows up. This is done using a throw keyword.

- catch: A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

- try: A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.

## Preprocessor

The preprocessor is a program that processes the source code before it passes through the compiler. It scans the source code as a whole and changes it before it is compiled.

The preprocessor directives are lines included in the code of programs preceded by a hash sign (#). These lines are not program statements but directives for the preprocessor. The preprocessor examines the code before actual compilation of code begins and resolves all these directives before any code is actually generated by regular statements.

All preprocessor directives begin with #, and only white-space characters may appear before a preprocessor directive on a line. Preprocessor directives are not C++ statements, so they do not end in a semicolon (;).

## Templates

Templates are powerful features of C++ which allows you to write generic programs. In simple terms, you can create a single function or a class to work with different data types using templates. Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.

The concept of templates can be used in two different ways:

- Function Templates

- Class Templates

## STL

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows a great flexibility in the types supported as elements.

The container manages the storage space for its elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).

## Multithreading

Multithreading is a specialized form of multitasking and a multitasking is the feature that allows your computer to run two or more programs concurrently. In general, there are two types of multitasking: process-based and thread-based.

- Process-based multitasking handles the concurrent execution of programs. Each program is allocated its own memory (RAM) and other resources by the operating system.

- Thread-based multitasking deals with the concurrent execution of pieces of the same program. Each part of the program is called a thread, and each thread defines a separate path of execution.

## References

    ...
