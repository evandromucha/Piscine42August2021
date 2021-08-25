#include <stdio.h>

void filtra_merda(char *str, int arr[4], int init, int final);
char *tinder(int arr1[], int arr2[], int i, char *strings[]);
void risca_risca(char *cona);
void create_matrix(int matriz[4][4]);
void print_matrix(int matriz[4][4]);
void coloca_quatro(int matriz[4][4], int arr[], int n);
int conta_quatro(int matriz[4][4]);
void quarto_quatro(int matriz[4][4]);
int connectn(int linha[], int n);
int find_col(int matriz[4][4], int n);
int find_line(int matriz[4][4], int n);

int main(int argc, char *argv[])
{
	int i;
	int j;

	char *matriz12 = "41234213";
	char *matriz13 = "413242314312";
	char *matriz14 = "4321";

	int Matriz1_2[2][4];
	int Matriz1_3[3][4];
	int Matriz1_4[1][4];

	// Matrizes 1 por 2

	Matriz1_2[0][0] = 4;
	Matriz1_2[0][1] = 1;
	Matriz1_2[0][2] = 2;
	Matriz1_2[0][3] = 3;

	Matriz1_2[1][0] = 4;
	Matriz1_2[1][1] = 2;
	Matriz1_2[1][2] = 1;
	Matriz1_2[1][3] = 3;

	// Matrizes 1 por 3

	Matriz1_3[0][0] = 4;
	Matriz1_3[0][1] = 1;
	Matriz1_3[0][2] = 3;
	Matriz1_3[0][3] = 2;

	Matriz1_3[1][0] = 4;
	Matriz1_3[1][1] = 2;
	Matriz1_3[1][2] = 3;
	Matriz1_3[1][3] = 1;

	Matriz1_3[2][0] = 4;
	Matriz1_3[2][1] = 3;
	Matriz1_3[2][2] = 1;
	Matriz1_3[2][3] = 2;

	// Matrizes 1 por 4

	Matriz1_4[0][0] = 4;
	Matriz1_4[0][1] = 3;
	Matriz1_4[0][2] = 2;
	Matriz1_4[0][3] = 1;

	printf("\n");

	printf("*** As linhas com vista 1 por 2 sao: *** \n");

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz1_2[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	printf("\n");

	printf("*** As linhas com vista 1 por 3 sao: *** \n");

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz1_3[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	printf("\n");

	printf(" *** As linhas com vista 1 por 4 sao: *** \n");

	i = 0;
	while (i < 1)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz1_4[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	printf("\n");

	char *matriz21 = "31243214";
	char *matriz22 = "142321433412241331423241";
	char *matriz23 = "143224313421";

	int Matriz2_1[2][4];
	int Matriz2_2[6][4];
	int Matriz2_3[3][4];

	// Matrizes 2 por 1

	Matriz2_1[0][0] = 3;
	Matriz2_1[0][1] = 1;
	Matriz2_1[0][2] = 2;
	Matriz2_1[0][3] = 4;

	Matriz2_1[1][0] = 3;
	Matriz2_1[1][1] = 2;
	Matriz2_1[1][2] = 1;
	Matriz2_1[1][3] = 4;

	printf(" \n\n*** As linhas com vista 2 por 1 sao: *** \n\n");

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz2_1[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	// Matrizes 2 por 2

	Matriz2_2[0][0] = 1;
	Matriz2_2[0][1] = 4;
	Matriz2_2[0][2] = 2;
	Matriz2_2[0][3] = 3;

	Matriz2_2[1][0] = 2;
	Matriz2_2[1][1] = 1;
	Matriz2_2[1][2] = 4;
	Matriz2_2[1][3] = 3;

	Matriz2_2[2][0] = 3;
	Matriz2_2[2][1] = 4;
	Matriz2_2[2][2] = 1;
	Matriz2_2[2][3] = 2;

	Matriz2_2[3][0] = 2;
	Matriz2_2[3][1] = 4;
	Matriz2_2[3][2] = 1;
	Matriz2_2[3][3] = 3;

	Matriz2_2[4][0] = 3;
	Matriz2_2[4][1] = 1;
	Matriz2_2[4][2] = 4;
	Matriz2_2[4][3] = 2;

	Matriz2_2[5][0] = 3;
	Matriz2_2[5][1] = 2;
	Matriz2_2[5][2] = 4;
	Matriz2_2[5][3] = 1;

	printf(" \n\n*** As linhas com vista 2 por 2 sao: *** \n\n");

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz2_2[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	// Matrizes 2 por 3

	Matriz2_3[0][0] = 1;
	Matriz2_3[0][1] = 4;
	Matriz2_3[0][2] = 3;
	Matriz2_3[0][3] = 2;

	Matriz2_3[1][0] = 2;
	Matriz2_3[1][1] = 4;
	Matriz2_3[1][2] = 3;
	Matriz2_3[1][3] = 1;

	Matriz2_3[2][0] = 3;
	Matriz2_3[2][1] = 4;
	Matriz2_3[2][2] = 2;
	Matriz2_3[2][3] = 1;

	printf(" \n\n*** As linhas com vista 2 por 3 sao: *** \n\n");

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz2_3[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	char *matriz31 = "132421342314";
	char *matriz32 = "124313422341";

	int Matriz3_1[3][4];
	int Matriz3_2[3][4];

	// Matrizes 3 por 1

	Matriz3_1[0][0] = 1;
	Matriz3_1[0][1] = 3;
	Matriz3_1[0][2] = 2;
	Matriz3_1[0][3] = 4;

	Matriz3_1[1][0] = 2;
	Matriz3_1[1][1] = 1;
	Matriz3_1[1][2] = 3;
	Matriz3_1[1][3] = 4;

	Matriz3_1[2][0] = 2;
	Matriz3_1[2][1] = 3;
	Matriz3_1[2][2] = 1;
	Matriz3_1[2][3] = 4;

	printf(" \n\n*** As linhas com vista 3 por 1 sao: *** \n\n");

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz3_1[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	// Matrizes 3 por 2

	Matriz3_2[0][0] = 1;
	Matriz3_2[0][1] = 2;
	Matriz3_2[0][2] = 4;
	Matriz3_2[0][3] = 3;

	Matriz3_2[1][0] = 1;
	Matriz3_2[1][1] = 3;
	Matriz3_2[1][2] = 4;
	Matriz3_2[1][3] = 2;

	Matriz3_2[2][0] = 2;
	Matriz3_2[2][1] = 3;
	Matriz3_2[2][2] = 4;
	Matriz3_2[2][3] = 1;

	printf(" \n\n*** As linhas com vista 3 por 2 sao: *** \n\n");

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz3_2[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	char *matriz41 = "1234";

	char *strings[9];
	strings[0] = matriz12;
	strings[1] = matriz13;
	strings[2] = matriz14;
	strings[3] = matriz21;
	strings[4] = matriz22;
	strings[5] = matriz23;
	strings[6] = matriz31;
	strings[7] = matriz32;
	strings[8] = matriz41;

	int Matriz4_1[1][4];

	// Matrizes 4 por 1

	Matriz4_1[0][0] = 1;
	Matriz4_1[0][1] = 2;
	Matriz4_1[0][2] = 3;
	Matriz4_1[0][3] = 4;

	printf(" \n\n*** As linhas com vista 4 por 1 sao: *** \n\n");

	i = 0;
	while (i < 1)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", Matriz4_1[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	printf("\n");

	printf("O input = |%s|\n", argv[1]);
	int colup[4];
	int coldown[4];
	int rowleft[4];
	int rowright[4];
	filtra_merda(argv[1], colup, 0, 7);
	filtra_merda(argv[1], coldown, 8, 15);
	filtra_merda(argv[1], rowleft, 16, 23);
	filtra_merda(argv[1], rowright, 24, 31);

	printf("Col Up = ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", colup[i]);
	}
	printf("\n");
	printf("Col Down = ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", coldown[i]);
	}
	printf("\n");
	printf("Row Left = ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", rowleft[i]);
	}
	printf("\n");
	printf("Row Right = ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", rowright[i]);
	}
	printf("\n");

	char *linha1 = tinder(rowleft, rowright, 1, strings);
	char *linha2 = tinder(rowleft, rowright, 2, strings);
	char *linha3 = tinder(rowleft, rowright, 3, strings);
	char *linha4 = tinder(rowleft, rowright, 4, strings);
	char *col1 = tinder(colup, coldown, 1, strings);
	char *col2 = tinder(colup, coldown, 2, strings);
	char *col3 = tinder(colup, coldown, 3, strings);
	char *col4 = tinder(colup, coldown, 4, strings);

	printf("====Conjuntos de solucao===\n");

	risca_risca(linha1);
	risca_risca(linha2);
	risca_risca(linha3);
	risca_risca(linha4);
	risca_risca(col1);
	risca_risca(col2);
	risca_risca(col3);
	risca_risca(col4);

	int matriz[4][4];

	create_matrix(matriz);

	coloca_quatro(matriz, colup, 1);
	coloca_quatro(matriz, coldown, 2);
	coloca_quatro(matriz, rowleft, 3);
	coloca_quatro(matriz, rowright, 4);

	if (conta_quatro(matriz) == 3)
	{
		quarto_quatro(matriz);
	}
	print_matrix(matriz);
}

void quarto_quatro(int matriz[4][4])
{
	printf("Temos 3 quatros!!!\n");

	printf("Coloca o 4 na linha %d e na coluna %d\n", find_line(matriz, 4), find_col(matriz, 4));
}

int find_col(int matriz[4][4], int n)
{
	int i;
	int j;
	int flag = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (matriz[j][i] == n)
			{
				flag = 1;
			}
		}
		if (flag)
		{
			flag = 0;
		}
		else
		{
			return i;
		}
	}
}

int find_line(int matriz[4][4], int n)
{
	int i;
	int j;
	int flag = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (matriz[i][j] == n)
			{
				flag = 1;
			}
		}
		if (flag)
		{
			flag = 0;
		}
		else
		{
			return i;
		}
	}
}

