/*
** gerekey.c for gerekey.c in /home/aidara_b/fdf
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Sat Dec  6 11:51:08 2008 anta-m-bayang aidara
** Last update Tue Jan 13 04:44:10 2009 anta-m-bayang aidara
*/

#include "mlx.h"
#include "105polar.h"

int		gerekey(int keycode, void *param)
{
  t_pixel	*pix;

  pix = (t_pixel *) param;
  if (keycode == ECHAP)
    {
      mlx_destroy_window(pix->mlx, pix->win);
      exit(-1);
    }
  pix->keycode = keycode;
  return (1);
}
