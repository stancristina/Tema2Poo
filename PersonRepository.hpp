#ifndef PERSONREPOSITORY_HPP_INCLUDED
#define PERSONREPOSITORY_HPP_INCLUDED
#include "Person.hpp"
#include <vector>
#include "Repository.hpp"

class PersonRepository : public Repository<Person>
{
public:
    Person* findByFullName(string mFirstName, string mLastName);
    Person* findByCNP(string mCNP);
    Person* findByEmail(string mEmail);
    vector <Person*> findByRole(Role::RoleType r);
    void removeByFullName(string mFirstName, string mLastName);
    void removeByCNP(string CNP);
    void removeByEmail(string email);
private:
};
#endif // PERSONREPOSITORY_HPP_INCLUDED
