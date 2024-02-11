#include "app.h"

void processInput(struct App *app);
void update(struct App *app);
void render(struct App *app);

#define SPEED 2.0f

void initApp(struct App *app) {
    struct Player player;
    initPlayer(&player);
    app->player = player;
}

void loop(struct App *app) {
    while (!WindowShouldClose()) {
        processInput(app);
        update(app);
        render(app);
    }
}

void processInput(struct App *app) {
    if (IsKeyDown(KEY_RIGHT)) app->player.x += SPEED;
    if (IsKeyDown(KEY_LEFT)) app->player.x -= SPEED;
    if (IsKeyDown(KEY_UP)) app->player.y -= SPEED;
    if (IsKeyDown(KEY_DOWN)) app->player.y += SPEED;
}

void update(struct App *app) {

}

void render(struct App *app) {
    BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(app->player.x, app->player.y, 50, 50, RED);
    EndDrawing();
}

