#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <cstdlib> // Para poder usar a função srand()
#include <ctime>   // Para poder usar a função time()
#include <iomanip> // Para poder usar a função setprecision()
#include <fstream> // Para poder implementar os métodos de save e load do jogo
using namespace std;


class CHARACTER {
	
 public:
	 string tipo; // “monster” or “player”
	 int health;
	 int strength;
	 double x;
	 double y;
	 bool operator==(CHARACTER c2);
	 friend ostream& operator<< (ostream& os, CHARACTER& c); 
	 //overload do operador << 
	 friend istream& operator>> (istream& is, CHARACTER& character);
	 //overload do operador >>
	 bool operator<(CHARACTER persona);
}; 

#endif
