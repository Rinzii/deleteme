#include "WindowHintContext.hpp"
#include <cstdarg>

WindowHintContext::WindowHintContext() {
    glfwDefaultWindowHints();
}

void WindowHintContext::setHint(WindowHint hint, ...) {
    va_list args;
    va_start(args, hint);
    glfwWindowHint(hint.getHint(), hint.getValue());
    va_end(args);

}

void WindowHintContext::setHint(const std::vector<WindowHint>& hint) {
    for (auto &i : hint) {
        glfwWindowHint(i.getHint(), i.getValue());
    }

}

