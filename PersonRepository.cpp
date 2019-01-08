#include "PersonRepository.hpp"
#include <vector>

Person* PersonRepository :: findByFullName(string mFirstName, string mLastName)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getFirstName() == mFirstName && mEntities[i]->getLastName() == mLastName)
            return mEntities[i];
    }
    return NULL;
}

Person* PersonRepository :: findByCNP(string CNP)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getCNP() == CNP)
            return mEntities[i];
    }
    return NULL;
}

Person* PersonRepository :: findByEmail(string email)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getEmail() == email)
            return mEntities[i];
    }
    return NULL;
}

void PersonRepository :: removeByFullName(string firstName, string lastName)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getFirstName() == firstName && mEntities[i]->getLastName() == lastName)
            mEntities.erase(mEntities.begin() + i);
    }
}

void PersonRepository :: removeByCNP(string CNP)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getCNP() == CNP)
            mEntities.erase(mEntities.begin() + i);
    }
}

void PersonRepository :: removeByEmail(string email)
{
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getEmail() == email)
            mEntities.erase(mEntities.begin() + i);
    }
}


vector <Person*> PersonRepository :: findByRole(Role::RoleType r)
{
    vector <Person*> toReturn;
    for(int i = 0; i < mEntities.size(); i++)
    {
        for(int j = 0; j < mEntities[i]->getRoles().size(); j++)
        {
            if((mEntities[i]->getRoles()[j])->getRole() == r)
            {
                toReturn.push_back(mEntities[i]);
                continue;
            }
        }
    }
    return toReturn;
}


