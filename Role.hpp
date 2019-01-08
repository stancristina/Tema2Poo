#ifndef ROLE_HPP_INCLUDED
#define ROLE_HPP_INCLUDED
#include <iostream>
using namespace std;

class Role
{
public:
    enum RoleType {
        STUDENT_ROLE = 1,
        TEACHER_ROLE,
        GUEST_ROLE,
        ADMINISTRATIVE_ROLE
    };
    Role(RoleType type);
    RoleType getRole();
    virtual void printRole() = 0;
protected:
    RoleType mType;
};
#endif  ROLE_HPP_INCLUDED

