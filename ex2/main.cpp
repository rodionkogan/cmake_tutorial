// CMake Tutorial EP 2 | Libraries and Subdirectories
// https://www.youtube.com/watch?v=kEGQKzhciKc

#include <iostream>

#include "adder.h"

int main()
{
    std::cout <<
        "CMake\n\n"
        "Episode 2\n\n"
        "-Multiple files\n"
        "-Libraries\n"
        "-Subfolders\n\n";

    std::cout << "Number PI is " << add(1.05, 2.09) << "\n\n";
}
