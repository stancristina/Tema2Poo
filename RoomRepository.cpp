#include "RoomRepository.hpp"

Room* RoomRepository :: findByName(string name)
{
    for (int i = 0; i < mEntities.size(); ++i)
    {
        if(mEntities[i]->getName() == name)
        {
            return mEntities[i];
        }
    }
    return NULL;
}
