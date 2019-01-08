#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include "Role.hpp"
using namespace std;

class Person
{
protected:
    string mCNP;
    string mFirstName;
    string mLastName;
    string mEmail;
    vector<Role*> mRoles;
public:
    void setCNP(string CNP);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    vector<Role*> getRoles();
    void addRole(Role* role);
    string getCNP();
    string getFirstName();
    string getLastName();
    string getEmail();
    Person(string CNP, string firstName, string lastName, string email);
    ~Person();
    friend ostream& operator<<(ostream &out, Person &ob);
};
#endif  //PERSON_HPP_INCLUDED
