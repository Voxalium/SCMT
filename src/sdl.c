#include <SDL.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    SDL_version nb;
    SDL_VERSION(&nb);

    printf("SDL : %d.%d.%d \n", nb.major, nb.minor, nb.patch);
    return 0;
}

//gcc src/sdl.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2