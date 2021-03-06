#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_cinstr(char *str);
void	ft_putstr(char *str);
int		ft_is_number(char c);
int		ft_is_spaced(char c);
void	ft_putchar(char c);
char	*ft_strchar(char *str, char to_find);
char	*ft_strstr(char *str, char *to_find);
int		ft_valid_input(char *argv);
char	*ft_insrc(char *str, char *to_find);
char	*ft_stread(char *buffer);

#endif
