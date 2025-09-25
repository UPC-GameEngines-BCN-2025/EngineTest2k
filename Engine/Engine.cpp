#include "Engine.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
//#include <SDL3/SDL.h>
//#include <glad/glad.h>

using namespace std;

int main(int argc, char* argv[]) {
    // Initialize SDL with video subsystem
    //if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    //    std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
    //    return -1;
    //}

    //// Set OpenGL attributes before creating the window
    //SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3); // OpenGL version 3.x
    //SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    //SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    //// Create SDL window with OpenGL flag
    //SDL_Window* window = SDL_CreateWindow(
    //    "OpenGL with SDL3",
    //    800, 600,
    //    SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
    //);

    //if (!window) {
    //    std::cerr << "Failed to create SDL window: " << SDL_GetError() << std::endl;
    //    SDL_Quit();
    //    return -1;
    //}

    //// Create OpenGL context
    //SDL_GLContext glContext = SDL_GL_CreateContext(window);
    //if (!glContext) {
    //    std::cerr << "Failed to create OpenGL context: " << SDL_GetError() << std::endl;
    //    SDL_DestroyWindow(window);
    //    SDL_Quit();
    //    return -1;
    //}

    //// Load OpenGL functions with GLAD
    //if (!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)) {
    //    std::cerr << "Failed to initialize GLAD" << std::endl;
    //    SDL_GL_DestroyContext(glContext);
    //    SDL_DestroyWindow(window);
    //    SDL_Quit();
    //    return -1;
    //}

    //// Print some info
    //std::cout << "OpenGL Renderer: " << glGetString(GL_RENDERER) << std::endl;
    //std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;

    //// Main loop
    //bool running = true;
    //while (running) {
    //    SDL_Event event;
    //    while (SDL_PollEvent(&event)) {
    //        if (event.type == SDL_EVENT_QUIT) {
    //            running = false;
    //        }
    //    }

    //    // Clear screen
    //    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    //    glClear(GL_COLOR_BUFFER_BIT);

    //    // Swap buffers
    //    SDL_GL_SwapWindow(window);
    //}

    //// Cleanup
    //SDL_GL_DestroyContext(glContext);
    //SDL_DestroyWindow(window);
    //SDL_Quit();

    return 0;
}