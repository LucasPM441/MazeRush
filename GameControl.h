#pragma once
#include "Raylib.h"
#include "Tabuleiro.h"


class GameControl
{
 private:
	//resolu��o da janela
	 int Larg;
	 int Alt;
	//controlador do fluxo declara��o
	void Controlador();
 public:
	//iniciador da cascata
	GameControl()
	{
		Controlador();
	}
};

