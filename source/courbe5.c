/*
** courbe5.c for courbe5.c in /home/aidara_b/PROJETS_MATHS/105polar/source
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 19 23:46:50 2009 anta-m-bayang aidara
** Last update Tue Jan 20 00:19:57 2009 anta-m-bayang aidara
*/

#include "mlx.h"
#include "105polar.h"
#include <math.h>

void            courbe5(t_pixel *pix)
{
  double        angle;
  double        rad;
  double        x;
  double        y;

  angle = 0.00;
  while (angle < 1080)
    {
      rad = (angle * M_PI) / 180;
      x = (rad * cos(rad)) * 20;
      x = x + (SIZE_WIN / 2);
      y = (rad * sin(rad)) * 20;
      y = y + (SIZE_WIN / 2);
      put_pixel_to_image(pix, x, y, 0xff0000);
      angle += 0.01;
    }
}
