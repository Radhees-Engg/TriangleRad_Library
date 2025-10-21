//Rotate_Triangle_in_Raylib
// Created By RADHEES BALA
// GitHub -> Radhees_Engg

//DEPENDENCIES:
// -> raylib.h

//Description
// Example 
// rad::triangleRad(Vector2 Position, float Size, float Angle, float Rotation_Speed, float Auto_Rotate_Speed)
// Position -> initial Position of the triangle 
// Size -> size of the triangle
// Angle -> initial angle of rotation
// Rotation_Speed -> Triangle rotating speed
// Auto_Rotate_Speed -> Triangle rotating speed for automatic rotation

// by using the funtions which is give you can change the values like size, position etc  

// An Example code will be given for your Reference 

// Open to everyone, if you're going to use this in your project please tell the user to check my GitHub page

// About 
// - UpdateRotation()           : Call every frame to update rotation
// - DrawTrianlgeRad(Color)     : Draw the triangle
// - SetPosition(Vector2)       : Change position
// - SetSize(float)             : Change size
// - SetRotationSpeed(float)    : Change manual rotation speed
// - SetAutoRotationSpeed(float): Change auto rotation speed

//*************************************************************************************************************************
#include <iostream> 
#include <raylib.h>
#include <raymath.h>
#include <array> 

#ifndef TriangleRad_HPP
#define TriangleRad_HPP

namespace rad
{
	class triangleRad
	{
	private:
		Vector2 pos;
		float size;
		float angle;
		float rotation_speed;
		float auto_rotation;
		
	public:
		triangleRad(Vector2 Position, float Size, float Angle, float Rotation_Speed, float Auto_Rotate_Speed)
		{
			pos = Position;
			size = Size;
			angle = Angle;
			rotation_speed = Rotation_Speed;
			auto_rotation = Auto_Rotate_Speed;
		}

		void UpdateRotation()
		{
			if (IsMouseButtonDown(MOUSE_BUTTON_MIDDLE)) 
			{
				angle -= rotation_speed;
			}
		}

		std::array<Vector2, 3> GetVertices() const
		{
			Vector2 nose = (Vector2Add(pos, Vector2Rotate({ size, 0 }, angle)));
			Vector2 left = (Vector2Add(pos, Vector2Rotate({ -size * 0.3f,-size * 0.6f }, angle)));
			Vector2 right = (Vector2Add(pos, Vector2Rotate({ -size * 0.3f, size * 0.6f }, angle)));
			return { nose, left, right };
		}

		void SetSize(float s)
		{
			size = s;
		}
		void SetPosition(Vector2 p)
		{
			pos = p;
		}
		void SetRotationSpeed(float rs)
		{
			rotation_speed = rs;
		}
		void SetAutoRotation(float ar)
		{
			auto_rotation = ar;
			angle += auto_rotation * GetFrameTime()*2;
		}
		float GetAngle() const {
			return angle;
		}

		void DrawTrianlgeRad(Color color)
		{
			auto vertices = GetVertices();
			DrawTriangle(vertices[0], vertices[1], vertices[2], color);
		}
	};
}

#endif //TriangleRad_HPP 