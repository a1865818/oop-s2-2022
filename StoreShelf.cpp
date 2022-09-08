#include<string>
#include<iostream>
#include"StoreShelf.h"
using namespace std;
StoreShelf::StoreShelf(): max_width(0),
    members(NULL){
   

}
StoreShelf::StoreShelf(int width):max_width(width){
    
    members=new MusicBox[width];
}
int StoreShelf::get_num_music_boxes(){
    return curr_size;
}
int StoreShelf::get_width() {
  return width;
}
// string StoreShelf::get_name() {
//     return name;
// }
MusicBox* StoreShelf::get_contents(){
    return members;
}
bool StoreShelf::add_music_box(MusicBox a_music_box){
    if (curr_size < max_width)
  {
    members[curr_size] = a_music_box;
    curr_size++;
    return true;
  }
  return false;
}
StoreShelf::~StoreShelf()
{
    if (members != NULL) delete[] members;
}
