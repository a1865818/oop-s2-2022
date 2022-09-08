#include"MusicBox.h"
MusicBox::MusicBox():songname("null"),width(0) {}
MusicBox::MusicBox(string songname, int width):songname(songname),width(width){}
string MusicBox::get_song(){
    return songname;
}
int MusicBox::get_width() {
    return width;
}
MusicBox::~MusicBox() {}