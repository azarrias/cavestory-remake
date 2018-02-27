#ifndef SRC_GRAPHICS_H_
#define SRC_GRAPHICS_H_

struct SDL_Window;
struct SDL_Renderer;

class Graphics
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
public:
	Graphics();
	~Graphics();
};

#endif // SRC_GRAPHICS_H_
