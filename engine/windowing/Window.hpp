//
// Created by Ian on 12/20/2022.
//

#pragma once
#include <memory>
#include "GLFW/glfw3.h"
#include "../input/InputHandler.hpp"
#include "WindowHintContext.hpp"

class Window {
public:

    Window(int width, int height,
           const char* title = "Default Window",
           WindowHint hint = WindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3),
           GLFWmonitor* monitor = nullptr,
           GLFWwindow* share = nullptr);
    Window(int width, int height, const char *title, std::vector<WindowHint> hints, GLFWmonitor *monitor,
           GLFWwindow *share);
    ~Window();

    void update();
    void render();

    [[nodiscard]] bool shouldClose() const;


private:
    GLFWwindow* m_window{};
    InputHandler io{};

};
