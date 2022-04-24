#include <stdio.h>
#include <string.h>

int main(void)
{
    char stringA[21]; // 20 + vazio
    char stringB[21]; 
    int par, repeticao;
    int posAtual = 0; // Posição atual
    int posNova = 0; // Nova Posição

    printf("Digite a quantidade de pares: \n");
    scanf("%d", &par); // pares desejados

    for (repeticao = 0; repeticao < par; repeticao++) {

        scanf("%s", stringA); // primeira palavra


        scanf("%s", stringB); // segunda palavra

            if(strlen(stringA) == strlen(stringB)) /*teste de comprimento de caracteres */  {
                while (posAtual < strlen(stringA))
                {
                    //as vogais podem ser diferentes, desde que o comprimento seja o mesmo entre os pares
                    if ( !(stringA[posAtual] == 'a' || stringA[posAtual] == 'e' || stringA[posAtual] == 'i' || stringA[posAtual] == 'o' || stringA[posAtual] == 'u') && (stringB[posNova] == 'a' || stringB[posNova] == 'e' || stringB[posNova] == 'i' || stringB[posNova] == 'o' || stringB[posNova] == 'u'))
                    {
                        stringA[posAtual] = stringA[posNova]; // Posição atual equivale a nova
                        stringB[posAtual] = stringB[posNova]; // Posição atual equivale a nova
                        posNova++; // incrementa a nova
                    }
                posAtual++; // incrementa a atual
                }

                if (stringA[posNova] == stringB[posNova]) // se as posições novas forem iguais entre si
                    printf("Yes\n"); //comprimentos iguais
                else
                    printf("No\n");
                }
            else {
                printf("No\n"); // comprimentos diferentes
            }
    }

    return 0;
}

