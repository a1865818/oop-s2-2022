#include<iostream>
#include<string>
using namespace std;

class Publication {
    protected:
        string title;
        string author;
        int year;
    public:
    //2 ways of using class
        Publication(string title, string author, int year ):title(title), author(author), year(year) {
            // this->author = author;
            // this->title =title;
            // this->year = year;
        }
        Publication():Publication("No title","No author",0){}
        void print() {
            cout<<"Title: "<<this->title<<endl;
            cout<<"Author: "<<this->author<<endl;
            cout<<"Year: "<<this->year<<endl;
        }
};

class Book: public Publication{
    private:
        string publisher;
        int num_pages;
        int ISBN;
    public:
        Book(string title, string author, int year,string publisher,int pages ,int ISBN):Publication(title,author,year),num_pages(pages)
        ,ISBN(ISBN),publisher(publisher){}
        Book(): Book("No title","No author",0,"",0,0){}
        void print() {
            Publication::print();
            cout<<"Publisher: "<<this->publisher<<endl;
            cout<<"Pages: "<<this->num_pages<<endl;
            cout<<"ISBn: "<<this->ISBN<<endl;
        }
};

int main() {
    Book b("OOP","feras",2022,"Uni Ade",500,1234);
    b.print();
    return 0;
}