#pragma once

#include "Entity.h"

class Room : public Entity
{
public:
	enum class JoiningDirections
	{
		North = 0,
		East,
		South,
		West,
		// The Max indicates the maximum number of joining rooms a room can have
		Max
	};

private:
	Room* m_pJoiningRooms[static_cast<unsigned int>(JoiningDirections::Max)];

public:
	Room();

	void AddRoom(JoiningDirections direction, Room* pRoom);
	Room* GetRoom(JoiningDirections direction) const;
};
