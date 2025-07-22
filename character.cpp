#include "character.h"

void character::PersonagemDef()
{
	DrawRectangle(posX*10, posY*10, 10, 10, BLUE);
}

void character::PersonagemMov(const std::vector<std::vector<int>>& CCelulas)
{
    if (IsKeyDown(KEY_A)) {
        if (posX - 1 >= 0 && CCelulas[posX - 1][posY] == 0) {
            posX--;
        }
    }
    if (IsKeyDown(KEY_D)) {
        if (posX + 1 < CCelulas.size() && CCelulas[posX + 1][posY] == 0) {
            posX++;
        }
    }
    if (IsKeyDown(KEY_W)) {
        if (posY - 1 >= 0 && CCelulas[posX][posY - 1] == 0) {
            posY--;
        }
    }
    if (IsKeyDown(KEY_S)) {
        if (posY + 1 < CCelulas[0].size() && CCelulas[posX][posY + 1] == 0) {
            posY++;
        }
    }
}
