#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>

#define MISSING_PARAM "[-] missing -c or other parameters"

void	ft_putstr(char *str, int c);
int	gl(char *str);
int	check_if_dir(char *pathname);
void	display_file(char *pathname, int c);
int	ft_strcmp(char *s1, char *s2);
int	is_space(char *str);
int	ft_atoi(char *str);
void	flush_buffer(char *buff);
int		is_number(char *str);
int		arg_checks(int argc, char *argv[]);
int	getSizeToAllocate(char *pathname);
