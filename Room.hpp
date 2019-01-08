#ifndef ROOM_HPP_INCLUDED
#define ROOM_HPP_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Room
{
private:
    string mName;
public:
    Room(string name);
    void setName(string name);
    string getName();
    friend ostream& operator<<(ostream &out, Room &ob);
};

#endif // ROOM_HPP_INCLUDED

