//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_STATEMANAGER_H
#define NOTE_GAME_STATEMANAGER_H

#include <vector>
#include "Singleton.h"
#include "State.h"

class StateManager: public Singleton<StateManager> {
public:
    void display();
    void pushState(State* state);
    void popState();
    void switchState(State *state);
    void update(int64_t timeSinceLastFrame);
    void updateInput(char c);
    bool isRunning = true;
private:
    std::vector<State *> states;
};


#endif //NOTE_GAME_STATEMANAGER_H
