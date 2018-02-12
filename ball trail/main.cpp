#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "display.h"
#include "shader.h"
#include "mesh.h"
#include "texture.h"
#include "transform.h"
#include "camera.h"
#include "ball.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define WIDTH 800
#define HEIGHT 600

using namespace std;


int main()
{
    Display display(800,600,"Hello World");

    Vertex vertices[] = { Vertex(glm::vec3(-0.5,-0.5,0),glm::vec2(0,0)),
                          Vertex(glm::vec3(0,0.5,0),glm::vec2(0.5,1.0)),
                          Vertex(glm::vec3(0.5,-0.5,0),glm::vec2(1.0,0))
                          };

    unsigned int indices[] = {0, 1, 2 };
    Mesh mesh2("./res/monkey3.obj");
    //Mesh mesh3("./res/monkey3.obj");
    Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]),indices, sizeof(indices)/sizeof(indices[0]));
    Shader shader("./res/basicShader");
    Texture texture("./res/bricks.jpg");
    Camera camera(glm::vec3(0,0,-5),70.0f,(float)WIDTH/(float)HEIGHT,0.01f,1000.0f);
    Transform transform;
    Ball ball("./res/untitled.obj",1);
    float counter = 0.0f;

    while(!display.IsClosed()){

        display.Clear(0.0f, 0.15f,0.3f, 1.0f);

        float sinfcounter = sinf(counter);
        float cosfcounter = cosf(counter);

//        transform.GetPos().x = sinfcounter*5;
//        transform.GetPos().x = ball.GetPos().x;
//        transform.GetPos().y = ball.GetPos().y;
//        transform.GetPos().z = ball.GetPos().z;
//        transform.GetRot().x = ;
//        transform.GetRot().y = 5 * sinfcounter;
//        transform.GetRot().z = counter;
//        transform.GetScale().y = sinf(counter);
//        transform.GetScale().x = sinf(counter);
        shader.Bind();
        glm::mat4 model1;
        float angle = 20.0f * counter;
        model1 = glm::rotate(model1, glm::radians(angle), glm::vec3(1.0f, 0.3f, 0.5f));
        mesh2.Draw(shader.m_program,model1);
        mesh.Draw(shader.m_program,glm::mat4());
        shader.Update(transform,camera);

//        mesh.Draw();
        ball.Update();

        //mesh3.Draw();


        texture.Bind(0);
        display.Update();
        counter += 0.01f;
        }

    return 0;
}
