#include "Tabuleiro.h"

//ajusta a resolução com base no valor recebido de GameControl
void Tabuleiro::AjusteAltResolução(int Largg, int Altt)
{
	Celulas.resize(Largg);

	for (int i = 0; i < Largg; ++i)
	{
		Celulas[i].resize(Altt);
	}

}

//responsavel por gerar as paredes e caminhos do labirinto
void Tabuleiro::GerarTab(int Largg, int Altt)
{
	//gera os caminhos do labirinto
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




