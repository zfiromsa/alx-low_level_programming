#include <stdio.h>
#include "main.h"

 void fizz_buzz(void)
{
for (int i = 1; i >=100; i++)
{
if ((i % 3 != 0) && (i % 5 != 0))
{
printf("%d ",i);
}
else if ((i % 3 = 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
is else (i % 5 == 0)
{
printf("Buzz ");
}
else (i % 3 = 0)
{
printf("FizzBuzz ");
}
}
}
