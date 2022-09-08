#include<iostream>
#include<string>
#include"StoreShelf.h"
int main () {
  MusicBox *m1,*m2,*m3;
  m1=new MusicBox();
  m2=new MusicBox("a",300);
  m3=new MusicBox("b",400);
  StoreShelf *storeshelf;
  storeshelf=new StoreShelf(5);
  cout<<storeshelf->get_width()<<endl;
// cout<<clinic->get_MusicBoxs()<<endl;
  cout<<storeshelf->get_num_music_boxes()<<endl;
  string _return;
  _return=storeshelf->add_music_box(*m1)?"successful":"full!";
  cout<<_return<<endl;
  _return=storeshelf->add_music_box(*m2)?"successful":"full!";
  cout<<_return<<endl;
  _return=storeshelf->add_music_box(*m3)?"successful":"full!";
  cout<<_return<<endl;
  MusicBox *MusicBoxs=storeshelf->get_contents();
  for (int i = 0; i < storeshelf->get_num_music_boxes(); i++) 
  {
    cout<<MusicBoxs[i].get_song()<<endl;
    cout<<MusicBoxs[i].get_width()<<endl;
  }
  delete storeshelf;
return 0;
}