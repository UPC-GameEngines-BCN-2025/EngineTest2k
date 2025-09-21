# CMakeList.txt : CMake project for Engine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)          # request C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # require it
set(CMAKE_CXX_EXTENSIONS OFF)       # optional: disable compiler-specific extensions



project (Engine)

find_package(glm CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (Engine "Engine.cpp" "Engine.h")


target_link_libraries(Engine PRIVATE glm::glm)

# TODO: Add tests and install targets if needed.
