#include <stdio.h>
#include <stdlib.h>

// int cent(int i, int rem);
int main(int argc, char* argv[])
{
    if (argc != 1)
    {
        printf("Error\n");
        return (1);
    }
    else if (argv[1] < 0)
    {
        printf("0\n");
    }
    else
    {
        int g, k, r;
        
        g = atoi(argv[1]);
        // k = cent(g, r);
        r = 0;
        printf("%d", k);
    }
    return (0);
}

// int cent(int i, int rem);
// {
//     r = 0
//     if (i >= 100)
//     {
//        r = r + (i % 100);
//        cent(r, r);
//     }
// }