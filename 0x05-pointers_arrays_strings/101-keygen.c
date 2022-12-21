#include <stdlib.h>
#include <time.h>

#define size 10

int main(void)
{
srand(time(NULL)); // randomize seed

for(i=0;i<size;i++)
{
pass = rand()%size;
printf("%d", pass);
}
return (0);
}
