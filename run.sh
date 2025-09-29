#!/bin/bash
if [ -e "main" ]; then
    if cmp -s main.cpp _main.cpp; then
        echo "Launch begins..."
        ./main
    else
        echo "Starting recompilation..."
        rm -f main
        rm -f _main.cpp
        cp main.cpp _main.cpp
        g++ main.cpp -o main
        echo "Launch begins..."
        ./main
    fi
else
    echo "Starting compilation..."
    g++ main.cpp -o main
    echo "Launch begins..."
    ./main
fi
