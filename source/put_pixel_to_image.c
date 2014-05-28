/*
** put_pixel_to_image.c for put_pixel_to_image.c in /home/aidara_b/fdf
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Wed Dec  3 18:23:15 2008 anta-m-bayang aidara
** Last update Mon Jan 12 22:36:37 2009 anta-m-bayang aidara
*/

#include "105polar.h"
#include "mlx.h"
#include <strings.h>

int	put_pixel_to_image(t_pixel *pix, int x, int y, unsigned int col)
{
  int	positpix;

  if (x < SIZE_WIN && y < SIZE_WIN && x >= 0 && y >= 0)
    {
      positpix = x * (pix->bit / 8) + y * pix->line;
      bcopy(&col, pix->data + positpix, (pix->bit / 8));
    }
  return (0);
}
