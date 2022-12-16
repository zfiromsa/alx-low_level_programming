#include <stdio.h>
/**
 *
 *
 */

int main(void)
{
int factor, i, g;
printf("go");
g = 613;
factor =0;
for (i = 0; i < g; i++)
{
if ((g % i) == 0)
{
printf("go1");
factor = i;
printf("go2");
}
}
printf("go3");
printf("%d", factor);
printf("go4");
return (0);
}
