//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_TIMER_H
#define NOTE_GAME_TIMER_H

#include <chrono>

class Timer
{
public:
    Timer(): begin(std::chrono::high_resolution_clock::now()) {};
    ~Timer() {};

    template <typename Duration=std::chrono::milliseconds>
    int64_t elapsed()
    {
        auto lastBegin = begin;
        begin = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<Duration>(begin - lastBegin).count();
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> begin;
};

#endif //NOTE_GAME_TIMER_H
