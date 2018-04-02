#include <stdio.h>
#include "hello.h"
#include "debug.h"

int main(int argc, char *argv[])
{
    print("hello world");
    debug_print("hello,world!\n");
    print("hello world");

    printf("add the version!\n");

    return 0;
}
