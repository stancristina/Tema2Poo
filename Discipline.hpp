#ifndef DISCIPLINE_HPP_INCLUDED
#define DISCIPLINE_HPP_INCLUDED

#include "Activity.hpp"
#include "Person.hpp"
#include <vector>
#include <string>


class Discipline {
public:
    Discipline(string name);
    string getName();
    void setName(string name);
    vector<Activity*> getActivities();
    vector<Person*> getPersons();
    void addActivity(Activity* activity);
    void addParticipant(Person* person);
    friend ostream& operator<<(ostream &out, Discipline &ob);
private:
    string mName;
    vector<Activity*> mActivities;
    vector<Person*> mPersons;
};

#endif // DISCIPLINE_HPP_INCLUDED
