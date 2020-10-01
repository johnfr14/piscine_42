

void ft_putstr(char *str);
int ft_strlen(char *str);

int verif_argv(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}

	if (ft_strlen(argv[1]) < 1 )
	{
		ft_putstr("Error\n");
		return (0);
	}

	i = 0;
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] != '\0' && (argv[1][i] >= '1' && argv[1][i] <= '4'))
		{
			i++;
			if(argv[1][i] == ' ')
				i++;
			else if (argv[1][i] != '\0' && argv[1][i] != ' ')
			{
				ft_putstr("Error\n");
				return (0);
			}
		}
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	return (1);
}
