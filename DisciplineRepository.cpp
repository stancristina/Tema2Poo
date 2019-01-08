#include "DisciplineRepository.hpp"

Discipline* DisciplineRepository :: searchByName(string name) {
    for(int i = 0; i < mEntities.size(); i++)
    {
        if(mEntities[i]->getName() == name)
        {
            return mEntities[i];
        }
    }
    return NULL;
}
