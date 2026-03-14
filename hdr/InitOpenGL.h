#ifndef INITOPENGL_H
#define INITOPENGL_H

#include <glad/glad.h>
#include <glfw3.h>
#include <iostream>

class InitOpenGL {
    public:
    InitOpenGL() = default;

    // Initalizes a window and the viewport
    GLFWwindow* Init();

    //allows for the viewport to resize correctly
    static void framebuffer_size_callback(GLFWwindow* window, int width, int height);

    //allows for input to have custom action
    static void processInput(GLFWwindow* window);

    //display a simple rgb triangle window
    int TestOpenGL();

    //display a simple rgb triangle window
    int TestOpenGL2();

    //display a simple rectangle with textures
    int TestOpenGL3Texture();

    //Prismo triangle for testing purpses
    static float verticesTriangle3FullPrismo[18];

    //rectangle for testing purpses
    static float rectangle[32];
    static unsigned int commonPoints[6];

};

#endif