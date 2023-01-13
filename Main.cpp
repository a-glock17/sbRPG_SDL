#include <stdio.h>
#include <SDL.h>

// entrypoint
int main(int argc, char* argv[])
{
	// declares window pointer
	SDL_Window *window;


	// init SDL2
	SDL_Init(SDL_INIT_VIDEO);

	// draws window 
	window = SDL_CreateWindow("SDL2 Test Window", 60,60, 480, 480, SDL_WINDOW_RESIZABLE);

	// if window can't be drawn
	if (window == NULL)
	{
		printf("Failed to initalize window: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Delay(4500);
	SDL_DestroyWindow(window);
	SDL_Quit();
	
	return 0;
}