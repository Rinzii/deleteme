#include <iostream>
#include "Window.hpp"

Window::Window(int width, int height, const char *title, WindowHint hint, GLFWmonitor *monitor,
               GLFWwindow *share) {
    /* Init GLFW */
    if( !glfwInit() )
        exit( EXIT_FAILURE );

    WindowHintContext::setHint(hint);

    m_window = glfwCreateWindow(width, height, title, monitor, share);
    if (m_window == nullptr) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    glfwMakeContextCurrent(m_window);
}

Window::Window(int width, int height, const char *title, std::vector<WindowHint> hints, GLFWmonitor *monitor,
               GLFWwindow *share) {
    /* Init GLFW */
    if( !glfwInit() )
        exit( EXIT_FAILURE );

    WindowHintContext::setHint(hints);

    m_window = glfwCreateWindow(width, height, title, monitor, share);
    if (m_window == nullptr) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    glfwMakeContextCurrent(m_window);
}

Window::~Window() {
    glfwTerminate();
}

void Window::update() {
    io.handleInput();
}

void Window::render() {
    glfwSwapBuffers(m_window);
    glfwPollEvents();
}

bool Window::shouldClose() const {
    return glfwWindowShouldClose(m_window);
}








