# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c89 -I./include
LDFLAGS =

# Directories
SRC_DIR = src
INC_DIR = include
TEST_DIR = tests
EXAMPLE_DIR = examples
BUILD_DIR = build

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_FILES))

# Target executables
EXAMPLE = printfn_example
TEST = test_printfn

# Default target
all: $(EXAMPLE) $(TEST)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Compile source files to object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build example program
$(EXAMPLE): $(OBJ_FILES) $(EXAMPLE_DIR)/example.c
	$(CC) $(CFLAGS) $(EXAMPLE_DIR)/example.c $(OBJ_FILES) -o $(EXAMPLE) $(LDFLAGS)

# Build test program
$(TEST): $(OBJ_FILES) $(TEST_DIR)/test_printfn.c
	$(CC) $(CFLAGS) $(TEST_DIR)/test_printfn.c $(OBJ_FILES) -o $(TEST) $(LDFLAGS)

# Run the example
run: $(EXAMPLE)
	./$(EXAMPLE)

# Run tests
test: $(TEST)
	./$(TEST)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(EXAMPLE) $(TEST)

# Phony targets
.PHONY: all run test clean

# Help target
help:
	@echo "Available targets:"
	@echo "  all      - Build example and test programs (default)"
	@echo "  run      - Build and run the example program"
	@echo "  test     - Build and run the test program"
	@echo "  clean    - Remove all build artifacts"
	@echo "  help     - Show this help message"
