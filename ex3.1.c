#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

int main()
{
    int value;

    printf("Enter the value to push: ");
    scanf("%d", &value);

    push(value);

    return 0;
}
