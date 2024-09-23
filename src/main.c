#include "raylib.h"
#include "resource_dir.h"
#include "helper.h"


#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 764
#define BOX_AREA_SIZE 8192


void InitGame(void);
void UpdateGame(void);
void RenderGame(void);
void UnloadGame(void);


int main()
{
	SetConfigFlags(FLAG_VSYNC_HINT);
	InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Astro-Surge");
	InitGame();

	while (!WindowShouldClose())
	{
		UpdateGame();
		BeginDrawing();

		ClearBackground(BLACK);
		DrawText(TextFormat("%i",GetFPS()),8,8,20,WHITE);
		RenderGame();
		
		EndDrawing();
	}
	
	UnloadGame();
	return 0;
}


void InitGame(void)
{
	SearchAndSetResourceDir("astro-resources");
}

void UpdateGame(void)
{
	
}

void RenderGame(void)
{
	
}

void UnloadGame(void)
{
	
}