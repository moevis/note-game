//
// Created by wolfman on 17-5-7.
//

#include <cstdint>
#include "StateManager.h"
#include "State.h"

void StateManager::display() {
    if (states.size() > 0) {
        states.back()->display();
    }
}

void StateManager::pushState(State * state) {
    if (states.size() > 0) {
        states.back()->onPause();
    }
    states.push_back(state);
    states.back()->onEnter();
}

void StateManager::popState() {
    states.back()->onExit();
    State * tmp = states.back();
    delete tmp;
    states.pop_back();
    if (states.size() > 0) {
        states.back()->onResume();
    } else {
        isRunning = false;
    }
}

void StateManager::switchState(State *state) {
    states.back()->onExit();
    State * tmp = states.back();
    delete tmp;
    states.pop_back();
    states.push_back(state);
    state->onEnter();
}

void StateManager::update(int64_t timeSinceLastFrame) {
    if (states.size() > 0) {
        states.back()->update(timeSinceLastFrame);
    }
}

void StateManager::updateInput(char c) {
    if (states.size() > 0) {
        states.back()->onKeyboard(0);
    }
}
