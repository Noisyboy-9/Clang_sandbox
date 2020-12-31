#include <stdio.h>

int memrory[1000];

int fib(int number);

int main()
{
    printf("fib of 1000 is : %d", fib(999));
}

int fib(int number)
{
    if (number == 1 || number == 2)
    {
        return 1;
    }

    if (memrory[number] == 0)
    {
        // cache unkown result
        memrory[number] = fib(number - 1) + fib(number - 2);
    }

    return memrory[number];
}