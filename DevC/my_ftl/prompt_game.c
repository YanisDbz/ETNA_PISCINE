char  	*readLine();

int	prompt_game()
{
	char *start;

	my_putstr_color("BOLD", "Si tu veux commencer a jouer TAPE start, Pour quitter TAPE quit :");
	start = readLine();
	if(my_strcmp(start, "quit") == 0)
	{
		my_putstr_color("BMAGENTA", "Adieu jeune joueur!\n");
		return 0;
	}
	else
		my_putstr_color("BRED", "Non ecris ce que je te demande!\n");
	prompt_game();
}