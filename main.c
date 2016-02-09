#include <stdio.h>
#include "SDL2/SDL.h"

/*https://www.youtube.com/watch?v=sht1i4qZCQU*/
int main(int argc, char* argv[]) {

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window* window = SDL_CreateWindow("mup", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
  if(window == NULL) {
    printf("Window creation error! %s\n", SDL_GetError());
  }
  SDL_UpdateWindowSurface(window);
  SDL_Delay(2000);

  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
}
