#pragma once
#include "GameControl.h"
#include <vector>

class character
{
private:
	//posi��o onde o personagem esta
	int posY = 0;
	int posX = 1;
	//bloquea o personagem dps q o jogador vence
	bool encerrar = 0;
public:

	//desenha o personagem novamente a cada frame - defini��o
	void PersonagemDef(int Largg, int Altt);
	//responsavel pelo movimento do perosonagem - defini��o
	void PersonagemMov(const std::vector<std::vector<int>>& CCelulas);
	

};

