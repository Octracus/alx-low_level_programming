/**
 * print_chessboard2 - prints the chessboard using while loop
 * a: 2D array representing the chessboard
 */
void print_chessboard2(char (*a)[8])
{
	int i = 0, j;
   
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			putchar(a[i][j++]);
		putchar('\n');
		i++;
	}
}
