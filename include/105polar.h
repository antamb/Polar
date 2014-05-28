/*
** 105polar.h for 105polar.h in /home/aidara_b/PROJETS_MATHS/105polar/include
** 
** Made by anta-m-bayang aidara
** Login   <aidara_b@epitech.net>
** 
** Started on  Mon Jan 12 21:52:08 2009 anta-m-bayang aidara
** Last update Mon Jan 19 23:55:01 2009 anta-m-bayang aidara
*/

#define SIZE_WIN 800
#define ECHAP 65307

typedef struct  s_pixel
{
  char          *data;
  int           line;
  int           bit;
  int           endian;
  unsigned int  color;
  void          *mlx;
  void          *img;
  void          *win;
  int           keycode;
  int           nbel;
}               t_pixel;

void	courbe1(t_pixel *pix);
void	courbe2(t_pixel *pix);
void	courbe3(t_pixel *pix);
void	courbe4(t_pixel *pix);
void	courbe5(t_pixel *pix);
int	gerekey(int keycode, void *param);
int	gerexpose(void *param);
int     put_pixel_to_image(t_pixel *pix, int x, int y, unsigned int col);

