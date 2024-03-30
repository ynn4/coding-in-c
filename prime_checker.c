#include <stdio.h>

int is_prime(int n);

int main () {
    int n;
    printf("type a number: \n");
    scanf("%i", &n);

    if (is_prime(n)) {
        printf("%i is prime\n", n);
    }
    else {
        printf("%i is not prime\n", n);
    }
}

int is_prime(int n)
{
    if (n <= 1) {
        return 0; // Not prime
    }
    if (n == 2 || n == 3) {
        return 1; // Prime
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0; // Not prime
        }
        i++;
    }
    return 1; // Prime
}
