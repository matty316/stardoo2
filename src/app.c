#include "app.h"

void initApp(struct App *app) {
    struct Player player;
    initPlayer(&player);
    app->player = player;
}

void freeApp(struct App *app) {
    freePlayer(&app->player);
    free(app);
    app = NULL;
}
