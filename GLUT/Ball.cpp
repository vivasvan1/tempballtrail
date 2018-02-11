#include <glm/glm.hpp>


class Ball
{
    public:
        Ball(glm::vec3 pos, glm::vec3 vel,float radius){
            this -> pos = pos;
            this -> vel = vel;

        }
        void Draw(Ball ball){
            
        }
    protected:
    private:
        glm::vec3 pos,vel;
        float gravity = 0.15;



};