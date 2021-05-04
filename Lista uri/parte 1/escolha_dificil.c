#include <stdio.h>

int main (){

	int frangoDisponivel, bifeDisponivel, massaDisponivel;
	int frangoRequisitado, bifeRequisitado, massaRequisitada;
	int resultadoFrango, resultadoBife, resultadoMassa;

	scanf("%d %d %d", &frangoDisponivel, &bifeDisponivel, &massaDisponivel);
	scanf("%d %d %d", &frangoRequisitado, &bifeRequisitado, &massaRequisitada);

	resultadoFrango = frangoDisponivel - frangoRequisitado;

	if (resultadoFrango > 0)
		resultadoFrango = 0;

	resultadoBife = bifeDisponivel - bifeRequisitado;


	if (resultadoBife > 0)
		resultadoBife = 0;

	resultadoMassa = massaDisponivel - massaRequisitada;


	if (resultadoMassa > 0)
		resultadoMassa = 0;

	printf("%d\n", -(resultadoFrango + resultadoBife + resultadoMassa));

return 0;
}
