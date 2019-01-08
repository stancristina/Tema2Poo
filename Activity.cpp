#include <iostream>
#include <string.h>
#include "Activity.hpp"
#include "Room.hpp"
#include "Person.hpp"
void Activity :: setDescription(string description)
{
    this -> mDescription = description;
}

void Activity :: setLocation(Room* location)
{
    this -> mLocation = location;
}

void Activity :: setOwner(Person* owner)
{
    this -> mOwner = owner;
}

string Activity :: getDescription()
{
    return mDescription;
}
Room* Activity :: getLocation()
{
    return mLocation;
}
Person* Activity :: getOwner()
{
    return mOwner;
}

/*vector<Person*>  Activity :: getAttendees()
{
    return mAttendees;
}*/

/*void Activity :: addAttendee(Person* person)
{
    mAttendees.push_back(person);
}*/

Activity :: Activity(string description, Room* location, Person* owner)
{
    this -> mDescription = description;
    this -> mLocation = location;
    this -> mOwner = owner;
}

ostream& operator<<(ostream &out, Activity &ob)
{
    out << "Description: " << ob.mDescription << '\n';
    out << "Owner: " << *(ob.mOwner) << '\n';
    out << "Location: " << *(ob.mLocation) << '\n';
    /*out << "Attendees: " << '\n';
    for (int i = 0; i < ob.mAttendees.size(); i++)
    {
        out << ob.mAttendees[i] << '\n';
    }
    out << '\n';*/
    return out;
}
