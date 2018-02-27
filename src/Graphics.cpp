#include <SDL2/SDL.h>
#include "Globals.h"
#include "Graphics.h"

Graphics::Graphics()
{
	SDL_CreateWindowAndRenderer(SCREEN_WIDTH, SCREEN_HEIGHT, 0, &window, &renderer);
	SDL_SetWindowTitle(window, WINDOW_TITLE);
}

Graphics::~Graphics()
{
	SDL_DestroyWindow(window);
}
