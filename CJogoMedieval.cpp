#include "CJogoMedieval.h"

// a) Implemente o construtor CJogoMedieval (int nPlayers, int nMonsters) que gera para o vector characters um conjunto 
//de nPlayers e nMonsters. A posi��o de cada um deve ser aleat�ria entre 0 e 1, a strength gerada aleatoriamente entre 
//40 e 100, e a health inicializada a 100. Deve ainda colocar o �ndice do personagem activo (activeCharacter) a 0.

CJogoMedieval::CJogoMedieval(int nPlayers, int nMonsters){
	
	srand(time(NULL));
	
	//Gera os Players
	for(int i=0;i<nPlayers;i++){
		
		CHARACTER ppersonagem;
		int max=100; int min=40;
		int maxhp=100; int minhp=1;
		ppersonagem.tipo = "Player";
		
		//Para gerar valores de posi��o entre 0.00 e 1.00
		//rand() / (RAND_MAX + 1.);
		
		ppersonagem.x=rand() / (RAND_MAX + 1.);  // ppersonagem.x=(rand()%10)/10.0f);
		ppersonagem.y=rand() / (RAND_MAX + 1.);  // ppersonagem.y=(rand()%10)/10.0f);
		
		//Para fazer com que um n�mero a strength do personagem receba um valor aleat�rio entre 40 e 100, fazemos:
		ppersonagem.strength=rand()%(max-min + 1) + min;
		
		//Para testar a fun��o findWeakestMonster()
		ppersonagem.health=rand()%(maxhp-minhp + 1) + minhp;
		//ppersonagem.health=100;
		
		activeCharacter=0;
		
		characters.push_back(ppersonagem);
		
	}
	
	
	
	//Gera os Monsters
	for(int j=0;j<nMonsters;j++){
		
		CHARACTER mpersonagem;
		int max=100; int min=40;
		int maxhp=100; int minhp=1;
		mpersonagem.tipo = "Monster";
		
		//Para gerar valores de posi��o entre 0.00 e 1.00
		
		mpersonagem.x=rand() / (RAND_MAX + 1.);  // mpersonagem.x=(rand()%10)/10.0f);
		mpersonagem.y=rand() / (RAND_MAX + 1.);  // mpersonagem.y=(rand()%10)/10.0f);
		
		//Para fazer com que um n�mero a strength do personagem receba um valor aleat�rio entre 40 e 100, fazemos:
		mpersonagem.strength=rand()%(max-min + 1) + min;
		
		//Para testar a fun��o findWeakestMonster()
		mpersonagem.health=rand()%(maxhp-minhp + 1) + minhp;
		//mpersonagem.health=100;
		
		activeCharacter=0;
		
		characters.push_back(mpersonagem);
		
    }
}

//O construtor CJogoMedieval(); apenas coloca o �ndice do personagem activo a 0. 

CJogoMedieval::CJogoMedieval(){
	activeCharacter=0;
}

//b) Implemente a fun��o membro p�blica: 
     //void show_monsters_players();
//que mostra no �cran todos os players e monsters do jogo e as respetivas caracter�sticas. 

void CJogoMedieval::show_monsters_players(){
	for(unsigned int i=0;i<characters.size();i++){
		cout<<characters[i]<<"\n\n";
	}
}

//c) Implemente os membros-fun��o saveGame (const char * filename); loadGame (const char * filename); para guardar e carregar o 
//estado do jogo a partir de um ficheiro. O ficheiro est� organizado em linhas, cada linha contendo o tipo de personagem, a 
//sa�de, for�a e a posi��o x e y, separados por espa�os, por exemplo: 
//player 98 56 0.4 0.7
//monster 77 34 0.1 0.4
//monster 9 18 0.7 0.2 

void CJogoMedieval::saveGame(const char *filename){
	
	ofstream ficheiro (filename); //N�o fazer ficheiro.open (filename) --> ofstream j� abre o ficheiro

	if (!ficheiro) {
	cerr<< "Erro ao guardar! "; 
	exit(1);
	}
	
	else{
		for(unsigned int i=0;i<characters.size();i++){
		ficheiro<<characters[i]<<"\n\n";
		}	
	}
	ficheiro.close();
}

void CJogoMedieval::loadGame(const char *filename){
	
	CHARACTER load;
	ifstream fich (filename); //N�o fazer fich.open (filename) --> ifstream j� abre o ficheiro
	
	if (!fich) {
		cerr<< "Erro ao carregar! "; 
		exit(1);
	}
	
	else{
		while(!fich.eof()){
			fich>>load;
			if(!load.tipo.empty()){
				characters.push_back(load);
				}
		  }
	}
	fich.close();
}


//d) Implemente o membro-fun��o CHARACTER findWeakestMonster(int maxHealth);
//que retorna o monstro mais fraco, tendo no m�ximo maxHealth de health. 

//Nao esta a funcionar!!!

//void CJogoMedieval::findWeakestMonster(int maxHealth){
	

/*for(unsigned int i=0;i<characters.size();i++){
	if ( (characters[i].tipo) != "Player") {
		for( int k=0;k<characters.size();k++)
			CHARACTER weakest=characters[characters.size()];
			if( characters[k]< ( characters[characters.size()] ) ){
			weakest=characters[k];
				}
		if(weakest.health>maxHealth){
		cout<<"Monstro mais fraco:"<<endl;
    	cout<<"Personagem: "<<endl<<"Tipo: "<<weakest.tipo<<endl<<"Posicao: "<<"( "<<weakest.x<<" ; "<<weakest.y<<" )"<<endl<<"Forca: "<<weakest.strength
	    <<endl<<"Vida: "<<weakest.health<<endl;	
		}
	    
		else{
		//CJogoMedieval j4 (0,3); int maxhp;
		cout<<"\n Nao ha nenhum monstro dentro do limite estabelecido!";
		//cout<<"Introduza uma max health: ";
		//cin>>maxhp;
		//j4.findWeakestMonster(maxhp);
			}
		
		}
	}
}*/

/*for(unsigned int l=0;l<characters.size();l++){
	CHARACTER weakest=characters.at(characters.size());
	if( characters.at(l ) < ( characters.at(characters.size()) ){
		weakest=characters.at(l);
	}*/
	
	



