##
## Makefile for Makefile in /home/aidara_b/PROJETS_MATHS/104light/source
## 
## Made by anta-m-bayang aidara
## Login   <aidara_b@epitech.net>
## 
## Started on  Mon Dec 29 21:08:05 2008 anta-m-bayang aidara
## Last update Mon Jan 19 23:55:40 2009 anta-m-bayang aidara
##

CC      = gcc

SRC	= main.c gerekey.c gerexpose.c put_pixel_to_image.c courbe5.c courbe1.c courbe2.c courbe3.c courbe4.c 

OBJ     = $(SRC:.c=.o)

CFLAGS  = -I../include/

RM	= rm -f

all     :$(OBJ) 
	@cp $(OBJ) ../
	@$(RM) $(OBJ)

clean   :
	@$(RM) $(OBJ) *~ *# *.o

fclean  :clean
	@$(RM) $(NAME)  

re      :fclean all
