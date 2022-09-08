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
MusicBox m1("a",10);
MusicBox m2("b",50);
MusicBox m3("c",40);
MusicBox m4("d",20);
MusicBox m5("e",30);
MusicBox m6("f",10);
StoreShelf storeshelf(5);
 cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m1) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m2) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m3) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m4) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m5) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;

  cout << boolalpha << storeshelf.add_music_box(m6) << endl;

  cout << storeshelf.get_num_music_boxes() << endl;


  cout << endl;
  // cout << "piano in orchestra : " << boolalpha
  //      << storeshelf.has_instrument("piano") << endl;

  // cout << "violin in storeshelf : " << boolalpha
  //      << storeshelf.has_instrument("violin") << endl;

  MusicBox *members = storeshelf.get_contents();

  cout << "Musician's Instrument and their Experience in storeshelf : " << endl;

  for (int i = 0; i < storeshelf.get_num_music_boxes(); i++)

    cout << members[i].get_song() << " " << members[i].get_width()
         << endl;
return 0;
}