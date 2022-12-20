#pragma once

#include "WindowHint.hpp"

class WindowHintContext {
public:
    WindowHintContext();

    static void setHint(WindowHint hint, ...);
    static void setHint(const std::vector<WindowHint>& hint);


};
