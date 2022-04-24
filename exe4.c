#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // setlocale(LC_ALL, "Portuguese_Brasil");
    char cpf[14] ;
    int dig12,dig13,somav,multv;
    unsigned int comparar;

    //
    while(1){
        printf("Informe o seu CPF: ");
        scanf("%s",&cpf);

        //substituindo os pontos (caracteres especiais) por string vazia
        cpf[3]= ' ';
        cpf[7]= ' ';
        cpf[11]= ' ';

        //string de comparação
        // comparar 
        // 0 ---> mesmo tamanho e mesmo caracteres
        // > 0 ---> strg1 > strg2
        // < 0 ---> strg 1 < strg2
        comparar = strcmp(cpf,"000 000 000 00");

        if  ((strcmp(cpf,"111 111 111 11") == 0) || (strcmp(cpf,"222 222 222 22") == 0) || (strcmp(cpf,"333 333 333 33") == 0) ||
            (strcmp(cpf,"444 444 444 44") == 0)  || (strcmp(cpf,"555 555 555 55") == 0) || (strcmp(cpf,"666 666 666 66") == 0) ||
            (strcmp(cpf,"777 777 777 77") == 0)  || (strcmp(cpf,"888 888 888 88") == 0) ||
            (strcmp(cpf,"999 999 999 99") == 0))
            {
                printf("\no inserido e CPF invalido!\n");
            }

        //esse else indica que o programa atende aos requisitos de entrada do CPF, e o resultado foi 000.000.000-00
        //nesse momento, o programa para de executar
        else if(comparar == 0){
            printf("\nPrograma executado com sucesso!");
            break;
        }

        //CPF é válido && !== 000.000.000-00
        else{
            somav = (cpf[0]*1)+(cpf[1]*2)+(cpf[2]*3)+(cpf[4]*4)+(cpf[5]*5)+(cpf[6]*6)+(cpf[8]*7)+(cpf[9]*8)+(cpf[10]*9);
            dig12 = somav % 11;
            if(dig12 == 10){
                dig12 = 0;
            }
            multv = (cpf[0]*11)+(cpf[1]*10)+(cpf[2]*9)+(cpf[4]*8)+(cpf[5]*7)+(cpf[6]*6)+(cpf[8]*5)+(cpf[9]*4)+(cpf[10]*3)+(dig12*2);
            dig13 = (multv*10) % 11;
            if(dig13 == 10){
                dig13 = 0;
            }
            printf(" Esperando %c%c Encontrado: %d%d \n",cpf[12],cpf[13],dig12,dig13);
            //
            if(cpf[12] == dig12 && cpf[13] == dig13) {
              printf("O CPF inserido e Valido");
              // continue;
            }
            else {
               printf("CPF invalido – esperado: %c%c, mas encontrado: %d%d \n",cpf[12],cpf[13],dig12,dig13);
              //  continue;
            }
        }
    }
    return 0;
}
