#include <stdio.h>

void debug_print(char *fmt)
{
    char tmp[256]={0};
    sprintf(tmp, "Debug:%s", fmt);
    printf("%s\n", tmp);
}
