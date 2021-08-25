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

int	g_matriz[6][6];
/*
char	g_combina121 = "4123";
char	g_combina131 = "4132";
char	g_combina122 = "4213";
char	g_combina132 = "4231";
char	g_combina133 = "4312";
char	g_combina141 = "4321";
char	g_combina221 = "1423";
char	g_combina222 = "2143";
char	g_combina231 = "2431";
char	g_combina232 = "3421";
char	g_combina211 = "3214";
char	g_combina212 = "3124";
char	g_combina233 = "1432";
char	g_combina225 = "2413";
char	g_combina226 = "3412";
char	g_combina311 = "2314";
char	g_combina312 = "1324";
char	g_combina313 = "2134";
char	g_combina321 = "1342";
char	g_combina322 = "1243";
char	g_combina323 = "2341";
char	g_combina411 = "1234";
*/
void	put_input(int entrada[6])
{
	int	a;

	a = 1;
	while (a <= 4)
	{
		g_matriz[0][a] = entrada[a - 1];
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		g_matriz[5][a] = entrada[a + 3];
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		g_matriz[a][0] = entrada[a + 7];
		a++;
	}
	a = 1;
	while (a <= 4)
	{
		g_matriz[a][5] = entrada[a + 11];
		a++;
	}
}

void	fillmatriz()
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row <= 5)
	{
		while (col <= 5)
		{
			g_matriz[row][col] = 0;
			col++;
		}
		col = 0;
		row++;
	}
/*
	g_matriz[0][0] = 'X';
	g_matriz[0][5] = 'X';
	g_matriz[5][0] = 'X';
	g_matriz[5][5] = 'X';
*/
}

void	ft_putchar(char chr)
{
	write (1, &chr, 1);
}

void	printmatriz()
{	
	int		col;
	int		row;

	col = 0;
	row = 0;
	while (row <= 5)
	{
		while (col <= 5)
		{
			ft_putchar(g_matriz[row][col]);
			ft_putchar(' ');
			col++;
		}
		row++;
		col = 0;
		ft_putchar('\n');
	}
}

int	linhacomquatro()
{
	int	row;
	int	col;

	row = 1;
	col = 0;
	while (row <= 4)
	{
		if (g_matriz[row][col] == 4)
		{
			col++;
			while (col <= 4)
			{
				g_matriz[row][col] = col + 48;
				col++;
			}
		}	
		if (g_matriz[row][col] != 1 && col == 5)
		{
			write(1, "Error", 5);
			return (1);
		}
		col = 0;
		row++;
	}
	return (0);
}

int	colunacomquatro()
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (col <= 4)
	{
		if (g_matriz[row][col] == '4')
		{
			row++;
			while (row <= 4)
			{
				g_matriz[row][col] = row + 48;
				row++;
			}
		}
		if (g_matriz[row][col] != '1' && row == 5)
		{
			write(1, "Error", 5);
			return (1);
		}
		row = 0;
		col++;
	}
	return (0);
}

void	umequatro()
{
	int	row;
	int	col;

	row = 0;
	col = 1;
	while (col <= 4)
	{	
		if (g_matriz[row][col] == '1')
		{
			if (row == 0)
				g_matriz[row + 1][col] = '4';
			if (row == 5)
				g_matriz[row - 1][col] = '4';			
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
		if (g_matriz[row][col] == '1')
		{
			if (col == 0)
				g_matriz[row][col + 1] = '4';
			if (col == 5)
				g_matriz[row][col - 1] = '4';			
		}
		if (row == 4 && col == 0)
		{
			col = 5;
			row = 0;
		}
		row++;
	}	
}
/*
void	ft_combinacoes()
{
	char	g_combina121;

	char texte[] = "TESTE";

	g_combina121 = "4123";
	g_combina[131] = "4132";
	g_combina[122] = "4213";
	g_combina[132] = "4231";
	g_combina[133] = "4312";
	g_combina[141] = "4321";
	g_combina[221] = "1423";
	g_combina[222] = "2143";
	g_combina[231] = "2431";
	g_combina[223] = "3142";
	g_combina[224] = "3241";
	g_combina[232] = "3421";
	g_combina[211] = "3214";
	g_combina[212] = "3124";
	g_combina[233] = "1432";
	g_combina[225] = "2413";
	g_combina[226] = "3412";
	g_combina[311] = "2314";
	g_combina[312] = "1324";
	g_combina[313] = "2134";
	g_combina[321] = "1342";
	g_combina[322] = "1243";
	g_combina[323] = "2341";
	g_combina[411] = "1234";
}

void	ft_teste()
{
	int	coluna;
	int linha;

	coluna = 0;
	linha = 1;

	if (g_matriz[coluna][linha] == 1)

}
*/
int	ft_check(linha, coluna)
{
	int	a;

	a = g_matriz[linha][coluna];
	if (coluna == 1 && linha == 1)
		return(1);
	while (coluna > 1)
	{
		if (a == g_matriz[linha][--coluna])
			return (0);	
	}
	while (linha > 1)
	{
		if (a == g_matriz[--linha][coluna])
			return (0);	
	}
	return(1);
}

void	ft_sudoku()
{
	int		linha;
	int		coluna;
	int		valor;

	linha = 1;
	coluna = 1;
	valor = 1;

	while (linha <= 4)
	{	
		while (coluna <= 4)
		{
			g_matriz[linha][coluna] = valor + 48;
			while (ft_check(linha, coluna) == 0)
				valor ++;
			coluna++;
		}
		valor = 1;
		coluna = 1;
		linha++;
	}
}

int	main(void)
{
//	int	entrada[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int	entrada[] = {2, 3, 2, 1, 2, 2, 1, 3, 3, 1, 2, 2, 1, 3, 2, 2};

	fillmatriz();
	put_input(entrada);
//	umequatro();
//	if (linhacomquatro() == 1)
//		return (0);
//	if (colunacomquatro() == 1)
//		return (0);
//	ft_sudoku();
	printmatriz();
//	ft_combinacoes();
	return (0);
}
