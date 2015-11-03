#include "game.h"

int main(int argc, char* args[])
{

	Game game;

	game.init("videojocs I", 100, 100, 800, 600, false);

	while (game.isRunning() == true) {
		game.handleEvents();
		game.update();
		game.render();
	}

	game.clean();

	return false;
};