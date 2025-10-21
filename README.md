#TriangleRad_Library - OpenSource

A simple, header-only C++ library for creating and managing rotating triangles in Raylib.
Created by RADHEES BALA | GitHub: Radhees_Engg

**Dependencies**

Raylib (raylib.h, raymath.h)

**Installation**

Download TriangleRad.hpp

Place it in your project directory

Include it in your code:

#include "TriangleRad.hpp"


**In your project properties:**

Go to C/C++ → General → Additional Include Directories

Add the path of your header file

**Constructor**
rad::triangleRad(Vector2 Position, float Size, float Angle, float Rotation_Speed, float Auto_Rotate_Speed)

**Controls**

Hold Middle Mouse Button to rotate counter-clockwise

**Functions**

std::array<Vector2, 3> GetVertices() const
Returns the three vertices of the triangle in world space:

[0] - Nose (front point)

[1] - Left base corner

[2] - Right base corner

**Contributing**

Contributions, issues, and feature requests are welcome!

If you use this library in your project, please:

Credit the author: RADHEES BALA

Link to the GitHub repository

Share your project — I’d love to see what you build!

**License**

Open source and free to use. Attribution appreciated!

Contact

LinkedIn - [https://www.linkedin.com/in/radhees-bala-2a08652b4/recent-activity/all/]
