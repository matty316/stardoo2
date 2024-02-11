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
void updatePlayer(struct Player *player);

#endif
