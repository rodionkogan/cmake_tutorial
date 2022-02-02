// CMake Tutorial EP 3 | Git Submodules (adding glfw windowing library example)
// https://www.youtube.com/watch?v=ED-WUk440qc

#include <iostream>
#include <GLFW/glfw3.h>
#include "adder.h"

int main()
{
    std::cout <<
        "CMake\n\n"
        "Episode 3\n\n"
        "Git Submodules (adding glfw windowing library example)\n\n";

    std::cout << "Number PI is " << add(1.05, 2.09) << "\n\n";

    GLFWwindow * window;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}
