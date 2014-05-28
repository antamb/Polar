/*
** courbe1.c for courbe1.c in /home/aidara_b/PROJETS_MATHS/105polar/source
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 12 21:07:12 2009 anta-m-bayang aidara
** Last update Tue Jan 20 00:13:14 2009 anta-m-bayang aidara
*/

#include "105polar.h"
#include <math.h>

void		courbe1(t_pixel *pix)
{
  double	angle;
  double	rad;
  double	x;
  double	y;
  
  angle = 0.00;
  while (angle < 3600)
    {
      rad = (angle * M_PI) / 180;
      x = (cos((7 * rad) / 2) * cos(rad)) * 300;
      x = x + (SIZE_WIN / 2);
      y = (cos((7 * rad) / 2) * sin(rad)) * 300;
      y = y + (SIZE_WIN / 2);
      put_pixel_to_image(pix, x, y, 0x0000ff);
      angle += 0.01;
    }
}
