# Generics
Generic Libraries for C programming

# Singly Linked List Library

This C library provides a simple implementation of a singly linked list data structure along with various operations to manipulate it.

## Table of Contents

- [Introduction](#introduction)
- [Use Cases](#use-cases)
- [Structure](#structure)
- [How to Use](#how-to-use)
  - [Building](#building)
  - [Integration](#integration)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A singly linked list is a data structure consisting of a sequence of elements in which each element points to the next element in the sequence. This library provides functionalities to create, manipulate, and destroy singly linked lists in C.

## Use Cases

Singly linked lists are commonly used in scenarios where dynamic memory allocation is required, such as:

- Managing a collection of data with unknown size.
- Implementing various data structures like stacks, queues, and hash tables.
- Manipulating large datasets efficiently.

## Structure

The library consists of the following components:

- **Header File**: `tm_sll.h` - Contains declarations of all functions and structures provided by the library.
- **Source File**: `tm_sll.c` - Implements the functionalities declared in the header file.
- **Test Case**: `tm_sll_test_case.c` - Demonstrates the usage of the library through a simple test case.

## How to Use

### Building

To build the library, you can compile the `tm_sll.c` file along with your project.

Example compilation command:

```bash
gcc tm_sll.c tm_sll_test_case.c -o tm_sll_test_case
```

### Integration

To integrate the library into your project, follow these steps:

1. Copy the `tm_sll.h` header file and `tm_sll.c` source file into your project directory.
2. Include the `tm_sll.h` header file wherever you need to use the singly linked list functionalities.
3. Compile your project along with `tm_sll.c`.
4. Use the provided functions to create, manipulate, and destroy singly linked lists in your code.

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

The provided test case `tm_sll_test_case.c` demonstrates the usage of the library by creating, manipulating, and testing the singly linked list functionalities.

To run the test case:

1. Compile the test case along with the library source files.
2. Execute the compiled binary.

## Contributing

Contributions to the library are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request on the [GitHub repository](https://github.com/example/repo).
