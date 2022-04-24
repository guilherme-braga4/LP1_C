#include <stdio.h>

int main(void)
{	int pecaMes [3] [3], granaPeca [3] [2], granaMes [3] [2];
  int linha, coluna;

  for(linha=0 ;linha < 3; linha++) {
    for(coluna=0 ;coluna < 3; coluna++) {
      printf("P%d (pecaMes)", coluna +1);
	    scanf("%d",&pecaMes[linha][coluna]);
  }
  }

  
  for(coluna=0 ;coluna < 2; coluna++) {
    for(linha=0 ;linha < 3; linha++) {
       printf("P%d (granaPeca)", linha +1);
	     scanf("%d",&granaPeca[linha][coluna]);
  }
  }

    granaMes[0][0] = (pecaMes[0][0] * granaPeca[0][0]) + (pecaMes[0][1] * granaPeca[1][0]) + (pecaMes[0][2] * granaPeca[2][0]);

    granaMes[0][1] = (pecaMes[0][0] * granaPeca[0][1]) + (pecaMes[0][1] * granaPeca[1][1]) + (pecaMes[0][2] * granaPeca[2][1]);

    granaMes[1][0] = (pecaMes[1][0] * granaPeca[0][0]) + (pecaMes[1][1] * granaPeca[1][0]) + (pecaMes[1][2] * granaPeca[2][0]);

    granaMes[1][1] = (pecaMes[1][0] * granaPeca[0][1]) + (pecaMes[1][1] * granaPeca[1][1]) + (pecaMes[1][2] * granaPeca[2][1]);

    granaMes[2][0] = (pecaMes[2][0] * granaPeca[0][0]) + (pecaMes[2][1] * granaPeca[1][0]) + (pecaMes[2][2] * granaPeca[2][0]);

    granaMes[2][1] = (pecaMes[2][0] * granaPeca[0][1]) + (pecaMes[2][1] * granaPeca[1][1]) + (pecaMes[2][2] * granaPeca[2][1]);

   printf("\t%d|%d\t\n",granaMes[0][0],granaMes[0][1]);
   printf("\t%d|%d\t\n",granaMes[1][0],granaMes[1][1]);
   printf("\t%d|%d\t\n",granaMes[2][0],granaMes[2][1]);

}
