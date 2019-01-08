#include "Room.hpp"

Room :: Room (string name)
{
    this -> mName = name;
}

void Room :: setName(string name)
{
    this ->mName = name;
}

string Room :: getName()
{
    return mName;
}

ostream& operator<<(ostream &out, Room &ob)
{
    cout << ob.mName;
}
