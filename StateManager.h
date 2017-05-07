//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_STATEMANAGER_H
#define NOTE_GAME_STATEMANAGER_H

#include <vector>
#include "Singleton.h"

Class State;

class StateManager: public Singleton<StateManager> {
public:
    void display(int time);
    void pushState(State* state);
private:
    std::vector<State *> states;
};


#endif //NOTE_GAME_STATEMANAGER_H
