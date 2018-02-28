#ifndef SRC_GAMEMANAGER_H_
#define SRC_GAMEMANAGER_H_

class Graphics;

class GameManager
{
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);
public:
	GameManager();
	~GameManager();
};

#endif /* SRC_GAMEMANAGER_H_ */
