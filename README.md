# cse3150_week_1_hw

## Practice Problem: Namespaces and Header Organization in C++

### Assignment Instructions
1. Create a namespace MathUtils in its own file with:
    - *int add(int a, int b)* returning the sum.
    - *int multiply(int a, int b)* returning the product.
2. Create a namespace AdvancedMath in its own file with:
    - *int square(int n)* returning the square. This should call the MathUtils multiply.
3. Put declarations into header files and definitions into .cpp files.
4. Write a main.cpp that uses both namespaces and prints results.
5. Place your headers in a folder called include, and the cpp files in a folder called src.
6. Put this in a repo called cse3150 week 1 hw in your GitHub.
7. Make sure you don’t push any executables to GitHub.
8. Make sure to test your code with pytest before pushing.

### Compilation
To compile the program, run the following command from the root directory of the repository:
```bash
c++ -std=c++17 src/*.cpp -I include/ -o program
