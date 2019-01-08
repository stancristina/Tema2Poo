#ifndef DISCIPLINEREPOSITORY_HPP_INCLUDED
#define DISCIPLINEREPOSITORY_HPP_INCLUDED

#include "Discipline.hpp"
#include "Repository.hpp"


class DisciplineRepository : public Repository<Discipline>
{
public:
   Discipline* searchByName(string name);
};


#endif // DISCIPLINEREPOSITORY_HPP_INCLUDED
