#include "ActivityRepository.hpp"

vector<Activity*> ActivityRepository::findByOwner(Person* p)
{
    vector<Activity*> toReturn;
    for (int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getOwner() == p)
            toReturn.push_back(mEntities[i]);
    return toReturn;
}

vector<Activity*> ActivityRepository::findByLocation(Room* r)
{
    vector<Activity*> toReturn;
    for (int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getLocation() == r)
            toReturn.push_back(mEntities[i]);
    return toReturn;
}

Activity* ActivityRepository::findByDescription(string desc)
{
    for (int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getDescription() == desc)
            return mEntities[i];
    return NULL;
}
