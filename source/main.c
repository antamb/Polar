/*
** main.c for main.c in /home/aidara_b/PROJETS_MATHS/105polar
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 12 20:40:26 2009 anta-m-bayang aidara
** Last update Tue Jan 20 00:26:31 2009 anta-m-bayang aidara
*/

#include "105polar.h"
#include "mlx.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

int		main(int ac, char **av)
{
  t_pixel	pix;

  if (my_get_nbr(av[1]) >= 5)
    {
      my_putstr("Bad option\n\b");
      exit(0);
    }
  pix.mlx = mlx_init();
  pix.win = mlx_new_window(pix.mlx, SIZE_WIN, SIZE_WIN, "/***/105polar/***/");
  pix.img = mlx_new_image(pix.mlx, SIZE_WIN, SIZE_WIN);
  pix.data = mlx_get_data_addr(pix.img, &pix.bit, &pix.line, &pix.endian);
  if (my_get_nbr(av[1]) == 1)
    courbe1(&pix);
  else if (my_get_nbr(av[1]) == 2)
    courbe2(&pix);
  else if (my_get_nbr(av[1]) == 3)
    courbe3(&pix);
  else if (my_get_nbr(av[1]) == 4)
    courbe4(&pix);
  else if (!strcmp(av[1], "-Bonus"))
    courbe5(&pix);
  mlx_put_image_to_window(pix.mlx, pix.win, pix.img, 0, 0);
  mlx_key_hook(pix.win, &gerekey, &pix);
  mlx_expose_hook(pix.win, &gerexpose, &pix);
  mlx_loop(pix.mlx);
  return (0);
}



