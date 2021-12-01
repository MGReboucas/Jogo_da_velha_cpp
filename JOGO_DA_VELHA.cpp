#include <stdio.h>		//BIBLIOTECA PADRAO
#include <stdlib.h>		//BIBLIOTECA PADRAO
#include <windows.h>		//BIBLIOTECA TEMPO
#include <iostream>

//INICIO JOGO DA MEMORIA GAME

void inicio(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                    |JOGO DA VELHA|                                                 ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                      |PRODUCED|                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                 |by MATHEUS REBOUCAS|                                              ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
}

void nivel(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  | 1 - NOVO JOGO |                                                 ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  |  2 - CREDITOS |                                                 ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  |   4 - SAIR    |                                                 ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
}

void instrucoes(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                   |INSTRUCOES DO GAME|                                             ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                    |USE AS COORDENADAS DIGITANDO NUMEROS DE 1 ATE 3|                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                |GANHA O JOGADOR QUE CONSIGA PREENCHER UMA LINHA OU COLUNA|                         ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  	                                                              ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  	 |BOA SORTE|                                                  ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
}

void creditos(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                   	  |CREDITOS|                                                  ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                          |DESIGN FEITO POR MATHEUS REBOUCAS|                                       ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                         |MECANICA FEITA POR MATHEUS REBOUCAS|                                      ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                 |OBRIGADO POR JOGAR|                                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  	                                                              ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                    |MGR PRODUCTIONS|                                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
	
}

void repetir(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                 |DESEJA REPETIR O JOGO|                                            ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                             |DIGITE S PARA REPETIR O JOGO|                                         ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                         |DIGITE QUALQUER OUTRA TECLA PARA SAIR|                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                 |OBRIGADO POR JOGAR|                                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  	                                                              ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                    |MGR PRODUCTIONS|                                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
	
}

void final(){
	printf("||====================================================================================================================||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                    |FINAL DO GAME|                                                 ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                  	                                                              ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                       |ATE MAIS!|                                                  ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                    |MGR PRODUCTIONS|                                               ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||                                                                                                                    ||\n");
	printf("||====================================================================================================================||\n");
}

void init(int matriz[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz[i][j]=0;
		}
	}
}

char printBlock(int block){
	
    if(block==0)
        return ' ';
    else if(block==1)
        return 'X';
    else
        return 'O';
}

void show(int matriz[][3]){
	
    printf("\n\n");
    for(int LINHA = 0; LINHA < 3; LINHA++) {
        printf("\t     ");
        for(int COLUNA = 0; COLUNA < 3; COLUNA++) {
            if(COLUNA < 2)
                printf("  %c |", printBlock(matriz[LINHA][COLUNA]));
            else
                printf("  %c  ", printBlock(matriz[LINHA][COLUNA]));
        }
        if(LINHA < 2)
            printf("\n\t   _________________\n");
        }
}

void playMove(int matriz[][3], int player){
	
    int LINHA, COLUNA, CHECK;
    do{
    
	    printf("EM QUAL LINHA DESEJA JOGAR?");
        scanf("%d",&LINHA);
        fflush(stdin);
        printf("EM QUAL COLUNA DESEJA JOGAR?");
        scanf("%d",&COLUNA);
        fflush(stdin);
		LINHA--; COLUNA--;

        CHECK = matriz[LINHA][COLUNA] || LINHA<0 || LINHA>2 || COLUNA<0 || COLUNA>2;
        
		if(CHECK){
        	system("cls");
            printf("VOCE DIGITOU ALGO ERRADO, LEMBRE-SE QUE ESSE EH UM JOGO 3X3");
		}
		
	}while(CHECK);

    if(player==0)
        matriz[LINHA][COLUNA]=1;
    
	else
        matriz[LINHA][COLUNA]=-1;
}

int checkContinue(int matriz[][3]){
	
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(matriz[i][j]==0)
                return 1;
}

int checkWin(int matriz[][3]){
	
    int LINHA, COLUNA, SUM;

    for(LINHA=0 ; LINHA<3 ; LINHA++){
        SUM=0;
		system("cls");
        for(COLUNA=0 ; COLUNA<3 ; COLUNA++)
            SUM += matriz[LINHA][COLUNA];

        	if(SUM==3)
            	return 1;
    
	    	if(SUM==-3)
            	return -1;
    }

    for(COLUNA=0 ; COLUNA<3 ; COLUNA++){
        SUM=0;
		system("cls");
        for(LINHA=0 ; LINHA<3 ; LINHA++)
            SUM += matriz[LINHA][COLUNA];

        if(SUM==3)
            return 1;
        if(SUM==-3)
            return -1;
    }

    SUM=0;
    for(LINHA=0 ; LINHA<3 ; LINHA++)
        SUM += matriz[LINHA][LINHA];
    	system("cls");
		if(SUM==3)
        	return 1;
    	
		if(SUM==-3)
        	return -1;

    SUM=matriz[0][2]+matriz[1][1]+matriz[2][0];
    
		if(SUM==3)
        	return 1;
    	
		if(SUM==-3)
        	return -1;

    return 0;
}

int game(int matriz[][3]){
	
    int turn=0, cont, win;

    do{
        show(matriz);
        printf("\n\nJOGADOR: %d \n",1+turn%2);
        playMove(matriz, turn%2);
        turn++;

        cont=checkContinue(matriz);
        win = checkWin(matriz);
    }while(cont && !win);

    if(win==1){
        printf("JOGADOR 1 GANHOU\n");
        return 1;
    }else
        if(win==-1){
            printf("JOGADOR 2 GANHOU\n");
            return 2;
    }else
        printf("EMPATE\n");
    
}

void pontomatriz(int resultado, int player1, int player2){
    
	if(resultado==1)
        player1++;
    
	if(resultado==2)
        player2++;

    printf("\nPLACAR:");
    printf("%d X %d\n\n",player1,player2);
}

int main(void){
	system("color 02");
	setlocale(LC_ALL,"Portuguese");
	int tempo, escolha;
	int i;
	char whi;
    char ch='*';
    int matriz[3][3];
    int cont=0, player1=0, player2=0, resultado;
    inicio();
        for(i=1;i<=120;i++){
        	printf("%c", ch);
            Sleep(50);		
		}
	system("cls");
	
	instrucoes();
	system("pause");
	system("cls");
	
	nivel();
	scanf("%d",&escolha);
	system("cls");	
	fflush(stdin);
do{	
		switch(escolha){
		
			case 1:				//JOGO	
        			init(matriz);
        			resultado = game(matriz);
        			show(matriz);
        			pontomatriz(resultado, player1, player2);
        			system("pause");
        			system("cls");
				break;
			
			case 2:				//CREDITOS
				for(tempo=0;tempo<=5;tempo++){
				creditos();
				Sleep(1000);
				system("cls");
				}
				system("cls");
				break;
				
			case 4:				//SAIR
				system("cls");
					for(tempo = 5;tempo>=0;tempo--){	//TEMPO
					creditos();
					Sleep(1000);
					system("cls");
					}
				exit(1);
				break;
				
			default:
				printf("OPCAO INVALIDA");
				break;	
		}
		repetir();
		scanf("%c",&whi);
}while(whi == 'S');
	
	final();
	return 0;
}
