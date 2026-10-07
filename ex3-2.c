#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

int main()
{
    int n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (top == MAX - 1)
        {
            printf("Stack Overflow!\n");
            return 0;
        }

        stack[++top] = value;
    }

    printf("Stack elements are: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    // POP operation
    if (top == -1)
    {
        printf("\nStack Underflow!\n");
    }
    else
    {
        printf("\nPopped element: %d\n", stack[top]);
        top--;
    }

    printf("Stack after POP: ");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    return 0;
}
