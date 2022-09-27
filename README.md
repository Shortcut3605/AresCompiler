# Ares Compiler
Compiler for my language ares
# Grammar
## Basic math expressions
Standard PEMDAS rules apply
Modulus(%) operator takes same precedence as Multiply(*) and Divide(/)
## Variables
- Data types
    ### Int
         an int is a **resizable** variable that can fit any number. Note: performing operations on massive integers may be impossible
    ### Int<value>
        explicit declaration of int <value> bytes long
- Implicit
if the type is not specified(int, float, etc.), the compiler will define the type for the variable. 
- Explicit
if the type is defined, the compiler will go along with it
