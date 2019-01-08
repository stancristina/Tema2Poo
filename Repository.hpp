#ifndef REPOSITORY_HPP_INCLUDED
#define REPOSITORY_HPP_INCLUDED

#include <vector>
using namespace std;

template<class T>

class Repository
{
 public:
    void add(T* ob);
    void remove(T* ob);
    int size();
    T* operator[](int index);
protected:
    vector<T*> mEntities;
};


#endif // REPOSITORY_HPP_INCLUDED
