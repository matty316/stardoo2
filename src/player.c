#include "player.h"

void initPlayer(struct Player *player) {
    player->x = 0.0;
    player->y = 0.0;
    player->health = 0.0;
    player->energy = 0.0;
}

void freePlayer(struct Player *player) {
    free(player);
    player = NULL;
}
