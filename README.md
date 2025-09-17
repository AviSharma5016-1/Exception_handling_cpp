#  Exception Handling and Input Validation in C++

***

### Aim
To implement exception handling and input validation in C++ programs for ensuring safe and correct execution when dealing with invalid or unexpected inputs.  

***

### Theory

In programming, error handling is essential to prevent abnormal crashes and provide meaningful feedback to users. C++ provides two common mechanisms:  

1. **Exception Handling (`try-catch`)**  
   - Exceptions are used when the program encounters serious or unexpected conditions (like division by zero).  
   - `throw` is used to signal an error, and `catch` is used to handle it.  

2. **Input Validation (Conditional Checking)**  
   - Simple input checks using `if-else` statements can prevent invalid data conditions such as negative or zero values in contexts where they don’t make sense.  

#### Advantages
- Provides safer execution (no abrupt termination).  
- Improves user experience by displaying clear error messages.  
- Helps in writing robust, real-world applications.  

***

### Comparative Table of Implemented Programs

| Program Task                  | Technique Used            | Invalid Condition           | Handling Mechanism                  | Example Output |
|-------------------------------|---------------------------|-----------------------------|-------------------------------------|----------------|
| Division of two numbers       | Exception handling (`try-catch`) | Denominator = 0             | Throw exception with message         | "Error: Division by zero is not allowed." |
| Age validation input program  | Conditional statement     | Age <= 0                    | Print validation message             | "Age cannot be zero or negative" |

***

### Algorithms

#### 1. Division with Exception Handling
1. Start the program.  
2. Read two integers `n1` and `n2`.  
3. Use `try` block:  
   - If `n2 == 0` → `throw` an exception with message "Division by zero is not allowed".  
   - Else, compute and print `n1 / n2`.  
4. Use `catch` to handle exception and display the error.  
5. Stop.  

#### 2. Age Validation Program
1. Start the program.  
2. Read integer input `age`.  
3. If `age <= 0` → Print "Age cannot be zero or negative".  
4. Else print "Your age is: " followed by value of `age`.  
5. Stop.  

***

### Conclusion
Both programs demonstrate practical methods of handling **errors and invalid inputs** in C++.  
- The division program illustrates **exception handling**, which is well-suited for runtime errors that require program stability.  
- The age validation program highlights **simple condition-based validation** for ensuring logical correctness of user inputs.  

These approaches are fundamental to writing *robust, user-friendly, and professional-grade applications* in C++.  

***
