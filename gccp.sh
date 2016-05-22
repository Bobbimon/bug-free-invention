#/bin/sh

echo compiling C++ using -ansi -pedentic-errors -Wall
g++ -ansi -pedantic-errors -Wall $1 $2 $3
