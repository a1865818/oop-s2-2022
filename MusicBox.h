#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include<string>
using namespace std;
class MusicBox {
    private:
        string songname;
        int width;
    public: 
        MusicBox();
        MusicBox(string songname, int width);
        string get_song();
        int get_width();
        ~MusicBox();
};
#endif