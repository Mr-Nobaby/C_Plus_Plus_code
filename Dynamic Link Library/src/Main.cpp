#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit()) // Initialize GLFW
    {
        std::cerr << "Failed to initialize GLFW!" << std::endl;
        return -1;
    }
    std::cout << "GLFW initialized successfully!" << std::endl;
    glfwTerminate(); // Clean up GLFW
    return 0;
}
