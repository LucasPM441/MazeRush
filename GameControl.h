#pragma once
#include "Raylib.h"
#include "Tabuleiro.h"
#include "character.h"
#include "vector"
#include <cstdlib>
#include <ctime>

class GameControl
{
 private:
	//resolução da janela
	 int Larg = 96;
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

