// CMake Tutorial EP 1 | Understanding The Basics
// https://www.youtube.com/watch?v=nlKcXPUJGwA

#include <iostream>

int main()
{
    std::cout << "Hello World!!!\n";
}

/*
Step 1. Create simple main.cpp file as follows:
    touch main.cpp
Step 2. Create simple CMakeLists.txt file as follows:
    touch CMakeLists.txt
Step 3. Create out/build directory as follows:
    mkdir -p out/build/
Step 4. Go to out/build directory as follows:
    cd out/build/
Step 5. Run CMake from out/build directory as follows:
    cmake -S ../../ -B .
Step 6. Create .gitignore file as follows:
    touch .gitignore
Step 7. Add to .gitignore file following line:
    out/
Step 8. Create initial commit
Step 9. Run Makefile from out/build directory as follows:
    make
Step 10. Run app from out/build directory as follows:
    ./ex1
*/