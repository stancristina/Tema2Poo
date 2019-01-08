#ifndef ADMINISTRATIVEROLE_HPP_INCLUDED
#define ADMINISTRATIVEROLE_HPP_INCLUDED

#include "Role.hpp"


class AdministrativeRole : public Role
{
public:
    void printRole();
    AdministrativeRole(RoleType type);
};

#endif // ADMINISTRATIVEROLE_HPP_INCLUDED
