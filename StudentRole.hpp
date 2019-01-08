#ifndef STUDENTROLE_HPP_INCLUDED
#define STUDENTROLE_HPP_INCLUDED

#include "Role.hpp"

class StudentRole : public Role
{
public:
    void printRole();
    StudentRole(RoleType type);
};


#endif // STUDENTROLE_HPP_INCLUDED
