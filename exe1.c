#include <stdio.h>

int main(){

	int dia,mes,ano,diaSemana,M,S,D,A;

	dia=1;
	mes=1;
	ano=1;

  do {

  printf("Digite a Data, o mes e o ano: ");
	scanf("%d %d %d",&dia,&mes,&ano); 

	if((dia == 0 && mes == 0 && ano == 0) || (dia == 0 || mes == 0 || ano == 0)){ // teste de validação

        printf("Entrada de data invalida \n");
        break;

	}
        else{

            M = mes;
            D = dia;
            A = ano %100; // 2003 / 100 = 20 com resto 03 (pra ser uma divisão exata)
            S = ano / 100; //obter os dois primeiros algarismos do ano

                // teste para valores abaixo de 3 exemplo: 1 (novembro) + 10 = 11
                if (M < 3){
                    M +=  10; 
                    A -=  1;
                }
                else{
                    M -= 2; 
                    A %= 100;
                }

    	diaSemana = (((int)(2.6 * M - 0.1)) + D + A + (A/4) + (S/4) - 2 * S)%7;
      // printf("%d Dia da Semana", diaSemana);

    	if (diaSemana < 0){
    	    diaSemana = diaSemana + 7;
    	}

    	if (diaSemana == 0){

    	    printf("%d/%d/%d: Domingo \n", dia, mes, ano);
    	}

    	else if (diaSemana == 1){

            printf("%d/%d/%d: Segunda-feira \n", dia, mes, ano);
    	}

        else if (diaSemana == 2) {
            printf("%d/%d/%d: Terca-feira \n", dia, mes, ano);
        }

        else if (diaSemana == 3) {

            printf("%d/%d/%d: Quarta-feira \n", dia, mes, ano);

        }

        else if (diaSemana == 4) {

            printf("%d/%d/%d: Quinta-feira \n", dia, mes, ano);

        }

        else if (diaSemana == 5) {

            printf("%d/%d/%d: Sexta-Feira \n", dia, mes, ano);

        }

        else if (diaSemana == 6) {

            printf("%d/%d/%d: Sabado \n", dia, mes, ano);
        }
    }
} while ((dia > 0) && (mes > 0) && (ano > 0));
}
