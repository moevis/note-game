//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_WELCOMESTATE_H
#define NOTE_GAME_WELCOMESTATE_H

#include "../State.h"
#include <string>
#include <vector>

class WelcomeState: public State {
public:
    void update(int64_t timeSinceLastFrame) override;

    void init() override;

    void onEnter() override;

    void onExit() override;

    void onPause() override;

    void onResume() override;

    void display() override;

    void onKeyboard(char keycode) override;

private:
    std::vector<std::vector<std::string>> logoGraph;
};


#endif //NOTE_GAME_WELCOMESTATE_H
