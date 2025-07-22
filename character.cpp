#include "character.h"

//atualiza o personagem definindoo a cada frame na posição X e Y
void character::PersonagemDef(int Largg, int Altt)
{
	DrawRectangle(posX*10, posY*10, 10, 10, BLUE);
    
    //verifica se o personagem chegou ao fim
    if (posX == Largg - 2 && posY == Altt - 1)
    {
        DrawText("percurso completo.", 150, 200, 70, YELLOW);
        encerrar = 1;
    }

    DrawRectangle(Largg = Largg * 10 - 20, Altt = Altt * 10 - 10, 10, 10, GREEN);
}

//movimento do personagem de acordo com W,A,S,D
void character::PersonagemMov(const std::vector<std::vector<int>>& CCelulas)
{
    if (IsKeyDown(KEY_W)) {
        if (encerrar == 0 && posY - 1 >= 0 && CCelulas[posX][posY - 1] == 0) {
            posY--;
        }
    }

    if (IsKeyDown(KEY_A)) {
        if (encerrar == 0 && posX - 1 >= 0 && CCelulas[posX - 1][posY] == 0) {
            posX--;
        }
    }

    if (IsKeyDown(KEY_S)) {
        if (encerrar == 0 && posY + 1 < CCelulas[0].size() && CCelulas[posX][posY + 1] == 0) {
            posY++;
        }
    }

    if (IsKeyDown(KEY_D)) {
        if (encerrar == 0 && posX + 1 < CCelulas.size() && CCelulas[posX + 1][posY] == 0) {
            posX++;
        }
    }

}
