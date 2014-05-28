/*
** gerexpose.c for gereexpose.c in /home/aidara_b/fdf
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Sat Dec  6 11:59:29 2008 anta-m-bayang aidara
** Last update Tue Jan 13 04:44:00 2009 anta-m-bayang aidara
*/

#include "105polar.h"
#include "mlx.h"

int		gerexpose(void *param)
{
  t_pixel	*pix;

  pix = (t_pixel *) param;
  mlx_clear_window(pix->mlx, pix->win);
  mlx_put_image_to_window(pix->mlx, pix->win, pix->img, 0, 0);
  return (1);
}
