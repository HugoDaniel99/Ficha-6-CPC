#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <cstdlib> // Para poder usar a fun��o srand()
#include <ctime>   // Para poder usar a fun��o time()
#include <iomanip> // Para poder usar a fun��o setprecision()
#include <fstream> // Para poder implementar os m�todos de save e load do jogo
using namespace std;


class CHARACTER {
	
 public:
	 string tipo; // �monster� or �player�
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
