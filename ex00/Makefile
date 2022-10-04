#==============================================================================#
#..............................................................................#
#...............................DECLARATIONS...................................#
#..............................................................................#
#==============================================================================#

## Compilation

NAME	=	convert

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

## Sources

SRCDIR	=

SRCFILE	=	main.cpp Converter.cpp ANumber.cpp CharNumber.cpp IntNumber.cpp\
			FloatNumber.cpp DoubleNumber.cpp

SRC		=	$(addprefix $(SRCDIR), $(SRCFILE))

INCL_DIR	=

DEPS		=	$(wildcard $(INCL_DIR)*.hpp)

## Objects

OBJDIR	=	obj/

OBJ		=	$(addprefix $(OBJDIR), $(SRC:.cpp=.o))

#==============================================================================#
#..............................................................................#
#....................................RULES.....................................#
#..............................................................................#
#==============================================================================#

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	$(SRCDIR)%.cpp Makefile $(DEPS)
				mkdir -p $(OBJDIR)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf $(OBJ)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
