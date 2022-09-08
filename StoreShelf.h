#ifndef STORESHELF_H
#define STORESHELF_H
#include"MusicBox.h"
#include<string>
using namespace std;
class StoreShelf{
    private:
         MusicBox *boxes;
    int size; //max size
    int cur; //current size
    int n; //current number of music boxes
    public:
        StoreShelf();
        StoreShelf( int width);
        int get_width();
        int get_num_music_boxes(); 
        MusicBox *get_contents();
        bool add_music_box(MusicBox a_music_box);
        ~StoreShelf();
};
#endif