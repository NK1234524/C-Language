/*Key Properties of Prime Numbers:
Divisibility: A prime number has exactly two distinct positive divisors: 1 and itself.
Greater than 1: Prime numbers must be greater than 1.
Examples:
2 is a prime number (it can only be divided by 1 and 2).
3 is a prime number (it can only be divided by 1 and 3).
5 is a prime number (it can only be divided by 1 and 5)*/

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input the number to check
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle special cases: 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisibility from 2 to n-1
    for(i = 2; i <= n / 2; ++i) {
        // If n is divisible by any number other than 1 and itself, it's not prime
        if(n % i == 0) {
            flag = 1;   // Flag is used for prime numbers.
            break;
        }
    }

    // Output whether the number is prime or not
    if (flag == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
