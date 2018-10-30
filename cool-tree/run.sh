#!/bin/bash
if [ "$2" == "-c" ]; then
    echo -en "\033[1;33m"
elif [ "$2" == "-b" ]; then
    echo -en "\033[1;33m\033[1;40m"
fi
echo "-------COMPILE--------------------------"

if gcc $1.c -o $1 -lncurses; then
    if [ "$2" == "-c" ]; then
        echo -en "\033[1;34m"
    elif [ "$2" == "-b" ]; then
        echo -en "\033[1;34m\033[1;40m"
    fi
    echo "-------RUN------------------------------"
    ./$1
    if [ "$2" == "-c" ]; then
        echo -en "\033[1;32m"
    elif [ "$2" == "-b" ]; then
        echo -en "\033[1;32m\033[1;40m"
    fi
    echo "-------END------------------------------"
else
    if [ "$2" == "-c" ]; then
        echo -en "\033[1;31m"
    elif [ "$2" == "-b" ]; then
        echo -en "\033[1;31m\033[1;40m"
    fi
    echo "-------ERROR------------------------------"    
fi