#pragma once
#include "GameControl.h"
#include <vector>
#include <cstdlib>
#include <ctime>

class Tabuleiro
{
 private:
	std::vector <std::vector<int>> Celulas;
	void GerarTab(int Largg, int Altt);
	bool DFSVef();

 public:
	//ajuste automatico da resolu��o
	void AjusteAltResolu��o(int Largg, int Altt);
	//responsavel por mostrar e atualizar o labirinto na tela
	void GrafoLab(int Largg, int Altt);

	Tabuleiro(int x, int y)
	{
		AjusteAltResolu��o(x, y);
		GerarTab(x, y);
	}
};

