#include <stdio.h>

#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Stack size exceeded!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &stack[i]);
        top++;
    }

    // Peek operation
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element (Peek) = %d\n", stack[top]);
    }

    return 0;
}
