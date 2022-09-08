#ifndef STORESHELF_H
#define STORESHELF_H
#include"MusicBox.h"
#include<string>
using namespace std;
class StoreShelf{
    private:
        int width;
        int curr_size;
        MusicBox *members;
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