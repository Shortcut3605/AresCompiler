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
implies that **x will be only 8 bytes long**. Attempting to store a number that requires **more than 8 bytes** will **result in an error**.
### Floating point
**floating point number rules are the exact same as integer rules**, except floating points store a decimal along with a number. Note, **attempting to IMPLICITLY create a float that can be evaluated to an int will not result in an implicit float, but an int. For example (5.3 + 6.7) = integer 12, not float 12. 0.000 also equals integer 0, not floating point 0. This is true for ADDITION and SUBTRACTION at the moment. I am still figuring out how to do this with multiplication and divison.**
## Variables   
### Implicit
if the type is not specified(int, float, etc.), the compiler will define the type for the variable. 
### Explicit
if the type is defined, the compiler will go along with it
