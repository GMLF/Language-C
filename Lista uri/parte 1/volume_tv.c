#include <stdio.h>

int main ()
{

	int vol_inicial, qtsTrocas, volume;
	unsigned short i;

	scanf("%hd %hd", &vol_inicial, &qtsTrocas);

	for (i = 0; i < qtsTrocas; i++)
	{

		scanf("%hd", &volume);

		if (vol_inicial + volume > 100)
			vol_inicial = 100;
		else if (vol_inicial + volume > 0)
			vol_inicial += volume;
		else
			vol_inicial = 0;

	}

	printf("%hd\n", vol_inicial);

}
