#include <stdio.h>
#include <math.h>
#define max 10
int top = -1;
int stack[max];
int findarstrong(int);
int pop();
void push(int);
int main()
{

    int n;
    printf(" Enter a number \n");
    scanf("%d", &n);
    if (findarstrong(n))
    {
        printf("%d is armstronng number \n", n);
    }
    else
    {
        printf("%d is not a armstrong number \n", n);
    }

    return 0;
}
int findarstrong(int num)
{
    int j, remainder, temp, count, value;
    temp = num;
    count = 0;
    while (num > 0)
    {
        remainder = num % 10;
        push(remainder);
        count++;
        num = num / 10;
    }
    num = temp;
    value = 0;
    while (top >= 0)
    {
        j = pop();
        value = value + pow(j, count);
    }
    if (value == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int m)
{
    top++;
    stack[top] = m;
}

int pop() {
    if (top != -1) {
        int j = stack[top];
        top--;
        return j;
    } else {
        // Return 0 if no elements left (this should never happen)
        return 0;
    }
}



