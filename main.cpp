#include <iostream>
#include <ncurses.h>
#include "Config.h"
#include "StateManager.h"
#include "State/WelcomeState.h"
#include "Timer.h"

void init() {
    initscr();
}

void destory() {
    endwin();
}

int main() {
    init();
    Timer timer;
    auto stateManager = StateManager::instance();
    stateManager.pushState(new WelcomeState);
    while (stateManager.isRunning) {
        int64_t timeSinceLastFrame = timer.elapsed();
        stateManager.update(timeSinceLastFrame);
        stateManager.display();
    }
    destory();
    return 0;
}