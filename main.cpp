#include <iostream>
#include <fstream>

#include "Room.hpp"
#include "Repository.hpp"
#include "Repository.cpp"
#include "RoomRepository.hpp"
#include "Person.hpp"
#include "Role.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "AdministrativeRole.hpp"
#include "GuestRole.hpp"
#include "PersonRepository.hpp"
#include "Activity.hpp"
#include "ActivityRepository.hpp"
#include "Discipline.hpp"
#include "DisciplineRepository.hpp"

void command1(RoomRepository &roomRepository)
{
    cout << "Insert room name:" << '\n';
    string roomName;
    cin >> roomName;
    Room* room = new Room(roomName);
    roomRepository.add(room);
}

void command2(RoomRepository roomRepository)
{
    cout << "Rooms: " << '\n';
    for(int i = 0; i < roomRepository.size(); ++i)
    {
        cout << *roomRepository[i] << '\n';
    }
    cout << '\n';
}

void command3(PersonRepository &personRepository)
{
    cout << "Insert person first name, last name, email, cnp:" << '\n';
    string firstName;
    string lastName;
    string email;
    string cnp;
    cin >> firstName >> lastName >> email >> cnp;
    Person *person = new Person(cnp, firstName, lastName, email);

    cout << "Insert number of roles: " << '\n';
    int numberOfRoles;
    cin >> numberOfRoles;

    StudentRole *ob1;
    TeacherRole *ob2;
    GuestRole *ob3;
    AdministrativeRole *ob4;
    for(int i = 0; i < numberOfRoles; i++)
    {
        cout << "Insert role code: (1 - Student, 2 - Teacher, 3 - Guest, 4 - Administrative)" << '\n';
        int roleCode;
        cin >> roleCode;
        switch(roleCode)
        {
        case Role::STUDENT_ROLE:
            ob1 = new StudentRole(Role::STUDENT_ROLE);
            person->addRole(ob1);
            break;
        case Role::TEACHER_ROLE:
            ob2 = new TeacherRole(Role::TEACHER_ROLE);
            person->addRole(ob2);
            break;
        case Role::GUEST_ROLE:
            ob3 = new GuestRole(Role::GUEST_ROLE);
            person->addRole(ob3);
            break;
        case Role::ADMINISTRATIVE_ROLE:
            ob4 = new AdministrativeRole(Role::ADMINISTRATIVE_ROLE);
            person->addRole(ob4);
            break;
        }
    }


    personRepository.add(person);
}

void command4(PersonRepository personRepository)
{
    cout << "Persons: " << '\n';
    for(int i = 0; i < personRepository.size(); ++i)
    {
        cout << *personRepository[i] << '\n';
    }
    cout << '\n';
}

void command5(RoomRepository roomRepository, PersonRepository personRepository, ActivityRepository &activityRepository)
{
    cout << "Insert activity description" << '\n';
    string description;
    cin >> description;

    cout << "Choose an owner number (0-indexed)" << '\n';
    command4(personRepository);
    int ownerIndex;
    cin >> ownerIndex;

    cout << "Choose a room number (0-indexed)" << '\n';
    command2(roomRepository);
    int roomIndex;
    cin >> roomIndex;

    Activity* activity = new Activity(description, roomRepository[roomIndex], personRepository[ownerIndex]);

    activityRepository.add(activity);
}

void command6(ActivityRepository activityRepository)
{
    cout << "Activities: " << '\n';
    for(int i = 0; i < activityRepository.size(); ++i)
    {
        cout << *activityRepository[i] << '\n';
    }
    cout << '\n';
}

