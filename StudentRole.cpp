#include "StudentRole.hpp"

void StudentRole :: printRole ()
{
    cout << "Student Role";
}

StudentRole :: StudentRole(RoleType type) : Role(type)
{

}
