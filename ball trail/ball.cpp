#include "ball.h"
#include "mesh.h"
#include <iostream>
#include <string>
#include <stdlib.h>

Ball::Ball(const std::string& fileName, int count)
{
    Mesh mesh2(fileName);
    SetBallNumber(count);

    SetPos(glm::vec3(0,5,0));
    SetVelo(glm::vec3(0,-0.1,0));

/* --------------------RANDOM VELO AND POS -----------------*/
//    SetPos(glm::vec3((((rand()%2000)-1000)*0.0001),(((rand()%2000)-1000)*0.0001),(((rand()%2000)-1000)*0.0001)));
//    SetVelo(glm::vec3((((rand()%2000)-1000)*0.0001),(((rand()%2000)-1000)*0.0001),(((rand()%2000)-1000)*0.0001)));



//    std::cout<<GetPos().x<<GetPos().y<<GetPos().z<<std::endl;



}

void Ball::Update()
{
    if(GetPos().y < -6){
        SetVelo(glm::vec3(GetVelo().x,(-1)*GetVelo().y,GetVelo().z));
        SetPos(GetVelo() + GetPos());
    }
    else{
        SetVelo(GetGravity() + GetVelo());
        SetPos(GetVelo() + GetPos());
    }
//    std::cout<<GetPos().x<<GetPos().y<<GetPos().z<<std::endl;
//    std::cout<<GetVelo().x<<" y-> "<<GetVelo().y<<" z-> "<<GetVelo().z<<std::endl;
}

Ball::~Ball()
{
    //dtor
}
