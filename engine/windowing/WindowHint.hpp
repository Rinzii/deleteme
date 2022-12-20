//
// Created by Ian on 12/20/2022.
//

#pragma once

#include <GLFW/glfw3.h>
#include <vector>

class WindowHint {
public:
    WindowHint(int hint, int value) {
        m_hint = hint;
        m_value = value;
    }

    [[nodiscard]] int getHint() const {
        return m_hint;
    }

    [[nodiscard]] int getValue() const {
        return m_value;
    }



private:
    int m_hint;
    int m_value;

};
