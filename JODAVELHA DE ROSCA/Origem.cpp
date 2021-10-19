#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>


void computador();
void testVictory();

char tab[3][3] = { '0','1','2','3','4','5','6','7','8' };
char* modifytab = &tab[3][3];
int  cont = 1;


int main() {

	setlocale(LC_ALL, "Portuguese");
	int linhaView, colunaView, auxView = 0;
	int receiveMove, sair = 0;
	char  c;

	do {




		//***********MOSTRA TABELA*************
		for (linhaView = 0; linhaView < 3; linhaView++) {
			printf_s("\n\t");
			for (colunaView = 0; colunaView < 3; colunaView++) {
				printf_s("%c| ", tab[linhaView][colunaView]);
			}
		}
		//***********FIM MOTRA TABELA*******************


		//*****************INICIO DO JOGO*******************
		printf_s("\n\tEscollha o local da jogada\n");
		scanf_s("%d", &receiveMove);

		
		//**********TESTE PARA SABER ONDE O JOGADOR ESCOLHEU E MODIFICAR TABELA*********

		switch (receiveMove) {
		case 0:
			//*****TESTA SE O LOCAL ESTÁ OCUPADO******

			if (tab[0][0] == '&' || tab[0][0] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				break;
				cont--;
			}

			//*******CASO NÃO ESTAJA OCUPADO ESTE COMANDO MODIFICA A TABELA

			else {
				tab[0][0] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 1:
			if (tab[0][1] == '&' || tab[0][1] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
				
			}
			else {
				tab[0][1] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 2:
			if (tab[0][2] == '&' || tab[0][2] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
				
			}
			else {
				tab[0][2] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 3:
			if (tab[1][0] == '&' || tab[1][0] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;

			}
			else {
				tab[1][0] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 4:
			if (tab[1][1] == '&' || tab[1][1] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
			}
			else {
				tab[1][1] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 5:
			if (tab[1][2] == '&' || tab[1][2] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
			}
			else {
				tab[1][2] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 6:
			if (tab[2][0] == '&' || tab[2][0] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
			}
			else {
				tab[2][0] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 7:
			if (tab[2][1] == '&' || tab[2][1] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
			}
			else {
				tab[2][1] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;
		case 8:
			if (tab[2][2] == '&' || tab[2][2] == 'x') {
				printf_s("\n\t****LOCAL JA OCUPADO****\n");
				cont--;
				break;
			}
			else {
				tab[2][2] = 'x';
				testVictory();
				if (cont == 10) {
					break;
				}
			}
			printf_s("\n\tMinha vez :)");

			computador();	//*********JOGADA DO COMPUTADOR**********
			testVictory();
			break;

		default:
			printf_s("\n\tPosição não identificada...\n\t Porfavor escolha segundo a tabela.");
			cont--;
			break;
		}


		//*******************MOSTRA TABELA************************
		for (linhaView = 0; linhaView < 3; linhaView++) {
			printf_s("\n\t");
			for (colunaView = 0; colunaView < 3; colunaView++) {
				printf_s("%c| ", tab[linhaView][colunaView]);
			}
		}

		

		printf_s("\n");
		system("pause");
		cont++;
		system("cls");

	} while (cont < 6);






	return 0;
}

void computador() {
	int linha, coluna, controle = 1;

	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (tab[linha][coluna] != 'x' && tab[linha][coluna] != '&') {
				tab[linha][coluna] = '&';
				controle = 0;
				break;
			}
		}
		if (controle == 0)
			break;
	}

}


void testVictory() {
	//****************TESTE DE VITÓRIA**************************

	if (tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2]) {
		if (tab[0][0] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][0] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2]) {
		if (tab[1][0] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[1][0] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2]) {
		if (tab[2][0] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[2][0] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0]) {
		if (tab[0][0] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][0] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1]) {
		if (tab[0][1] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][1] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2]) {
		if (tab[0][2] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][2] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) {
		if (tab[0][0] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][0] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}

	if (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]) {
		if (tab[0][2] == 'x') {
			printf_s("*****\n\tFIM DE JOGO VOCE GANHOU*****");
			cont = 10;
		}
		else if (tab[0][2] == '&') {
			printf_s("*****\n\tFIM DE JOGO O CUMPUTADOR GANHOU*****");
			cont = 10;
		}
	}
}