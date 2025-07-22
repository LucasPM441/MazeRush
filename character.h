#pragma once
#include "GameControl.h"
#include <vector>

class character
{
private:
	//posição onde o personagem esta
	int posY = 0;
	int posX = 1;
	
public:

	void PersonagemDef();
	void PersonagemMov(const std::vector<std::vector<int>>& CCelulas);

};

