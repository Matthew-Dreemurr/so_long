#include "mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	test(int keycode, t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	printf("test\n");
	return (0);
}

int	close(int keycode, t_vars *vars)
{
	printf("Close\n");
	return (0);
}

void	hook_init(t_vars *vars)
{
	mlx_hook(vars->win, 17, 1L<<0, close, vars);
	mlx_hook(vars->win, 2, 1L<<0, test, vars);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	hook_init(&vars);//init inout
	mlx_loop(vars.mlx);//start loop
	printf("test\n");
}
