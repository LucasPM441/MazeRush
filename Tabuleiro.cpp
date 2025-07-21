#include "Tabuleiro.h"
#include <iostream>

//ajusta a resolução com base no valor recebido de GameControl
void Tabuleiro::AjusteAltResolução(int Largg, int Altt)
{
	Celulas.resize(Largg);

	for (int i = 0; i < Largg; ++i)
	{
		Celulas[i].resize(Altt);
	}

	std::cout << "linhas: " << Celulas.size() << "\n";
	if (!Celulas.empty())
		std::cout << "colunas: " << Celulas[0].size() << "\n";

}

//responsavel por gerar as paredes e caminhos do labirinto
void Tabuleiro::GerarTab(int Largg, int Altt)
{
	//gera as paredes do labirinto
	for(int i = 0; i < Largg; i++)
		for (int j = 0; j < Altt; j++)
		{
			int Val = rand() % 10;

			if (Val < 5)
			{
				Celulas[i][j] = 1;
			}
			else
			{
				Celulas[i][j] = 0;
			}
		}
	
	//geração das bordas
	for (int i = 0; i < Altt; i++)
	{
		Celulas[0][i] = 1;
		Celulas[Largg - 1][i] = 1;
	}

	for (int j = 0; j < Largg; j++)
	{
		Celulas[j][0] = 1;
		Celulas[j][Altt - 1] = 1;
	}

	//Def Inicio e fim
	Celulas[1][0] = 0;
	Celulas[Largg - 2][Altt - 1] = 0;


}

bool Tabuleiro::DFSVef()
{
	return false;
}

//visibilidade ao labirinto
void Tabuleiro::GrafoLab(int Largg, int Altt)
{
	for (int i = 0; i < Largg; i++)
	{
		for (int j = 0; j < Altt; j++)
		{
			if (Celulas[i][j] == 1)
			{
				DrawRectangle(i * 10, j * 10, 10, 10, BLACK);
			}
			else{};
		}
	}
}




