#include "events.h"
#include <SDL.h>

int handle_events(int* rect_x, int* rect_y) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            return 0;
        }
        else if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
            case SDLK_UP:
                *rect_y -= 10;
                break;
            case SDLK_DOWN:
                *rect_y += 10;
                break;
            case SDLK_LEFT:
                *rect_x -= 10;
                break;
            case SDLK_RIGHT:
                *rect_x += 10;
                break;
            }
        }
    }
    return 1;
}
