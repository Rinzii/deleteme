#include <iostream>
#include <glfw/glfw3.h>
#include "engine/input/InputHandler.hpp"
#include "engine/windowing/Window.hpp"

int main() {

    Window window(800, 600, "Test Window");


    // main loop
    while (!window.shouldClose()) {
        // handle input
        window.update();
        // render
        window.render();
    }

    return 0;
}
