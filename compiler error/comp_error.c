#include <stdio.h>

int main() {
    int x = 10, y = 20;
    float result;

    // Error 1: Missing semicolon after printf
    printf("Hello World")

    // Error 2: Using undeclared variable z
    result = z + x;

    // Error 3: Incorrect function declaration, return type void doesn't match return value
    void add(int a, int b) {
        return a + b;
    }

    // Error 4: Using a function before it is declared or defined
    int sum = multiply(x, y);

    // Error 5: Incorrect array declaration, missing size
    int array[];

    // Error 6: String without null terminator or string literal missing quotes
    char name[5] = {'A', 'B', 'C', 'D'};

    // Error 7: Infinite recursion without a base case, will cause runtime issues, but the warning could be caught in some compilers
    int infiniteLoop() {
        return infiniteLoop();
    }

    // Error 8: Missing closing brace for the function
    int subtract(int a, int b) {
        return a - b;

    // Error 9: Trying to assign a string to a char variable
    char letter = "A";

    // Error 10: Mismatched types in conditional, 'result' is a float and 'x' is an int
    if(result = x) {
        printf("Equal\n");
    }

    return 0;
}




{
//

comp_error.c: In function ‘main’:
comp_error.c:8:26: error: expected ‘;’ before ‘result’
 8 |     printf("Hello World")
      |                          ^
      |                          ;
......
   11 |     result = z + x;
      |     ~~~~~~                
comp_error.c: In function ‘add’:
comp_error.c:15:18: warning: ‘return’ with a value, in function returning void
   15 |         return a + b;
      |                ~~^~~
comp_error.c:14:10: note: declared here
   14 |     void add(int a, int b) {
      |          ^~~
comp_error.c: In function ‘main’:
comp_error.c:19:15: warning: implicit declaration of function ‘multiply’ [-Wimplicit-function-declaration]
   19 |     int sum = multiply(x, y);
      |               ^~~~~~~~
comp_error.c:22:9: error: array size missing in ‘array’
   22 |     int array[];
      |         ^~~~~
comp_error.c: In function ‘subtract’:
comp_error.c:37:19: warning: initialization of ‘char’ from ‘char *’ makes integer from pointer without a cast [-Wint-conversion]
   37 |     char letter = "A";
      |                   ^~~
comp_error.c: In function ‘main’:
comp_error.c:45:1: error: expected declaration or statement at end of input
   45 | }
   //
}
