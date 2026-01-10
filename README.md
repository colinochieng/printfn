# printfn

Implementation of a custom printf-like function in C. This project demonstrates a standard C project structure with proper organization, build system, and testing.

## Project Structure

```
printfn/
├── include/          # Header files
│   └── printfn.h    # Main header file
├── src/             # Source files
│   └── printfn.c    # Implementation of printfn
├── examples/        # Example programs
│   └── example.c    # Demo usage of printfn
├── tests/           # Test files
│   └── test_printfn.c  # Unit tests
├── build/           # Build artifacts (generated)
├── Makefile         # Build configuration
└── README.md        # This file
```

## Features

The `printfn` function is a simplified printf-like function that supports:
- `%d` - Integer formatting
- `%s` - String formatting
- `%c` - Character formatting
- `%%` - Literal percent sign

## Building the Project

### Prerequisites
- GCC compiler
- Make utility

### Build Commands

```bash
# Build all targets (example and test programs)
make

# Build and run the example program
make run

# Build and run tests
make test

# Clean build artifacts
make clean

# Show available commands
make help
```

## Usage Example

```c
#include "printfn.h"

int main(void)
{
    printfn("Hello, %s!\n", "World");
    printfn("The answer is %d\n", 42);
    printfn("Character: %c\n", 'A');
    return 0;
}
```

## Running the Example

```bash
make run
```

Expected output:
```
Hello, World!
Testing integer: 42
Testing string: Hello from printfn
Testing character: A
Testing multiple: 100 test X
Testing %: 100% complete
Counting characters: 12345
Previous line printed 29 characters
```

## Running Tests

```bash
make test
```

This will compile and run the test suite to verify the functionality of printfn.

## Compilation Details

The project uses the following compiler flags:
- `-Wall` - Enable all warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors
- `-pedantic` - Strict ISO C compliance
- `-std=c89` - Use C89 standard

## License

This project is provided as-is for educational purposes.
