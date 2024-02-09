#ifndef player_h
#define player_h

#include "common.h"

struct Player {
    double x;
    double y;
    double health;
    double energy;
};

void initPlayer(struct Player *player);
void freePlayer(struct Player *player);

#endif
