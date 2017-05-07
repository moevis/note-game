//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_STATE_H
#define NOTE_GAME_STATE_H


class State {
public:
    void init();
    void onEnter();
    void onExit();
    void onPause();
    void onResume();
    void display();
    void onKeyboard();
};


#endif //NOTE_GAME_STATE_H
