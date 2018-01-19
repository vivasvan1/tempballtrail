#include "shader.h"

static void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string errorMessage);
static std::string LoadShader(const std:string& fileName);

Shader::Shader(const std::string &fileName)
{

}

Shader::~Shader()
{
    //dtor
}

static std::string LoadShader(const std::string& fileName){
    std:ifstream file;
    file.open((fileName).c_str());

    std::string output;
    std::string line;

    if(file.is_open()){
        while (file.good()){
            getline(file, line)
            output.append(line + '\n');
        }
    }
    else{
        std::cerr << "Unable to load Shader" << fileName << std::endl;
    }
    return output;

}

static void CheckShaderError(GLuint shader,GLuint flag,bool isProgram, const std::string& errorMessage){
    GLint success = 0;
    GLint error[1024] = { 0 };

    if(isProgram)
        glGetProgramiv(shader, sizeof(error), NULL, error);
    else
        glGetShaderInfoLog(shader, sizeof(error),NULL, error);

    std::cout << errorMessage << ": '"<<error<<"'"<<std::endl;
}
