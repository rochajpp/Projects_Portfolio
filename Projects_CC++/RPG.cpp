#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char nome[100],arco[100]={"Arco velho"},espada[100]={"Espada enferrujada"},magica[100]={"Rajada de fogo"},pocao[100],tonico[100];
	int classe,escolha1,menu=0,escolha2;
	int forca=5,magia=5,pontaria=5,saude=50,level=1,poder=20;
	printf("Digite o nome do personagem:\n>");
	scanf("%s",&nome);
	system("cls");
	printf("%s sera um:\n1.Guerreiro\n2.Arqueiro\n3.Mago\n>",nome);
	scanf("%d",&classe);
	system("cls");
    printf("%s estava em uma carroca sendo transportado para uma pequena aldeia\ncom outros prisioneiros\n",nome);
    printf("Um dos prisioneiros olha para %s e diz:\n",nome);
    system("pause");
    system("cls");
    printf("Ei, voce estava tentando atravessar o rio nao e?\n");
    printf("Sou Barnabas eu tambem estava tentando atravessar, essa guerra ja chegou longe demais\n");
    printf("Qual o seu nome?\n1.Sou %s.\n2.Aonde estamos indo?\n>",nome);
    scanf("%d",&escolha1);
    if(escolha1 == 1){
        printf("Barnabas:\n Ola %s temos um grande destino pela frente.\n",nome);
    }
	else{
    	printf("Barnabas: Eu nao sei, acho que estamos indo para Taka.\n");
	}
	printf("Prisioneiro:\n Aonde estamos indo? Eu nao estava com eles. Me tirem daqui!\n");
    printf("Barnabas:\n Calma. Aceite seu destino com honra. Hoje celebraremos em Valhalla\n");
    printf("A carroca chega na aldeia\n");
    system("pause");
    system("cls");
    printf("Enquanto os gauardas executavam os prisioneiros. Ate que um dragao ataca a aldeia e destroi tudo\n");
    printf("Voce foge por uma caverna junto com Barnabas\n");
    printf("Barnabas:\n Meu Deus! Aquilo foi um dragao? Entao a lenda e verdade!\n");
    printf("Barnabas:\n Vamos, tem um lugar aqui perto que a gente pode ficar\n");
    system("pause");
    system("cls");
    printf("Voce chegou ao acampamento.\n");
    printf("Aqui voce pode recuperar sua saude\nAdministrar intens\nRecuperar magia.\n");
    system("pause");
    system("cls");
    printf("Esse e seu menu:\n\n");
    if(classe == 1){
        printf("Saude: %d     Poder: %d     Forca: %d\n\n",saude,poder,forca);
        printf("1.Missao           2.Bolsa\n");
       	printf("3.Habilidades      4.Farmar\n");
	}
	if(classe == 3){
		printf("Saude: %d     Poder: %d     Magia: %d \n\n",saude,poder,magia);
       	printf("1.Missao           2.Bolsa\n");
       	printf("3.Habilidades      4.Farmar\n");
	}
	if(classe == 2){
		printf("Saude: %d     Poder: %d     Pontaria: %d\n\n",saude,poder,pontaria);
       	printf("1.Missao           2.Bolsa\n");
        printf("3.Habilidades      4.Farmar\n");
    }
    system("pause");
    system("cls");
    printf("Barnabas:\n %s, esse e meu primo, Ufric.\n",nome);
    printf("Ufric:\n Ola %s, ouvi sobre o dragao, eu sabia que nao era apenas uma lenda\n Voces podem ficar aqui, depois disso tenho assuntos a tratar.\n",nome);
    printf("Barnabas:\n %s, precisamos nos esquipar e arrumar equipamentos farma um pouco.\n",nome);
    system("pause");
    system("cls");
    printf("Voce pode farmar no menu digitando 4, voce so podera farmar uma vez a cada missao.\n");
    while(menu!=4){
    	printf("Digite 4 para farmar.\n");
		if(classe == 1){
        	printf("Saude: %d    Poder: %d     Forca: %d\n\n",saude,poder,forca);
        	printf("1.Missao           2.Bolsa\n");
       		printf("3.Habilidades      4.Farmar\n");
       		scanf("%d",&menu);
		}
		if(classe == 3){
			printf("Saude: %d    Poder: %d      Magia: %d \n\n",saude,poder,magia);
       		printf("1.Missao           2.Bolsa\n");
       		printf("3.Habilidades      4.Farmar\n");
       		scanf("%d",&menu);
		}
		if(classe == 2){
			printf("Saude: %d    Poder: %d      Pontaria: %d\n\n",saude,poder,pontaria);
       		printf("1.Missao           2.Bolsa\n");
       	 	printf("3.Habilidades      4.Farmar\n");
       	 	scanf("%d",&menu);
    	}
    	system("cls");
	}
	printf("%s saiu a procura de recursos.\n\n",nome);
	system("pause");
	system("cls");
	if(classe==1){
		printf("%s encontrou:\n 1 x %s -> Forca = 5\n\n",nome,espada);
		forca=forca+5;
		poder=poder+forca;
		printf("Alguns itens possuem forca que sera somada com seu poder deixara %s mais poderoso\n\n",nome);
	}
	if(classe==2){
		printf("%s encontrou:\n 1 x %s -> Pontaria = 5\n\n",nome,arco);
		pontaria=pontaria+5;
		poder=poder+5;
		printf("Alguns itens possuem pontaria que sera somada com seu poder deixara %s mais poderoso\n\n",nome);
	}
	if(classe==3){
		printf("%s encontrou:\n 1 x Livro\n\n",nome);
		printf("Abrir livro\n\n");
		system("pause");
		system("cls");
		printf("%s aprendeu:\n 1x %s -> Magia = 5\n\n ",nome,magica);
		printf("Alguns itens possuem magia que sera somada com seu poder deixara %s mais poderoso\n\n",nome);
		magia=magia+5;
		poder=poder+magia;
	}
	system("pause");
	system("cls");
	printf("%s volta ao acampamento.\n\n",nome);
	menu=0;
	system("pause");
	system("cls");
	while(menu==0){
		if(classe == 1){
			printf("================================================\n");
    		printf("Saude: %d     Poder: %d     Forca: %d\n\n",saude,poder,forca);
        	printf("1.Missao           2.Bolsa\n");
       		printf("3.Habilidades      4.Farmar\n");
       		printf("=================================================\n\n");
       		scanf("%d",&menu);
		}
		if(classe == 3){
			printf("================================================\n");
			printf("Saude: %d     Poder: %d     Magia: %d \n\n",saude,poder,magia);
       		printf("1.Missao           2.Bolsa\n");
       		printf("3.Habilidades      4.Farmar\n");
    		printf("================================================\n\n");
       		scanf("%d",&menu);
		}
		if(classe == 2){
			printf("================================================\n");
			printf("Saude: %d     Poder: %d     Pontaria: %d\n\n",saude,poder,pontaria);
       		printf("1.Missao           2.Bolsa\n");
        	printf("3.Habilidades      4.Farmar\n");
    		printf("================================================\n\n");
        	scanf("%d",&menu);
    	}
    	system("cls");
    	if(menu==2){
    		while(menu==2){
    			printf("Bolsa\n\n");
    			if(classe==1){
    				printf("%s\n\n",espada);
    			}
    			if(classe==2){
    				printf("%s\n\n",arco);
				}	
				if(classe==3){
					printf("%s\n\n",magica);
				}
				system("pause");
				menu=0;
			}
			system("cls");				
		}
		if(menu==3){
			while(menu==3){
				printf("Habilidades\n\n");
				if(classe==1){
					printf("Guerreiro\nForca: %s\nPoder: %d\n",espada,poder);
				}
				if(classe==2){
					printf("Arqueiro\nPontaria: %s\nPoder: %d\n",arco,poder);
				}
				if(classe==3){
					printf("Mago\nMagia: %s\nPoder: %d\n",magica,poder);
				}
				system("pause");
				menu=0;
			}
			system("cls");
		}
		if(menu==4){
			while(menu==4){
				printf("Farmar indisponível no momento, jogue a missao para poder farmar novamente.\n\n");
				system("pause");
				menu=0;
			}
			system("cls");
		}
		if(menu==1){
			printf("Ulfric ajeitava seus equipamentos em sua barraca\n%s se aproxima\n",nome);
			while(menu==1){
				printf(" 1.Oque sabe sobre os dragoes?\n 2.Por que os dragoes apareceram?\n 3.Aonde esta indo?\n 4.Continuar.");
				scanf("%d",&escolha2);
				if(escolha2==1){
					printf("Ufric:\n Nao sei muito, tenho conhecimento das lendas, mas nao acho que seja que nem as lendas\n mas acredito nas escritas antigas.\n");
					printf("%s:\n Que escritos?\n",nome);
					printf("Ulfric:\n Encontraram tabuletas antigas em Kopavogur e essas tabuletas diziam sobre os dragoes e ruinas antigas.\n");
					printf("Ulfric:\n Estou indo para la para encontrar alguma coisa e saber mais sobre os dragoes\n");
					system("pause");
					system("cls");
				}
				if(escolha2==2){
					printf("Ulfric:\n Nao sei ainda mas acredito que eu vou achar a resposta em Kopavogur");
					system("pause");
					system("cls");
				}
				if(escolha2==3){
					printf("Ufric:\n Para Kopavogur procurar saber mais sobre o aparecimento do dragao.");
					system("pause");
					system("cls");
				}
				if(escolha2==4){
					menu=0;
				}
			}
		}
	}
	
	
return 0;
}
