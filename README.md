# Compiler

This is a simple C program named `compiler.c` that implements a recursive descent parser for evaluating arithmetic expressions.

## Description

The `compiler.c` file contains a basic implementation of a recursive descent parser for arithmetic expressions. It supports addition, subtraction, multiplication, and division operations, as well as parentheses for grouping expressions. The program reads an arithmetic expression entered by the user, evaluates it, and prints the result.

## Usage

To use the compiler, follow these steps:

1. Clone the repository:

    ```
    git clone https://github.com/Ismat-Samadov/compiler.git
    ```

2. Navigate to the directory:

    ```
    cd compiler
    ```

3. Compile the `compiler.c` file:

    ```
    gcc compiler.c -o compiler
    ```

4. Run the compiled program:

    ```
    ./compiler
    ```

5. Enter an arithmetic expression when prompted.

6. The program will evaluate the expression and print the result.

## Example

Here's an example of using the compiler:

```
$ ./compiler
Enter an arithmetic expression: 5+3
Result: 8
```

## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
