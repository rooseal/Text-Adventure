#pragma once

#include <string>
#include "Entity.h"
#include "Room.h"

class Player : public Entity
{
private:
    const Room* m_pCurrentRoom;
    std::string m_name;

public:
    void SetName(const std::string& name)
    {
        m_name = name;
    }

    const std::string& GetName() const
    {
        return m_name;
    }

    void SetCurrentRoom(const Room* pCurrentRoom)
    {
        m_pCurrentRoom = pCurrentRoom;
    }

    const Room* GetCurrentRoom() const
    {
        return m_pCurrentRoom;
    }
};