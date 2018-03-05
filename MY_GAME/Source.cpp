#include "SDL\include\SDL.h"
#pragma comment(lib,"SDL/x86/SDL2.lib")
#pragma comment(lib,"SDL/x86/SDL2main.lib")
#include<cstdio>
#include<iostream>


using namespace std;



int main(int argc, char*argv[]) {

	SDL_Window*window = SDL_CreateWindow("GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, SDL_WINDOW_OPENGL);
	if (window == nullptr) {
		printf("Can not create the window: %s", SDL_GetError());
		SDL_Quit();
		return 0;
	}
	SDL_Renderer*render = SDL_CreateRenderer(window,-1,0);
	if (render == nullptr) {
		SDL_DestroyWindow(window);
		cout << "SDL_CreateRender Error" << SDL_GetError() << endl;
		SDL_Quit();  //used to clean all sdl subsystems
		return 0;
	}


	SDL_SetRenderDrawColor(render, 0, 0, 150, 255);
	SDL_RenderClear(render);
	//clear previus render

	SDL_RenderPresent(render);
	
	while (1) {
		//paint blue screen
		SDL_SetRenderDrawColor(render, 202, 196, 176, 255);
		SDL_RenderClear(render);

		
		

		SDL_Rect shooter;
		shooter.x = 100;
		shooter.y = 100;
		shooter.w = 70;
		shooter.h = 15;

		//render the shooter color
		SDL_SetRenderDrawColor(render, 0, 0, 90, 255);
		SDL_RenderFillRect(render, &shooter);
		//show what was drawn
		SDL_RenderPresent(render);
		SDL_RenderClear(render);

	}


	


	system("pause");
	return 0;
}