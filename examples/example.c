#include "printfn.h"

/**
 * main - Entry point for the example program
 *
 * Return: 0 on success
 */
int main(void)
{
    int count;

    printfn("Hello, World!\n");
    printfn("Testing integer: %d\n", 42);
    printfn("Testing string: %s\n", "Hello from printfn");
    printfn("Testing character: %c\n", 'A');
    printfn("Testing multiple: %d %s %c\n", 100, "test", 'X');
    printfn("Testing %%: 100%% complete\n");
    
    count = printfn("Counting characters: %d\n", 12345);
    printfn("Previous line printed %d characters\n", count);

    return 0;
}
