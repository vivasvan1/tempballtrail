#ifndef BOX_H
#define BOX_H

#include <texture.h>
#include <mesh.h>

class Box
{
    public:
        Box(const float width,const float height,const float depth,const std::string& fileName);
        virtual ~Box();
//        Mesh floor("./res/plane.obj"),ceil("./res/plane.obj"),right("./res/plane.obj"),left("./res/plane.obj"),endWall("./res/plane.obj"),frontWall("./res/plane.obj");
        void Draw(Box box);

        inline void SetWidth(float boxWidth){ this -> width = boxWidth; }
        inline void SetHeight(float boxHeight){ this -> height = boxHeight; }
        inline void SetDepth(float boxDepth){ this ->depth = boxDepth; }

        inline float GetWidth(Box box){ return box.width; }
        inline float GetHeight(Box box){ return box.height; }
        inline float GetDepth(Box box){ return box.depth; }

    protected:

    private:

        float width,height,depth;
        Box(const Box& other);
        Box& operator=(const Box& other);
};

#endif // BOX_H
