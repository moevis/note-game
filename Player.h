//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_PLAYER_H
#define NOTE_GAME_PLAYER_H

#include <string>
#include <vector>

class Player {
    int col;
    int row;
    float speed;
    float gravity;

//    int status;
    void jump();
    void loadGraph();
    void display();
    std::vector<std::vector<std::string>> runningGraph;

    enum status {
        GROUND,
        AIR
    };
};


#endif //NOTE_GAME_PLAYER_H
