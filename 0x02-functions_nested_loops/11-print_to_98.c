#include<stdio.h> 

void print_to_98(int n)
{

if (n > 98)
{
while (n > 98)
{
printf("%d, ",n--);
printf("%d",n);
}
}
else if (n == 98)
{
printf("%d",n);
}
else
{
while (n < 98)
printf ("%d, ",n++);
printf("%d",n);
}
printf("\n");
}
