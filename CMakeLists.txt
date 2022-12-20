cmake_minimum_required(VERSION 3.24)
project(command)

set(CMAKE_CXX_STANDARD 17)

find_package( OpenGL REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} )

set(GLFW_INSTALL OFF)
set(GLFW_BUILD_DOCS OFF)
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
add_subdirectory(engine/ext/glfw)

add_executable(command main.cpp  )

target_sources(command PRIVATE
        engine/input/InputHandler.hpp
        engine/input/Key.hpp
        engine/input/Keyboard.hpp
        engine/windowing/Window.hpp
        engine/windowing/WindowHint.hpp

        engine/input/InputHandler.cpp
        engine/windowing/Window.cpp
        engine/windowing/WindowHintContext.cpp
        )

target_link_libraries( command ${OPENGL_LIBRARIES} glfw )
