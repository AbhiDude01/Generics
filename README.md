# Generics
Generic Libraries for C programming

This C library provides implementations of various data structures, including singly linked lists, stacks, queues, trees, and AVL trees. Each data structure offers functionalities for creating, manipulating, and managing data in C programs.

## Table of Contents

- [Introduction](#introduction)
- [Supported Data Structures](#supported-data-structures)
- [Structure](#structure)
- [How to Use](#how-to-use)
  - [Building](#building)
  - [Integration](#integration)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Data structures play a crucial role in computer science and programming by organizing and storing data efficiently. This library aims to provide reusable and efficient implementations of common data structures in C.

## Supported Data Structures

The library includes the following data structures:

- Singly Linked List
- Stack
- Queue
- Tree
- AVL Tree

Each data structure is designed to address specific use cases and offers distinct advantages in terms of performance and memory usage.

## Structure

The library follows a modular structure, with each data structure contained in its own set of files:

- **Header Files**: Each data structure has its own header file (e.g., `tm_sll.h` for singly linked list) containing declarations of functions and structures.
- **Source Files**: Corresponding source files (e.g., `tm_sll.c`) implement the functionalities declared in the header files.
- **Test Cases**: Each data structure may have its own test case file (e.g., `tm_sll_test_case.c`) demonstrating usage and testing.

## How to Use

### Building

To build the library, compile the source files corresponding to the data structures you want to use along with your project.

Example compilation command:

```bash
gcc tm_sll.c tm_sll_test_case.c -o tm_sll_test_case
```

### Integration

To integrate a data structure into your project, follow these steps:

1. Copy the header file and source file corresponding to the desired data structure into your project directory.
2. Include the header file wherever you need to use the functionalities of that data structure.
3. Compile your project along with the source file of the data structure.
4. Use the provided functions and structures to work with the data structure in your code.

Example usage:

```c
#include <stdio.h>
#include "tm_sll.h"

int main() {
    // Create a singly linked list
    SinglyLinkedList *list = createSinglyLinkedList();

    // Add elements to the list
    int data1 = 10;
    addToSinglyLinkedList(list, (void *)&data1);

    // Perform other operations as needed

    // Destroy the list when done
    destroySinglyLinkedList(list);

    return 0;
}
```

## Testing

The library includes test case files for each data structure, demonstrating usage and providing a way to verify correct behavior.

To run a test case:

1. Compile the test case along with the library source files.
2. Execute the compiled binary.

## Contributing

Contributions to the library are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request on the [GitHub repository](https://github.com/example/repo).
