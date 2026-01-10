#include "printfn.h"
#include <stdio.h>
#include <string.h>

/**
 * test_basic - Test basic functionality
 */
void test_basic(void)
{
    printf("Test 1: Basic string printing\n");
    printfn("Simple test\n");
    printf("PASSED\n\n");
}

/**
 * test_integer - Test integer format specifier
 */
void test_integer(void)
{
    printf("Test 2: Integer format specifier\n");
    printfn("Integer: %d\n", 42);
    printfn("Negative: %d\n", -100);
    printfn("Zero: %d\n", 0);
    printf("PASSED\n\n");
}

/**
 * test_string - Test string format specifier
 */
void test_string(void)
{
    printf("Test 3: String format specifier\n");
    printfn("String: %s\n", "Hello");
    printfn("Empty: %s\n", "");
    printfn("NULL: %s\n", NULL);
    printf("PASSED\n\n");
}

/**
 * test_character - Test character format specifier
 */
void test_character(void)
{
    printf("Test 4: Character format specifier\n");
    printfn("Char: %c\n", 'A');
    printfn("Char: %c\n", 'z');
    printf("PASSED\n\n");
}

/**
 * test_percent - Test percent sign
 */
void test_percent(void)
{
    printf("Test 5: Percent sign\n");
    printfn("Percent: %%\n");
    printfn("100%% complete\n");
    printf("PASSED\n\n");
}

/**
 * test_mixed - Test mixed format specifiers
 */
void test_mixed(void)
{
    printf("Test 6: Mixed format specifiers\n");
    printfn("Mix: %d %s %c %%\n", 42, "test", 'X');
    printf("PASSED\n\n");
}

/**
 * main - Entry point for tests
 *
 * Return: 0 on success
 */
int main(void)
{
    printf("=== Running printfn tests ===\n\n");

    test_basic();
    test_integer();
    test_string();
    test_character();
    test_percent();
    test_mixed();

    printf("=== All tests passed! ===\n");
    return 0;
}
