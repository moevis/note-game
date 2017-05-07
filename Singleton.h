//
// Created by wolfman on 17-5-7.
//

#ifndef NOTE_GAME_SINGLETON_H
#define NOTE_GAME_SINGLETON_H

template<typename T>
class Singleton
{
public:
    static T& instance()
    {
        static T t;
        return t;
    }

protected:
    Singleton() {}
    Singleton( const Singleton& s );
    T operator = ( const Singleton& s );
};

#endif //NOTE_GAME_SINGLETON_H
