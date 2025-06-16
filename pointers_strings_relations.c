// We directly not able to change the strings so we used the pointer in array to mutate the strings


#include <stdio.h>

int main() {
    char str[] = "Hello, world!";  // Modifiable string
    char *ptr = str;  // Pointer to the character array

    printf("%s\n", ptr);  // Print the string

    ptr[0] = 'h';  // Modifying the string is allowed
    printf("%s\n", ptr);  // Now prints "hello, world!"

    ptr[1]='i';
    printf("%s\n",ptr);
    
    return 0;
}
