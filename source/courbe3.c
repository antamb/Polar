/*
** courbe3.c for courbe3.c in /home/aidara_b/PROJETS_MATHS/105polar/source
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 12 23:51:37 2009 anta-m-bayang aidara
** Last update Tue Jan 20 00:11:02 2009 anta-m-bayang aidara
*/

#include "mlx.h"
#include "105polar.h"
#include <math.h>

void            courbe3(t_pixel *pix)
{
  double        angle;
  double        rad;
  double        x;
  double        y;

  angle = 0.00;
  while (angle < 3600)
    {
      rad = (angle * M_PI) / 180;
      x = ((cos(7 * rad / 10) + 7 / 3) * cos(rad)) * 100;
      x = x + (SIZE_WIN / 2);
      y = ((cos(7 * rad / 10) + 7 / 3) * sin(rad)) * 100;
      y = y + (SIZE_WIN / 2);
      put_pixel_to_image(pix, x, y, 0xffff00);
      angle += 0.01;
    }
}
