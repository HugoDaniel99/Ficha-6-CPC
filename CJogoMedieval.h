//Pretende-se escrever um programa em C++, denominado "JogoMedieval". O nosso jogo vai ter dois
//tipos de personagens: os jogadores e os monstros. O programa deve ent�o conter uma classe
//denominada CJogoMedieval com a seguinte estrutura: 

#ifndef CJOGOMEDIEVAL_H
#define CJOGOMEDIEVAL_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>    // Para poder usar a fun��o srand()
#include <ctime>      // Para poder usar a fun��o time()
#include "CHARACTER.h"
#include <iomanip>    // Para poder usar a fun��o setprecision()
#include <fstream>    // Para poder implementar os m�todos de save e load do jogo
using namespace std;

class CJogoMedieval {
	
 public:
	 CJogoMedieval ();
	 CJogoMedieval (int nPlayers, int nMonsters);
	 void saveGame (const char *filename);
	 void loadGame (const char *filename);
	 void show_monsters_players();
	 void findWeakestMonster(int maxHealth);
 	 
 private:
	 vector<CHARACTER> characters;
	 int activeCharacter; 
 
}; 


#endif
