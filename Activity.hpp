#ifndef ACTIVITY_HPP_INCLUDED
#define ACTIVITY_HPP_INCLUDED
#include "Person.hpp"
#include "Room.hpp"
using namespace std;
class Activity
{
protected:
    Room* mLocation;
    Person* mOwner;
    string mDescription;
    //vector<Person*> mAttendees;
public:
    Activity(string mDescription, Room* mLocation, Person* mOwner);
    void setDescription(string description);
    void setLocation(Room* location);
    void setOwner(Person* owner);
    string getDescription();
    Room* getLocation();
    Person* getOwner();
    friend ostream& operator<<(ostream &out, Activity &ob);
};


#endif // ACTIVITY_HPP_INCLUDED

