#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n) {
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", fibonacci(i));
    }
}

int main() {
    int n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    start = clock();
    printFibonacci(n);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken: %f seconds\n", cpu_time_used);

    return 0;
}