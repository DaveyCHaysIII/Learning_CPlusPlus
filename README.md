# Learning_CPlusPlus

Projects include a .hpp and several .cpp, and are modeled loosely off how Atlas projects build upon each other
Every project should have a Make file (or a CMAKE file)

Every file should conform to CLANG standard format.
clang-format -i <file>

For visualizations we will use the Raylib static library

Raylib File flags:
g++ -L/usr/local/lib/libraylib.a -lraylib -lGL -lGLU -lm -lpthread -ldl -lrt -lX11

Regular Flags:
g++ -Wall -Werror -pedantic -g3 --std=c++17


