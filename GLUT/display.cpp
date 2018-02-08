#include "display.h"

#include <iostream>
#include <GL/glut.h>
#include <GLFW/glfw3.h>

Display::Display(float width, float height){

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(800,600,"PAPA",NULL,NULL);
    if (window == NULL){
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    glViewport(0, 0, 800, 600);  
    framebuffer_size_callback(window,800,600);  

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); 
    

    while(!glfwWindowShouldClose(window))
{
    processInput(window);

    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();    
}

glfwTerminate();
}


void Display::framebuffer_size_callback(GLFWwindow* window, int width, int height)
    {
    glViewport(0, 0, width, height);
    }

void Display::processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}