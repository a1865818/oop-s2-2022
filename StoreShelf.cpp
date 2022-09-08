#include "StoreShelf.h"

StoreShelf::StoreShelf() {
    size = 0;
    n = 0;
    cur = 0;
}

StoreShelf::StoreShelf(int width) {
    size = width;
    n = 0;
    cur = 0;
    boxes = new MusicBox[size * 2];
}

int StoreShelf::get_width() { return size; }

int StoreShelf::get_num_music_boxes() { return n; }

MusicBox *StoreShelf::get_contents() { return boxes; }

bool StoreShelf::add_music_box(MusicBox a_music_box) {
    int t = a_music_box.get_width();
    if (cur + t > size) return false;
    boxes[n] = a_music_box;
    n++;
    cur += t;
    return true;
}

StoreShelf::~StoreShelf() { 
    delete[] boxes; 
}