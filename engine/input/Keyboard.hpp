//
// Created by Ian on 12/20/2022.
//

#pragma once

#include "Key.hpp"
#include "GLFW/glfw3.h"

class Keyboard {
public:
    Keyboard() = delete;

    static bool isKeyPressed(Key key)
    {
        return glfwGetKey(glfwGetCurrentContext(), static_cast<int>(key)) == GLFW_PRESS;
    }
};
