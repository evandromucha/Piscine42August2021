
#include <stdio.h>
#include <string.h>

void ft_teste(int *x, int y)
{
//	printf("Endereço da variável comum 'valor': %p\n", &valor);
	printf("Lendo o conteúdo do ponteiro x: %p\n", x);
	printf("Endereço da variável ponteiro x: %p\n", &x);
	printf("Conteúdo da variável apontada por x: %d\n", *x);
	printf("Conteúdo da variável comum y: %d\n\n", y);

	*x = 50;
	y = 90;
}


int		main()
{
	// char	destino[] = "MMM";
	// char	fonte[] = "EEE";

	// strcpy(destino, fonte);
	// printf("Fonte: %s e Destino: %s", fonte, destino);
	// puts (fonte);

	int *x, valor, y;
	valor = 35;
	x = &valor;
	y = *x;

	ft_teste(x, y);

	printf("Endereço da variável comum 'valor': %p\n", &valor);
	printf("Lendo o conteúdo do ponteiro x: %p\n", x);
	printf("Endereço da variável ponteiro x: %p\n", &x);
	printf("Conteúdo da variável apontada por x: %d\n", *x);
	printf("Conteúdo da variável comum y: %d\n", y);


}
