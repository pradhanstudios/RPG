#include "graphics/raylib.h"

int main()
{
    // setting window size
    const int screen_width = 1200;
    const int screen_height = 800;

    // init window
    InitWindow(screen_width, screen_height, "Title");

    // set fps
    SetTargetFPS(60);

    // game loop
    while (!WindowShouldClose())
    {
        // update

        // draw
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}