#pragma once
#include "Raylib.h"
#include "Tabuleiro.h"


class GameControl
{
 private:
	//resolução da janela
	int Larg = 92;
	int Alt = 52;
	//controlador do fluxo declaração
	void Controlador();
 public:
	//iniciador da cascata
	GameControl()
	{
		Controlador();
	}
};