int conta_quatro(int matriz[4][4])
{
	int i;
	int j;
	int num;
	i = -1;

	num = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (matriz[i][j] == 4)
			{
				num++;
			}
		}
	}
	printf("Num = %d\n", num);
	return num;
}

void coloca_quatro(int matriz[4][4], int arr[], int n)
{
	int i = 0;
	while (i < n && arr[i] != 1)
	{
		i++;
	}
	printf("i - %d === n - %d\n", i, n);
	if (arr[i] == 1)
	{
		switch (n)
		{
		case 1:
			matriz[0][i] = 4;
			break;
		case 2:
			matriz[3][i] = 4;
			break;
		case 3:
			matriz[i][0] = 4;
			break;
		case 4:
			matriz[i][3] = 4;
			break;
		}
	}
}

void create_matrix(int matriz[4][4])
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			matriz[i][j] = 0;
}

void print_matrix(int matriz[4][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void risca_risca(char *cona)
{
	int i = 0;
	while (cona[i])
	{
		if (i % 4 == 0 && i != 0)
			printf("-");
		printf("%c", cona[i]);
		i++;
	}
	printf("\n");
}

char *tinder(int arr1[], int arr2[], int i, char *strings[])
{
	int m = arr1[i - 1];
	int n = arr2[i - 1];

	printf("Tinder === %d ==== %d\n", m, n);

	switch (m)
	{
	case 1:
		switch (n)
		{
		case 2:
			return strings[0];
			break;
		case 3:
			return strings[1];
			break;
		case 4:
			return strings[2];
			break;
		}
		break;
	case 2:
		switch (n)
		{
		case 1:
			return strings[3];
			break;
		case 2:
			return strings[4];
			break;
		case 3:
			return strings[5];
			break;
		}
		break;
	case 3:
		switch (n)
		{
		case 1:
			return strings[6];
			break;
		case 2:
			return strings[7];
			break;
		}
		break;
	case 4:
		switch (n)
		{
		case 1:
			return strings[8];
			break;
		}
		break;
	}
}

void filtra_merda(char *str, int arr[4], int init, int final)
{
	int i = 0;
	int j = init;
	while (i < 4 && j < final)
	{
		arr[i] = str[j] - '0';
		i++;
		j += 2;
	}
}
