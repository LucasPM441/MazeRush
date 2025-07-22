#pragma once
#include "GameControl.h"
#include <vector>


class Tabuleiro
{
 private:
	std::vector <std::vector<int>> Celulas;
	void GerarTab(int Largg, int Altt);
	bool DFSVef(int StartX, int StartY, int ArrivalX, int ArrivalY, const std::vector<std::vector<int>>& CCelulas, std::vector<std::vector<bool>>& Visitado);

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

