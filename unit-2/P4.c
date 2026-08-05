#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number is not possible.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        push(i);

    while (top != -1) {
        factorial *= pop();
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
