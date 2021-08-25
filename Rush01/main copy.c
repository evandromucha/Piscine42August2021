/*	rush-01.c       */
/*                  */
/*	emucha          */
/*	jcastanh        */
/*	tde-alme        */
/*                  */
/********************/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	g_Matriz[6][6];

void	put_input(char matriz[6][6], char entrada[6])
{
	int	a;

	a = 1;
	while (a <= 4)
	{
		matriz[0][a] = entrada[a - 1] + 48;
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		matriz[5][a] = entrada[a + 3] + 48;
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		matriz[a][0] = entrada[a + 7] + 48;
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		matriz[a][5] = entrada[a + 11] + 48;
		a++;
	}
}

void	fillmatriz(char matriz[6][6])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row <= 5)
	{
		while (col <= 5)
		{
			matriz[row][col] = '0';
			col++;
		}
		col = 0;
		row++;
	}
	matriz[0][0] = 'X';
	matriz[0][5] = 'X';
	matriz[5][0] = 'X';
	matriz[5][5] = 'X';
}

void	ft_putchar(char chr)
{
	write (1, &chr, 1);
}

void	printmatriz(char matriz[6][6])
{	
	int		col;
	int		row;

	col = 0;
	row = 0;
	while (row <= 5)
	{
		while (col <= 5)
		{
			ft_putchar(matriz[row][col]);
			ft_putchar(32);
			col++;
		}
		row++;
		col = 0;
		ft_putchar('\n');
	}
}

int	linhacomquatro(char matriz[6][6])
{
	int	row;
	int	col;

	row = 1;
	col = 0;
	while (row <= 4)
	{
		if (matriz[row][col] == '4')
		{
			col++;
			while (col <= 4)
			{
				matriz[row][col] = col + 48;
				col++;
			}
		}	
		if (matriz[row][col] != '1' && col == 5)
		{
			write(1, "Error", 5);
			return (1);
		}
		col = 0;
		row++;
	}
	return (0);
}

int	colunacomquatro(char matriz[6][6])
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (col <= 4)
	{
		if (matriz[row][col] == '4')
		{
			row++;
			while (row <= 4)
			{
				matriz[row][col] = row + 48;
				row++;
			}
		}
		if (matriz[row][col] != '1' && row == 5)
		{
			write(1, "Error", 5);
			return (1);
		}
		row = 0;
		col++;
	}
	return (0);
}

void	umequatro(char matriz[6][6])
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (col <= 4)
	{	
		if (matriz[row][col] == '1')
		{
			if (row == 0)
				matriz[row + 1][col] = '4';
			if (row == 5)
				matriz[row - 1][col] = '4';			
		}
		if (col == 4 && row == 0)
		{
			row = 5;
			col = 0;
		}
		col++;
	}	

	row = 1;
	col = 0;
	while (row <= 4)
	{	
		if (matriz[row][col] == '1')
		{
			if (col == 0)
				matriz[row][col + 1] = '4';
			if (col == 5)
				matriz[row][col - 1] = '4';			
		}
		if (row == 4 && col == 0)
		{
			col = 5;
			row = 0;
		}
		row++;
	}	
}

void	ft_preenche(char *cbn1, char *cbn2, char *cbn3)
{
	int	linha;
	int conteudo;

	linha = 1;
	
}

void	ft_combina(matriz[6][6])
{
	char	*cbn;

	cbn = malloc (92);
	cbn = "41234132421342314312432114232143243131423241342132143124143224133412231413242134134212432341";
}

int	main(void)
{
	char	matriz[6][6];
//	char	entrada[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	char	entrada[] = {2, 3, 2, 1, 2, 2, 1, 3, 3, 1, 2, 2, 1, 3, 2, 2};

	fillmatriz(matriz);
	put_input(matriz, entrada);
	umequatro(matriz);
	if (linhacomquatro(matriz) == 1)
		return (0);
	if (colunacomquatro(matriz) == 1)
		return (0);
	printmatriz(matriz);
	ft_combina();
	return (0);
}
