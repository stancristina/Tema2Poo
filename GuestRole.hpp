#ifndef GUESTROLE_HPP_INCLUDED
#define GUESTROLE_HPP_INCLUDED

#include "Role.hpp"

class GuestRole : public Role
{
public:
    void printRole();
    GuestRole(RoleType type);
};

#endif // GUESTROLE_HPP_INCLUDED
