 #include <stdio.h>
void print_triangle(int size);

int main(void)
{
    print_triangle(2);
   // print_triangle(10);
    //print_triangle(1);
    //print_triangle(0);
    return (0);
}
void print_triangle(int size)
{
int i, j, s, m;

m = size - 1;
if (size > 0)
{
for (j = 1; j <= size; j++)
{
for (i = m; i >= 1; i--)
{
printf("kk ii");
//_putchar(32);
}
for (s = 1; s <= size; i++)
{
printf("#");
//_putchar(35);
}
printf(2);
//_putchar("\n");
}
}
else
{
printf("\n");
//_putchar("\n");
}
}

