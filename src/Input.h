#ifndef SRC_INPUT_H_
#define SRC_INPUT_H_

#include <SDL2/SDL.h>
#include <map>

class Input
{
private:
	std::map<SDL_Scancode, bool> _heldKeys;
	std::map<SDL_Scancode, bool> _pressedKeys;
	std::map<SDL_Scancode, bool> _releasedKeys;
public:
	void beginNewFrame();
	void keyUpEvent(const SDL_Event& event);
	void keyDownEvent(const SDL_Event& event);
	bool wasKeyPressed(SDL_Scancode key);
	bool wasKeyReleased(SDL_Scancode key);
	bool isKeyHeld(SDL_Scancode key);
};

#endif /* SRC_INPUT_H_ */
