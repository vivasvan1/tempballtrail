#include "texture.h"
#include "stb_image.h"
#include <cassert>
#include <iostream>

Texture::Texture(const std::string& fileName){

    int width=0, height=0, numComponents;
    unsigned char* imageData = stbi_load(fileName.c_str(), &width, &height, &numComponents, 4);

    if (imageData ==NULL){
        std::cerr << "Texture loading failed for texture" << fileName << std::endl;    if (imageData ==NULL){    if (imageData ==NULL){
        std::cerr << "Texture loading failed for texture" << fileName << std::endl;
    }
    glGenTextures(1, &m_texture);
    glBindTexture(GL_TEXTURE_2D, m_texture);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);

    stbi_image_free(imageData);
        std::cerr << "Texture loading failed for texture" << fileName << std::endl;
    }
    glGenTextures(1, &m_texture);
    glBindTexture(GL_TEXTURE_2D, m_texture);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);

    stbi_image_free(imageData);
    }
    glGenTextures(1, &m_texture);
    glBindTexture(GL_TEXTURE_2D, m_texture);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);    if (imageData ==NULL){
        std::cerr << "Texture loading failed for texture" << fileName << std::endl;
    }
    glGenTextures(1, &m_texture);
    glBindTexture(GL_TEXTURE_2D, m_texture);


    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);

    stbi_image_free(imageData);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, imageData);

    stbi_image_free(imageData);


}

Texture::~Texture()
{
    glDeleteTextures(1, &m_texture);
}

void Texture::Bind(unsigned int unit)
{
    assert(unit >= 0 && unit <=31);

    glActiveTexture(GL_TEXTURE0 + unit);
    glBindTexture(GL_TEXTURE_2D, m_texture);
}
