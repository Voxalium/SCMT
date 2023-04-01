#include <SDL.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    SDL_Window *win = NULL;
    SDL_version nb;
    SDL_VERSION(&nb);

    printf("SDL : %d.%d.%d \n", nb.major, nb.minor, nb.patch);

    win = SDL_CreateWindow("SCMT",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);
    SDL_Delay(3000);
    SDL_DestroyWindow(win);
    SDL_Quit();
    
    return 0;

}

//gcc src/sdl.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2