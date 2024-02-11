#include "common.h"
#include "app.h"

#define WIDTH 1280
#define HEIGHT 800

int main(int argc, char *argv[]) {
    InitWindow(WIDTH, HEIGHT, "stardoo");

    SetTargetFPS(60);

    struct App app;
    initApp(&app);

    loop(&app);

    CloseWindow();
    return 0;
}
