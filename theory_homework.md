# Homework 5

## 1. Describe briefly what a static/dynamic library is and some reasons to use one over the other


## 2. What flags would you need to pass to the linker to tell it to look for library files in a directory called /some/dir/lib and to link to a library file called libfmt-3.2.0.so
```bash
-L/some/dir/lib -lfmt-3.2.0
```


## 3. Describe the four parts of a function definition. What parts of the definition constitute the function's signature?
The return value, function name and parametes constitute the function's signature.
The fourth part is the code block that actually defines what the function is supposed to do. 

Example:
```cpp
int my_function(int i, int j) {  // returns an int, two parameters i, j
    int sum = i + j;             // function body
    return sum;
}
```




## 4. Given an object like `int x{3};`, 
### 4.1. How would you get its address?
### 4.2. How would you write the type of a pointer to the object?


## 5. Write the class declaration for a 2D point class consisting of an x and a y coordinate a destructor, and two constructors  (declaration is sufficient):

### 5.1. A default constructor

### 5.2. A constructor taking two parameters, one for each point