#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int change, coin = 0;

if (argc != 2)
{
        printf("Error\n");
        return (1);
}
change = atoi(argv[1]);

while (change > 0)
{
        if (change >= 25)
                change -= 25;

        else if (change >= 10)
                change -= 10;

        else if (change >= 5)
                change -= 5;

        else if (change >= 2)
                change -= 2;

        else
                change -= 1;

        coin++;
}
printf("%d\n", coin);
return (0);
}

