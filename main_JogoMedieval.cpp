#include "CJogoMedieval.h"
#include "CHARACTER.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	//Testa construtor e função show_monsters_players()
	
	//CJogoMedieval j1(2,3);
	//std::cout << setprecision(2) << std::fixed; // Impõe um limite de duas casas decimais às posições x e y do personagem
	//j1.show_monsters_players();
	
	
	//Testa a fuunção loadGame()
	
	CJogoMedieval j2;
	j2.loadGame("output.txt");
	j2.show_monsters_players();
	
	
	//Testa a função saveGame()
	
	//CJogoMedieval j3(2,2);
	//std::cout << setprecision(2) << std::fixed;
	//j3.show_monsters_players();
	//j3.saveGame("save.txt");
	
	//Testa a função findWeakestMonster()
	
	/*CJogoMedieval j4(0,3); int maxhp;
	CHARACTER weakest;
	std::cout << setprecision(2) << std::fixed;
	j4.show_monsters_players();
	cout<<"Introduza uma max health: ";
	cin>>maxhp;
	weakest=j4.findWeakestMonster(maxhp);
	cout<<weakest<<endl;*/
	
	//Testa o overload do operador == na classe CHARACTER
	
	/*CHARACTER x1;
	x1.tipo = "Player";
	x1.health = 60;
	x1.strength = 50;
	x1.x = 1;
	x1.y = 0;*/
	
	/*CHARACTER x2;
	x2.tipo = "Player";
	x2.health = 40;
	x2.strength = 50;
	x2.x = 1;
	x2.y = 0;*/
	
	/*if (x1==x2) {
	cout<<"As duas personagens sao exatamente iguais!";
	}
	else {
	cout<<"As duas personagens sao diferentes!";
	}*/
	
	
	return 0;
}
