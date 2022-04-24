#include <stdio.h>

int main(void)
{	int data, ano, mes, dia;

	printf("Informe a data (aaaammdd): ");
	scanf("%d", &data);
	
	dia = data % 100;
	mes = (data / 100) % 100;
	ano = data / 10000;
	
	printf("\n\n\n\nDia: %d\n", dia);
	printf("Mes: %d\n", mes);
	printf("Ano: %d\n", ano);
	
	return 0;
}
