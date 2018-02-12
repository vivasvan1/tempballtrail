#include "mesh.h"
#include <vector>
#include "obj_loader.h"
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


Mesh::Mesh(const std::string& fileName){

     IndexedModel model = OBJModel(fileName).ToIndexedModel();

     InitMesh(model);


}


Mesh::Mesh(Vertex* vertices, unsigned int numVertices, unsigned int* indices, unsigned int numIndices){

    IndexedModel model;

    for(unsigned int i =0; i < numVertices;i++){

       model.positions.push_back(*vertices[i].GetPos());
       model.texCoords.push_back(*vertices[i].GetTexCoord());//m_drawCount = numVertices;
       model.normals.push_back(*vertices[i].GetNormal());//m_drawCount = numVertices;
    }

    for(unsigned int i =0;i<numIndices;i++)
        model.indices.push_back(indices[i]);

    InitMesh(model);
//    m_drawCount = numIndices;

//    glGenVertexArrays(1,&m_vertexArrayObject);
//    glBindVertexArray(m_vertexArrayObject);
//
//    std::vector<glm::vec3> positions;
//    std::vector<glm::vec2> texCoords;
//
//    positions.reserve(numVertices);
//    texCoords.reserve(numVertices);
//
//    for(unsigned int i =0; i < numVertices;i++){
//
//        positions.push_back(* vertices[i].GetPos());
//        texCoords.push_back(* vertices[i].GetTexCoord());
//    }
//
//    glGenBuffers(NUM_BUFFERS,m_vertexArrayBuffers);
//    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[POSITION_VB]);
//    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(positions[0]),&positions[0],GL_STATIC_DRAW);
//
//    glEnableVertexAttribArray(0);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
//
//    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[TEXCOORD_VB]);
//    glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(texCoords[0]),&texCoords[0],GL_STATIC_DRAW);
//
//    glEnableVertexAttribArray(1);
//    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);
//
//    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_vertexArrayBuffers[INDEX_VB]);
//    glBufferData(GL_ELEMENT_ARRAY_BUFFER, numIndices * sizeof(indices[0]),&indices[0],GL_STATIC_DRAW);
//
//    glBindVertexArray(0);

}

void Mesh::InitMesh(const IndexedModel& model){

    m_drawCount = model.indices.size();

    glGenVertexArrays(1,&m_vertexArrayObject);
    glBindVertexArray(m_vertexArrayObject);

    glGenBuffers(NUM_BUFFERS,m_vertexArrayBuffers);
    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.positions[0]),&model.positions[0],GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[TEXCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.positions.size() * sizeof(model.texCoords[0]),&model.texCoords[0],GL_STATIC_DRAW);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 0, 0);

    /* ----------- NORMALS -------------------  */


    glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffers[NORMAL_VB]);
    glBufferData(GL_ARRAY_BUFFER, model.normals.size() * sizeof(model.normals[0]),&model.normals[0],GL_STATIC_DRAW);

    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_vertexArrayBuffers[INDEX_VB]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, model.indices.size() * sizeof(model.indices[0]),&model.indices[0],GL_STATIC_DRAW);

    glBindVertexArray(0);

}

Mesh::~Mesh(){
    glDeleteVertexArrays(1,&m_vertexArrayObject);
}

void Mesh::Draw(GLuint m_program,glm::mat4 trans){

    glBindVertexArray(m_vertexArrayObject);

    //glDrawArrays(GL_TRIANGLES, 0, m_drawCount);
    //trans = glm::translate(trans, glm::vec3(0.0f, 0.0f, 0.0f));
    GLuint transformLoc = glGetUniformLocation(m_program,"transform");
    glUniformMatrix4fv(transformLoc, 1, GL_FALSE, &trans[0][0]);
    glDrawElements(GL_TRIANGLES, m_drawCount, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);

}
