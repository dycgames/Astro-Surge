#include "raylib.h"
#include "resource_dir.h"

int main()
{
	SetConfigFlags(FLAG_VSYNC_HINT);
	InitWindow(1024, 768, "Astro-Surge");

	SearchAndSetResourceDir("astro-resources");

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);
		DrawText(TextFormat("%i",GetFPS()), 8, 8, 24, WHITE);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}