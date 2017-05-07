//
// Created by wolfman on 17-5-7.
//

#include "WelcomeState.h"
#include "../Config.h"
#include <ncurses.h>

void WelcomeState::init() {
    std::vector<std::string> graphFiles = Config::instance().node["graph"]["welcome"]["logo"].as<std::vector<std::string>>();
    for (const std::string & filePath: graphFiles) {
        logoGraph.push_back(Config::instance().loadGraph(filePath));
    }
}

void WelcomeState::onEnter() {
    init();
}

void WelcomeState::onExit() {
    State::onExit();
}

void WelcomeState::onPause() {
    State::onPause();
}

void WelcomeState::onResume() {
    State::onResume();
}

void WelcomeState::display() {
    State::display();
}

void WelcomeState::onKeyboard(char keycode) {
    State::onKeyboard(0);
}

void WelcomeState::update(int64_t timeSinceLastFrame) {
    State::update(timeSinceLastFrame);
}
