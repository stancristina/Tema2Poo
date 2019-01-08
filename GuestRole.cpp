#include "GuestRole.hpp"

void GuestRole :: printRole()
{
    cout << "Guest Role";
}

GuestRole :: GuestRole(RoleType type) : Role(type)
{

}

