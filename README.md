# Ares Compiler
Compiler for my language ares
# Grammar
## Basic math expressions
Standard PEMDAS rules apply
Modulus(%) operator takes same precedence as Multiply(*) and Divide(/)

## Data types
### Integers
A standard integer can be declared explicity like this:
```rust
let int x = 10;
```
Note the **let** keyword implies the variable will be **immutable**(it cannot be changed)
Use the **var** keyword for **mutable** data types(data that can be changed)
By default **int** is **resizable** to contain **any integer of any length**(Performing computations on these numbers may not work with massively large numbers)
Adding a number to the end of the int data type, like 
```rust
let int8 x = 10;
```
implies that x will be only 8 bytes long. Attempting to store a number that requires more 
## Variables   
### Implicit
if the type is not specified(int, float, etc.), the compiler will define the type for the variable. 
### Explicit
if the type is defined, the compiler will go along with it
