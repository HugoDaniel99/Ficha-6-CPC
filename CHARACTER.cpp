#include "CHARACTER.h"

// Overload do operador << para poder efetuar o cout de cada objeto CHARACTER na implementação do método void show_monsters_players()
//operadores ostream& e istream& nao têm CHARACTER::

ostream& operator<< (ostream& os, CHARACTER& c){
	os<<"Personagem: "<<endl<<"Tipo: "<<c.tipo<<endl<<"Posicao: "<<"( "<<c.x<<" ; "<<c.y<<" )"<<endl<<"Forca: "<<c.strength
	<<endl<<"Vida: "<<c.health<<endl;
}

//f) Implemente o operador
//istream& operator>> (istream& is, CJogoMedieval::CHARACTER& character);
//Altere a função-membro loadGame() para usar este operador. 

istream& operator>> (istream& is, CHARACTER& character){
	is>>character.tipo>>character.health>>character.strength>>character.x>>character.y;
}

bool CHARACTER::operator== (CHARACTER c2){
	return (tipo==c2.tipo && health==c2.health && strength==c2.strength && x==c2.x && y==c2.y);
	//basta que um dos casos seja 0 que o resultado é igual a zero
}

//overload do operador < mas apenas para a vida (health)

bool CHARACTER::operator<(CHARACTER persona){
	return (health < persona.health);
	}
	
