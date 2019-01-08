#include "Repository.hpp"
using namespace std;

template<class T>
void Repository<T>::add(T* ob)
{
    mEntities.push_back(ob);
}

template<class T>
void Repository<T>::remove(T* ob)
{
    for(unsigned int i = 0; i < mEntities.size(); i++)
        if(mEntities[i] == ob)
            mEntities.erase(mEntities.begin()+i);
}

template<class T>
int Repository<T>::size()
{
    return mEntities.size();
}

template<class T>
T* Repository<T>::operator[](int index)
{
    return mEntities[index];
}
