#include <SDL.h>
#include <stdio.h>
#include "init.h"
#include "events.h"
#include "render.h"
#include "cleanup.h"

int rect_x = 800 / 2;
int rect_y = 600 / 2;


int main(int argc, char* argv[]) {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;


    if (!init(&window, &renderer)) {
        return 1;
    }

    

    int running = 1;
    while (running) {
        running = handle_events(&rect_x, &rect_y);
        render(renderer, rect_x, rect_y);
        
    }

    cleanup(window, renderer);

    return 0;
}