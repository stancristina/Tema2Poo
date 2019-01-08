#include <iostream>
#include <fstream>
#include "Person.hpp"
#include <string.h>
#include "Role.hpp"
using namespace std;

void Person :: setCNP(string CNP)
{
    this ->mCNP = CNP;
}
void Person :: setFirstName(string firstName)
{
    this ->mFirstName = firstName;
}
void Person :: setLastName(string lastName)
{
    this ->mLastName = lastName;
}

void Person :: setEmail(string email)
{
    this ->mEmail = email;
}

vector<Role*> Person :: getRoles()
{
    return mRoles;
}

void Person :: addRole(Role* role)
{
    this->mRoles.push_back(role);
}

string Person :: getCNP()
{
    return mCNP;
}

string Person :: getFirstName()
{
    return mFirstName;
}

string Person :: getLastName()
{
    return mLastName;
}

string Person :: getEmail()
{
    return mEmail;
}

Person::Person (string CNP, string firstName, string lastName, string email)
{
    this -> mCNP = CNP;
    this -> mFirstName = firstName;
    this -> mLastName = lastName;
    this -> mEmail = email;
}


ostream& operator<<(ostream &out, Person &ob)
{
    out << ob.mCNP << " " << ob.mFirstName << " " << ob.mLastName << " " << ob.mEmail << " ";
    for(int i = 0; i < ob.mRoles.size(); ++i) {
        (ob.mRoles[i]) -> printRole();
        cout << " ";
    }
    return out;
}
