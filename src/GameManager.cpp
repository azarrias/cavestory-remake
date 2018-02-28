#include <SDL2/SDL.h>
#include "GameManager.h"
#include "Graphics.h"
#include "Input.h"

namespace
{
	const int FPS = 50;
	const int MAX_FRAME_TIME = 1000 / FPS;
}

GameManager::GameManager()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	gameLoop();
}

GameManager::~GameManager()
{

}

void GameManager::gameLoop()
{
	Graphics graphics;
	Input input;
	SDL_Event event;

	int lastUpdateTimeMs = SDL_GetTicks();

	while (true)
	{
		input.beginNewFrame();

		if (SDL_PollEvent(&event))
		{
			if(event.type == SDL_KEYDOWN)
			{
				if(event.key.repeat == 0)
				{
					input.keyDownEvent(event);
				}
			}
			else if (event.type == SDL_KEYUP)
			{
				input.keyUpEvent(event);
			}
			else if(event.type == SDL_QUIT)
			{
				return;
			}
		}
		if (input.wasKeyPressed(SDL_SCANCODE_ESCAPE))
		{
			return;
		}

		const int currentTimeMs = SDL_GetTicks();
		int elapsedTimeMs = currentTimeMs - lastUpdateTimeMs;
		update(std::min(elapsedTimeMs, MAX_FRAME_TIME));
		lastUpdateTimeMs = currentTimeMs;
	}
}

void GameManager::draw(Graphics &graphics)
{

}

void GameManager::update(float elapsedTime)
{

}
