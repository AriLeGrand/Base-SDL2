#include "render.h"

const int RECT_WIDTH = 40;
const int RECT_HEIGHT = 40;

void render(SDL_Renderer* renderer, int rect_x, int rect_y) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_Rect rect = { rect_x, rect_y, RECT_WIDTH, RECT_HEIGHT };
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
}
