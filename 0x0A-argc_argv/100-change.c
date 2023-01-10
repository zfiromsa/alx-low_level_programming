#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
int i;

i = argc - 1;
printf("%s", argv[i]);
return (0);
}