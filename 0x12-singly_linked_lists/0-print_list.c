#include "lists.h"

size_t print_list(const list_t *h)
{
size_t ret;

ret = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("%lu %s\n", h->len, h->str);
}
h = h->next;
ret++;
}
return (ret);
}
