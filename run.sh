#!/bin/bash
#To rebuild, change to true
devmode=false
#--------------------------

SOURCE="${BASH_SOURCE[0]}"
while [ -L "$SOURCE" ]; do
    DIR="$(cd -P "$( dirname "$SOURCE" )" && pwd)"
    SOURCE="$(readlink "$SOURCE")"
    [[ $SOURCE != /* ]] && SOURCE="$DIR/$SOURCE"
done
SCRIPT_DIR="$(cd -P "$( dirname "$SOURCE" )" && pwd)"
cd "$SCRIPT_DIR" || exit 1

if [ -e "main" ]; then
    if ! $devmode; then
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
