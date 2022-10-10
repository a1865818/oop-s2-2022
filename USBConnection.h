#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include<iostream>
#include<stack>
using namespace std;
class USBConnection{
    private:
        int id=0;
        static stack<int> s;
        USBConnection();
    public:
        static USBConnection* CreateUsbConnection();
        int get_id();
        ~USBConnection();
};
#endif