#include 

class Display{

public: 
    Display(const float width ,const float height);
    void processInput(GLFWwindow *window);
    void framebuffer_size_callback(GLFWwindow* window, int width, int height);
protected:

private:
    float width;
    float height;
    

};