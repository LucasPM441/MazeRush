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
}

//responsavel por gerar as paredes e caminhos do labirinto
void Tabuleiro::GerarTab(int Largg, int Altt)
{
	//condição loop
	bool Resolvido = 0;

	//variaveis auxiliares para DFS
	std::vector<std::vector<bool>>Visitado(Largg, std::vector<bool>(Altt, false));
	int startX = 1, startY = 1;
	int FimX = Largg - 2, FimY = Altt - 2;

	//roda até ter solução no labirinto
	while (Resolvido == 0)
	{
		
		for (int i = 0; i < Largg; i++)
		{
			for (int j = 0; j < Altt; j++)
			{
				Visitado[i][j] = 0;
				Celulas[i][j] = 0;
			}
		}

		//gera as paredes do labirinto
		for (int i = 0; i < Largg; i++)
			for (int j = 0; j < Altt; j++)
			{
				int Val = rand() % 100;

				if (Val < 40)
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
		Celulas[1][1] = 0;
		Celulas[Largg - 2][Altt - 2] = 0;

		Resolvido = DFSVef(startX, startY, FimX, FimY, Celulas, Visitado);
	}
	

}

//verifica se é possivel concluir o labirinto
bool Tabuleiro::DFSVef(int StartX, int StartY, int ArrivalX, int ArrivalY, const std::vector<std::vector<int>>& CCelulas, std::vector<std::vector<bool>>& Visitado)
{
	// Verificações de limites e obstáculos
	if (StartX < 0 || StartY < 0 || StartX >= CCelulas.size() || StartY >= CCelulas[0].size()) return false;
	if (CCelulas[StartX][StartY] == 1 || Visitado[StartX][StartY]) return 0;

	// Chegou no destino?
	if (StartX == ArrivalX && StartY == ArrivalY) return true;
	
	// Marca como visitado
	Visitado[StartX][StartY] = true;

	//define as direçoes q a DFS vai se mover
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };

	
	// Move para cima, baixo, esquerda, direita
	for (int dir = 0; dir < 4; dir++) {
		int nx = StartX + dx[dir];
		int ny = StartY + dy[dir];

		if (DFSVef(nx, ny, ArrivalX, ArrivalY, CCelulas, Visitado))return true;
		

	}

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




