#include <iostream> 
#include "raylib.h"
#include "TriangleRad.hpp"

using namespace std;

int main()
{

	const int screen_width = 1000;
	const int screen_height = 800;

	Vector2 position = { screen_width / 2, screen_height / 2 };
	float size = 20.0f;
	float angle = 0.0f;
	float rotating_speed = 0.1f;
	Color color = SKYBLUE;

	InitWindow(screen_width, screen_height, "Trial");
	SetTargetFPS(60);

	rad::triangleRad myTriangle(position, size, angle, rotating_speed, 2.0f);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		position = { position.x, position.y };
		myTriangle.UpdateRotation();
		myTriangle.DrawTrianlgeRad(color);
		Vector2 mousePos = GetMousePosition();

		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			position.x -= (position.x - mousePos.x) * 0.15;
			position.y -= (position.y - mousePos.y) * 0.15;
			myTriangle.SetPosition(position);
		}


		EndDrawing();
	}
	CloseWindow();
}