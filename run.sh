#!/bin/bash
if [ -e "main" ]; then
    echo "Launch begins..."
    ./main
else
    echo "Starting compilation..."
    g++ main.cpp -o main
    echo "Launch begins..."
    ./main
fi
