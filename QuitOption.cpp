#include "QuitOption.h"
#include <iostream>

bool QuitOption::Evaluate(const std::string & optionText, Player & player)
{
	m_shouldQuit = m_optionText.compare(optionText) == 0;
	

	if (m_shouldQuit == true)
	{
		
		std::cout << "You have chosen to Quit!" << std::endl << std::endl;
	}

	return m_shouldQuit;
}