#include <stdio.h>

int main (){

	float matriz[12][12], soma = 0, media = 0;
	char opcao;
  int i, j, total = 0;

	scanf("%c", &opcao);

	for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
			scanf("%f", &matriz[i][j]);
    }
  }
	if (opcao == 'S'){

		for(i = 0; i < 12; i++){
			for(j = 0; j < 12; j++){
				if (i > j && i < 12 - j - 1)
					soma+= matriz[i][j];
      }
    }
		printf("%.1f\n", soma);
	}//if

	if (opcao == 'M'){

		for(i = 0; i < 12; i++){
			for(j = 0; j < 12; j++){
				if (i > j && i < 12 - j - 1)
				{
					media+= matriz[i][j];
					total++;
				}
      }//for
    }//for
		printf("%.1f\n", media/total);
	}
  return 0;
}//main
