#!/bin/bash

# Check if the source file exists
SOURCE_FILE="simple_calculator.cpp"
if [ ! -f "$SOURCE_FILE" ]; then
    echo "Error: $SOURCE_FILE not found!"
    exit 1
fi

# Compile the C++ code
g++ -o output_program "$SOURCE_FILE"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the compiled program
./output_program
