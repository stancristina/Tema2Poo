#ifndef ACTIVITYREPOSITORY_HPP_INCLUDED
#define ACTIVITYREPOSITORY_HPP_INCLUDED

#include "Activity.hpp"
#include "Repository.hpp"

class ActivityRepository : public Repository<Activity>
{
public:
    vector<Activity*> findByOwner(Person* p);
    vector<Activity*> findByLocation(Room* r);
    Activity* findByDescription(string desc);
private:
};

#endif // ACTIVITYREPOSITORY_HPP_INCLUDED
