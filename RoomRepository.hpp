#ifndef ROOMREPSITORY_HPP_INCLUDED
#define ROOMREPSITORY_HPP_INCLUDED

#include "Room.hpp"
#include "Repository.hpp"

#include <vector>

class RoomRepository : public Repository<Room>
{
public:
	Room* findByName(string name);
};

#endif // ROOMREPSITORY_HPP_INCLUDED
