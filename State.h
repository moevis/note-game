//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_STATE_H
#define NOTE_GAME_STATE_H


class State {
public:
    virtual void init();
    virtual void onEnter();
    virtual void onExit();
    virtual void onPause();
    virtual void onResume();
    virtual void update(int64_t timeSinceLastFrame);
    virtual void display();
    virtual void onKeyboard(char keycode);
};


#endif //NOTE_GAME_STATE_H
