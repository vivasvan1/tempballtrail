#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shader.h"
#include "mesh.h"
#include "texture.h"
#include "transform.h"
#include "camera.h"
#include "ball.h"

#define WIDTH 800
#define HEIGHT 600

using namespace std;

int main()
{
    Display display(800,600,"Hello World");

//    Vertex vertices[] = { Vertex(glm::vec3(-0.5,-0.5,0),glm::vec2(0,0)),
//                          Vertex(glm::vec3(0,0.5,0),glm::vec2(0.5,1.0)),
//                          Vertex(glm::vec3(0.5,-0.5,0),glm::vec2(1.0,0))
//                          };

//    unsigned int indices[] = {0, 1, 2 };
    Mesh mesh2("./res/untitled.obj");
//    Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]),indices, sizeof(indices)/sizeof(indices[0]));
    Shader shader("./res/basicShader");
    Texture texture("./res/bricks.jpg");
    Camera camera(glm::vec3(0,0,-15),70.0f,(float)WIDTH/(float)HEIGHT,0.01f,1000.0f);
    Transform transform;
    Ball ball("./res/untitled.obj",1
    );

    float counter = 0.0f;

    while(!display.IsClosed()){

        display.Clear(0.0f, 0.15f,0.3f, 1.0f);

        float sinfcounter = sinf(counter);
        float cosfcounter = cosf(counter);

//        transform.GetPos().x = sinfcounter*5;
        transform.GetPos().x = ball.GetPos().x;
        transform.GetPos().y = ball.GetPos().y;
        transform.GetPos().z = ball.GetPos().z;
//        transform.GetRot().x = ;
//        transform.GetRot().y = 5 * sinfcounter;
//        transform.GetRot().z = counter;
//        transform.GetScale().y = sinf(counter);
//        transform.GetScale().x = sinf(counter);

        shader.Bind();
        shader.Update(transform,camera);

//        mesh.Draw();
        ball.Update();

        mesh2.Draw();
        texture.Bind(0);
        display.Update();
        counter += 0.01f;
        }

    return 0;
}
