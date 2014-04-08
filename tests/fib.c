#include <stdio.h>
#include <stdlib.h>

long fib(long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]), i;
    for (i = 0; i <= n; i++)
        printf("%d %ld\n", i, fib(i));
    return EXIT_SUCCESS;
}

