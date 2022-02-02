// CMake Tutorial EP 4 | Versioning Source Code
// https://www.youtube.com/watch?v=K3bx7NYSXVk

#include <iostream>
#include <GLFW/glfw3.h>
#include "adder.h"
#include "ex4config.h"

int main(int argc, char * argv[])
{
    std::cout <<
        "CMake\n\n"
        "Episode 4\n\n"
        "Versioning Source Code\n\n";

    std::cout << "Number PI is " << add(1.05, 2.09) << "\n\n";

    std::cout << argv[0] << " Version: " << ex4_VERSION_MAJOR << "." << ex4_VERSION_MINOR << "\n";

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
