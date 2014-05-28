/*
** courbe2.c for courbe2.c in /home/aidara_b/PROJETS_MATHS/105polar/source
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 12 23:44:20 2009 anta-m-bayang aidara
** Last update Tue Jan 20 00:10:41 2009 anta-m-bayang aidara
*/

#include "105polar.h"
#include "mlx.h"
#include <math.h>

void            courbe2(t_pixel *pix)
{
  double        angle;
  double        rad;
  double        x;
  double        y;

  angle = 0.00;
  while (angle < 3600)
    {
      rad = (angle * M_PI) / 180;
      x = ((cos(5 * rad / 4) + 1 / 3) * cos(rad)) * 300;
      x = x + (SIZE_WIN / 2);
      y = ((cos(5 * rad / 4) + 1 / 3) * sin(rad)) * 300;
      y = y + (SIZE_WIN / 2);
      put_pixel_to_image(pix, x, y, 0x00ff00);
      angle += 0.01;
    }
}
