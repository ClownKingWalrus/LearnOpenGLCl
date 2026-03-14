#ifndef STB_IMAGE_IMP_H
#define STB_IMAGE_IMP_H

#include <glad/glad.h>

class StbImageImp {
public:
    static unsigned int buildTexture(const char* imagePath);
};

#endif