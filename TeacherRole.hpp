#ifndef TEACHERROLE_HPP_INCLUDED
#define TEACHERROLE_HPP_INCLUDED

#include "Role.hpp"

class TeacherRole : public Role
{
public:
    void printRole();
    TeacherRole(RoleType type);
};

#endif // TEACHERROLE_HPP_INCLUDED
