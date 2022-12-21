#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int i, pass, size;

size = 10;
srand(time(NULL));
for(i=0;i<size;i++)
{
pass = rand()%size;
printf("%d", pass);
}
return (0);
}
