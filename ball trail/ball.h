#ifndef BALL_H
#define BALL_H

#include <string>
#include <glm/glm.hpp>


class Ball
{
    public:
        Ball(const std::string& fileName, int count);
        virtual ~Ball();

        void Update();

        inline int* GetBallNumber(){ return &Bnumber; }
        inline void SetBallNumber(int count){ this->Bnumber = count; }

        inline glm::vec3 GetPos(){ return pos; }
        inline glm::vec3 GetVelo(){ return velo; }
        inline glm::vec3 GetGravity(){ return gravity; }


        inline float SetPos(glm::vec3 pos){ this->pos = pos; }
        inline float SetVelo(glm::vec3 velo){this-> velo = velo; }
        inline float SetGravity(glm::vec3 gravity){this-> gravity = gravity; }


    protected:

    private:
        int Bnumber;
        glm::vec3 pos;
        glm::vec3 velo;
        glm::vec3 gravity = glm::vec3(0.0,-0.010,0);
        Ball(const Ball& other);
        Ball& operator=(const Ball& other);
};

#endif // BALL_H
