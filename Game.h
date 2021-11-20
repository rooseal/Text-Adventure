#pragma once

#include <array>

#include "Player.h"
#include "PlayerOptions.h"
#include "Room.h"
#include "MoveOption.h"
#include "QuitOption.h"

class Game
{
private:
	static const unsigned int m_numberOfRooms = 4;
	using Rooms = std::array<Room, m_numberOfRooms>;
	Rooms m_rooms;

	Player m_player;

	MoveOption m_moveNorthOption;
	MoveOption m_moveEastOption;
	MoveOption m_moveSouthOption;
	MoveOption m_moveWestOption;
	QuitOption m_quitOption;

	static const unsigned int m_numberOfOptions = 5;
	Option* m_options[m_numberOfOptions];

	void InitializeRooms();
	void WelcomePlayer();
	void GivePlayerOptions();
	void GetPlayerInput(std::string& playerInput);

	PlayerOptions EvaluateInput(std::string& playerInput);

public:
	Game();

	void RunGame();
};

