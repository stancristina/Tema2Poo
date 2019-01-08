#include "DisciplineRepository.hpp"


Discipline :: Discipline(string name) {
    this->mName = name;
}

string Discipline::getName() {
    return mName;
}

vector<Activity*> Discipline :: getActivities() {
    return mActivities;
}

vector<Person*> Discipline :: getPersons() {
    return mPersons;
}

void Discipline :: setName(string name) {
    this->mName = name;
}

void Discipline :: addActivity(Activity* activity) {
    this->mActivities.push_back(activity);
}

void Discipline :: addParticipant(Person* person) {
    this->mPersons.push_back(person);
}

ostream& operator<<(ostream &out, Discipline &ob)
{
    out << "Name: " << ob.mName << '\n';
    out << "Activities: " << '\n';
    for(int i = 0; i < ob.mActivities.size(); i++)
    {
        out << *(ob.mActivities[i]) << '\n';
    }
    out << "Attendees: " << '\n';
    for(int i = 0; i < ob.mPersons.size(); i++)
    {
        out << *(ob.mPersons[i]) << '\n';
    }
    out << '\n';
    return out;
}
