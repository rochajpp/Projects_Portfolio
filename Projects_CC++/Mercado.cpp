#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int quantprod,menu=0,pagamento;
	float valor[100],valortotal=0,troco,sobra,quant[100];
	char produto[100][100];
	while(menu==0){
		printf("Digite a quantidade total de produtos que você deseja comprar:\n");
		scanf("%d",&quantprod);
		if(quantprod>=100){
			printf("Número máximo de produtos atingida\nCapacidade Máxima: 100 produtos.\n");
		}
		else{
			for(int i=1;i<=quantprod;i++){
				printf("Digite o nome do produto:\n");
				scanf("%s",&produto[i]);
				printf("Digite a quantidade do produto:\n");
				scanf("%f",&quant[i]);
				printf("Digite o valor da unidade do produto\n");
				scanf("%f",&valor[i]);
				valor[i]=valor[i]*quant[i];
				valortotal=valortotal+valor[i];
				printf("\t Total: R$ %0.2f\n",valortotal);
			}
			system("cls");
			printf("\t CARRINHO\n");
			for(int i=1;i<=quantprod;i++){
				printf("\t %0.0f x %s - R$ %0.2f\n",quant[i],produto[i],valor[i]);
			}
			printf("\tTOTAL: R$ %0.2f\n",valortotal);
			printf("Digite a forma de pagamento:\n 1.DINHEIRO\n 2.CARTÃO\n");
			scanf("%d",&pagamento);
			if(pagamento==1){
				printf("Troco para:\n");
				scanf("%f",&troco);
				if(troco<valortotal){
					while(troco<valortotal){
						printf("Valor insuficiente\n");
						printf("Troco para:\n");
						scanf("%f",&troco);
					}
				}
				sobra=troco-valortotal;
				system("pause");
				system("cls");
				sobra=troco-valortotal;
				printf("         CUPOM FISCAL\n");
				for(int i=1;i<=quantprod;i++){
					printf("    %0.0f x %s - R$ %0.2f\n",quant[i],produto[i],valor[i]);
				}
				printf("Total: R$ %0.2f\nForma de pagamento: DINHEIRO\nValor que vai ser pago: R$ %0.2f\nTroco: R$ %0.2f\n",valortotal,troco,sobra);
				menu=1;
		}
			if(pagamento==2){
				system("pause");
				system("cls");
				printf("        CUPOM FISCAL\n");
				for(int i=1;i<=quantprod;i++){
					printf("   %0.0f x %s - R$ %0.2f\n",quant[i],produto[i],valor[i]);
				}
				printf("Total: R$ %0.2f\nForma de pagamento: CARTÃO\n",valortotal);
				menu=1;
			}
		}
	}
	system("pause");
}


