//
// Created by Ian on 12/20/2022.
//

#include <iostream>
#include "InputHandler.hpp"

InputHandler::InputHandler() = default;

void InputHandler::handleInput() {
    if (Keyboard::isKeyPressed(Key::ESCAPE)) {
        std::cout << "Escape is pressed." << std::endl;
    }
}




