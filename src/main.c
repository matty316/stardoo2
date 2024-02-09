#include "common.h"

#define WIDTH 1280
#define HEIGHT 800

int main(int argc, char *argv[]) {
    InitWindow(WIDTH, HEIGHT, "stardoo");

    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