void command7(ActivityRepository activityRepository, PersonRepository personRepository,DisciplineRepository &disciplineRepository)
{
    cout << "Insert discipline name" << '\n';
    string disciplineName;
    cin >> disciplineName;
    Discipline *discipline = new Discipline(disciplineName);

    cout << "Insert number of activities" << '\n';
    int numberOfActivities;
    cin >> numberOfActivities;
    for(int i = 0; i < numberOfActivities; i++)
    {
        cout << "Choose an activity: (0 - indexed)" << '\n';
        command6(activityRepository);
        int activityIndex;
        cin >> activityIndex;
        discipline->addActivity(activityRepository[activityIndex]);
    }

    cout << "Insert number of attendees" << '\n';
    int numberOfAttendees;
    cin >> numberOfAttendees;
    for(int i = 0; i < numberOfAttendees; i++)
    {
        cout << "Choose an attendee: (0 - indexed)" << '\n';
        command4(personRepository);
        int personIndex;
        cin >> personIndex;
        discipline->addParticipant(personRepository[personIndex]);
    }

    disciplineRepository.add(discipline);

}

void command8(DisciplineRepository disciplineRepository)
{
    cout << "Disciplines: " << '\n';
    for(int i = 0; i < disciplineRepository.size(); ++i)
    {
        cout << *disciplineRepository[i] << '\n';
    }
    cout << '\n';
}

void command9(RoomRepository roomRepository)
{
    cout << "Insert room name to search: " << '\n';
    string name;
    cin >> name;
    Room* room = roomRepository.findByName(name);
    if(room == NULL)
    {
        cout << "No room found with such name" << '\n';
    }
    else
    {
        cout << *room << '\n';
    }
}

void command10(PersonRepository personRepository)
{
    cout << "Insert person cnp to search: " << '\n';
    string cnp;
    cin >> cnp;
    Person* person = personRepository.findByCNP(cnp);
    if(person == NULL)
    {
        cout << "No person found with this cnp" << '\n';
    }
    else
    {
        cout << *person << '\n';
    }
}

void command11(PersonRepository personRepository)
{
    cout << "Insert person email to search: " << '\n';
    string email;
    cin >> email;
    Person* person = personRepository.findByEmail(email);
    if(person == NULL)
    {
        cout << "No person found with this email" << '\n';
    }
    else
    {
        cout << *person << '\n';
    }
}

void command12(PersonRepository personRepository)
{
    cout << "Insert person first name and last name to search: " << '\n';
    string firstName, lastName;
    cin >> firstName >> lastName;
    Person* person = personRepository.findByFullName(firstName, lastName);
    if(person == NULL)
    {
        cout << "No person found with this full name" << '\n';
    }
    else
    {
        cout << *person << '\n';
    }
}

int main()
{
    RoomRepository roomRepository;
    PersonRepository personRepository;
    ActivityRepository activityRepository;
    DisciplineRepository disciplineRepository;
    int command;
    while(1)
    {
        cout << "Available commands: " << '\n';
        cout << "   0. Close program" << '\n';
        cout << "   1. Add room" << '\n';
        cout << "   2. List rooms" << '\n';
        cout << "   3. Add person" << '\n';
        cout << "   4. List persons" << '\n';
        cout << "   5. Add activity" << '\n';
        cout << "   6. List activities" << '\n';
        cout << "   7. Add discipline" << '\n';
        cout << "   8. List disciplines" << '\n';
        cout << "   9. Find room by name" << '\n';
        cout << "   10. Find person by cnp" << '\n';
        cout << "   11. Find person by email" << '\n';
        cout << "   12. Find person by full name" << '\n';

        cin >> command;
        switch(command)
        {
        case 0:
            return 0;
        case 1:
            command1(roomRepository);
            break;
        case 2:
            command2(roomRepository);
            break;
        case 3:
            command3(personRepository);
            break;
        case 4:
            command4(personRepository);
            break;
        case 5:
            command5(roomRepository, personRepository, activityRepository);
            break;
        case 6:
            command6(activityRepository);
            break;
        case 7:
            command7(activityRepository, personRepository, disciplineRepository);
            break;
        case 8:
            command8(disciplineRepository);
            break;
        case 9:
            command9(roomRepository);
            break;
        case 10:
            command10(personRepository);
            break;
        case 11:
            command11(personRepository);
            break;
        case 12:
            command12(personRepository);
            break;
        default:
            cout << "Command not found" << '\n';
        }

    }

    return 0;
}
