#include <stdio.h>
#include <stdlib.h>

int change_cents(int value, int i);
int main(int argc, char* argv[])
{
int count, value, i;

value = atoi(argv[2]);
count = argc;
i = 0;
if (count != 2)
{
printf("Error\n");
return (1);
}
change_cents(value, i);
return (i);
}




int change_cents(int value, int i)
{
if (value >= 25)
{
int tmp;
tmp = value;
value -= tmp;
if (value == 0)
{
return (value, i++);
}
return (change_cents(value,i), i++);
}

if (value >= 10)
{
int tmp;
tmp = value;
value -= tmp;
if (value == 0)
{
return (value, i++);
}
return (change_cents(value,i), i++);
}

if (value >= 5)
{
int tmp;
tmp = value;
value -= tmp;
if (value == 0)
{
return (value, i++);
}
return (change_cents(value,i), i++);
}

if (value >= 2)
{
int tmp;
tmp = value;
value -= tmp;
if (value == 0)
{
return (value, i++);
}
return (change_cents(value,i), i++);
}

if (value >= 100)
{
int tmp;
tmp = value;
value -= tmp;
if (value == 0)
{
return (value, i++);
}
return (change_cents(value,i), i++);
}

}
