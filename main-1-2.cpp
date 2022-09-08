#include<iostream>
#include<string>
#include"StoreShelf.h"
int main () {
//   MusicBox *m1,*m2,*m3;
//   m1=new MusicBox();
//   m2=new MusicBox("a",300);
//   m3=new MusicBox("b",400);
//   StoreShelf *storeshelf;
//   storeshelf=new StoreShelf(2);
//   cout<<storeshelf->get_width()<<endl;
// // cout<<clinic->get_MusicBoxs()<<endl;
//   cout<<storeshelf->get_num_music_boxes()<<endl;
//   string _return;
//   _return=storeshelf->add_music_box(*m1)?"successful":"full!";
//   cout<<_return<<endl;
//   _return=storeshelf->add_music_box(*m2)?"successful":"full!";
//   cout<<_return<<endl;
//   _return=storeshelf->add_music_box(*m3)?"successful":"full!";
//   cout<<_return<<endl;
//   cout<<storeshelf->get_num_music_boxes()<<endl;
//   MusicBox *MusicBoxs=storeshelf->get_contents();
//   for (int i = 0; i < storeshelf->get_num_music_boxes(); i++) 
//   {
//     cout<<MusicBoxs[i].get_song()<<endl;
//     cout<<MusicBoxs[i].get_width()<<endl;
//   }
//   delete storeshelf;
MusicBox a("a",10);
MusicBox b("b",50);
MusicBox c("c",40);
MusicBox d("d",20);
MusicBox e("e",30);
MusicBox f("f",10);
StoreShelf storeshelf(5);
 cout<<storeshelf.get_width() <<endl;
 cout<<storeshelf.get_num_music_boxes()<<endl;
 if (storeshelf.add_music_box(a)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 if (storeshelf.add_music_box(b)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 if (storeshelf.add_music_box(c)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 if (storeshelf.add_music_box(d)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 if (storeshelf.add_music_box(e)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 if (storeshelf.add_music_box(f)){
  cout<<"Music added"<<endl;
  cout<<storeshelf.get_num_music_boxes()<<endl;
 }else{cout<<"Shelf is full"<<endl;}
 
return 0;
}











