
#ifndef SHADER_H
#define SHADER_H


#include <camera.h>
#include <string>
#include <transform.h>
#include <GL/glew.h>

class Shader
{
    public:
        GLuint m_program;

        static const unsigned int NUM_SHADERS = 2;
        Shader(const std::string& fileName);
        void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);

        std::string LoadShader(const std::string& fileName);

        GLuint CreateShader(const std::string& text,GLenum shaderType);

        void Update(const Transform& transform,const Camera& camera);

        void Bind();
        virtual ~Shader();

    protected:


    private:

        static const unsigned int NUM_SHADER = 2;
        Shader(const Shader& other){}
        Shader& operator=(const Shader& other){}

        enum{
            TRANSFORM_U,
            NUM_UNIFORMS

        };
        GLuint m_shaders[NUM_SHADERS];
        GLuint m_uniforms[NUM_UNIFORMS];
};

#endif // SHADER_H
