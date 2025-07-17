#include "GameControl.h"

int Larg = 92;
int Alt = 52;

void GameControl::Controlador()
{
	InitWindow(Larg *10, Alt *10, "MazeRush");
	

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(GRAY);
		EndDrawing();
	}
	CloseWindow();
}
