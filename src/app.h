#ifndef app_h
#define app_h

#include "common.h"
#include "player.h"

struct App {
    struct Player player;
};

void initApp(struct App *app);
void loop(struct App *app);

#endif
