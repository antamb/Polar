##
## Makefile for Makefile in /home/aidara_b/PROJETS_MATHS/104light
## 
## Made by anta-m-bayang aidara
## Login   <aidara_b@epitech.net>
## 
## Started on  Mon Dec 22 19:39:56 2008 anta-m-bayang aidara
## Last update Tue Jan 13 00:48:37 2009 anta-m-bayang aidara
##

CC	= gcc 

NAME	= 105polar

RM	= rm -f

OBJ	= *.o

LDFLAGS	= -L./lib/ -L/usr/X11R6/lib/ -lmy -lm -lmlx -lX11 -lXext

CFLAGS	= -I./include/

all	: 
	@cd source && $(MAKE)
	@$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	@$(RM) $(OBJ)

clean	:
	@$(RM) $(OBJ) *# *~ *.o

fclean	:clean
	@$(RM) $(NAME)	

re	:fclean all