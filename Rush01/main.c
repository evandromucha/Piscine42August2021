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

int		g_matriz[6][6];
int 	g_origem;
void	ft_putinput(char entrada[16]);
void	ft_fillmatriz(void);
void	ft_putchar(char chr);
void	ft_printmatriz(void);
void	ft_check_views(void);
int		ft_check_sudoku(int linha, int coluna);
int		ft_sudoku(int origem);

void	ft_putinput(char entrada[16])
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

void	ft_fillmatriz(void)
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
}

void	ft_putchar(char chr)
{
	write (1, &chr, 1);
}

void	ft_printmatriz(void)
{	
	int		col;
	int		row;

	col = 0;
	row = 0;
	while (row <= 5)
	{
		while (col <= 5)
		{
			ft_putchar(g_matriz[row][col] + 48 );
			ft_putchar(32);
			col++;
		}
		row++;
		col = 0;
		ft_putchar('\n');
	}
}

int	ft_view_lf()
{
	int c;
	int l;
	int	max;
	int count;
	int views;

	views = 1;
	count = 1;
	c = 1;
	l = 1;
	while (l <= 4 && g_origem <= 92)
	{
		views = g_matriz[l][0];
		max = g_matriz[l][1];
		while (c <= 4 && max != 4)
		{
			if (g_matriz[l][c+1] > max)
			{
				max = g_matriz[l][c+1];
				count++;
			}
			c++;
		}
		if (views != count)
		{
			g_origem = g_origem + 4;
			ft_sudoku(g_origem);
			l = 1;
			c = 1;
			views = 1;
			count = 1;
		}
		else
		{
			l++;
			c = 1;
			views = 1;
			count = 1;
		}
	}
	if (g_origem > 92)
		return (0);
	else
		return (1);
}

int	ft_view_lr()
{
	int c;
	int l;
	int	max;
	int count;
	int views;

	views = 1;
	count = 1;
	c = 4;
	l = 1;
	while (l <= 4 && g_origem <= 92)
	{
		views = g_matriz[l][0];
		max = g_matriz[l][1];
		while (c >= 1 && max != 4)
		{
			if (g_matriz[l][c+1] > max)
			{
				max = g_matriz[l][c+1];
				count++;
			}
			c--;
		}
		if (views != count)
		{
			g_origem = g_origem + 4;
			ft_sudoku(g_origem);
			l = 1;
			c = 1;
			views = 1;
			count = 1;
		}
		else
		{
			l++;
			c = 1;
			views = 1;
			count = 1;
		}
	}
	if (g_origem > 92)
		return (0);
	else
		return (1);
}

int	ft_check_sudoku(int linha, int coluna)
{
	int c;
	int l;

	c = coluna;
	l = linha;
	if (coluna == 1 && linha == 1)
		return(1);
	while (c > 1)
		if (g_matriz[linha][coluna] == g_matriz[linha][--c])
			return (0);
	while (l > 1)
		if (g_matriz[linha][coluna] == g_matriz[--l][coluna])
			return (0);
	return(1);
}

void	ft_check_views(void)
{
	if (ft_view_lf() == 0)
		write(1, "Error", 5);
	if (ft_view_lr() == 0)
		write(1, "Error", 5);
//	ft_view_rd();
//	ft_view_ru();
}

int	ft_sudoku(int origem)
{
	char	*cbn;
	int		linha;
	int		coluna;
	int		posicao;

	cbn = malloc (96);
	cbn = "123441234132421342314312432114232143243131423241342132143124143224133412231413242134134212432341";
//	cbn = "123441234132421342314312432114232143243131423241342132143124143224133412231413242134134212432341";
	
	linha = 1;
	coluna = 1;
	posicao = origem;
//	valor = 88;
//	printf("%c %c %c %c\n", cbn[valor], cbn[valor + 1], cbn[valor + 2], cbn[valor + 3]);
	while (linha <= 4)
	{	
		while (coluna <= 4)
		{
			g_matriz[linha][coluna] = cbn[posicao] - 48;
			while (ft_check_sudoku(linha, coluna) == 0)
			{
				posicao ++;
				g_matriz[linha][coluna] = cbn[posicao] - 48;
			}
			g_matriz[linha][coluna] = cbn[posicao] - 48;
			coluna++;
			posicao = origem;			
		}
		coluna = 1;
		linha++;
	posicao = posicao + 4;
	}
	ft_printmatriz();
	return (0);
}



int	main(void)
{
	char	entrada[16] = {2, 3, 2, 1, 2, 2, 1, 3, 3, 1, 2, 2, 1, 3, 2, 2};
//	char	entrada[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};	
	
	g_origem = 0;
	ft_fillmatriz();
	ft_putinput(entrada);
	ft_sudoku(0);
	ft_check_views();
	ft_printmatriz();
	return (0);
}
