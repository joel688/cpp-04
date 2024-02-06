NAME		=	Interface_Recap

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS		=	main.cpp\
					./Class/Ice/Ice.cpp\
					./Class/Cure/Cure.cpp\
					./Class/AMateria/AMateria.cpp\
					./Class/Character/Character.cpp\
					./Class/MateriaSource/MateriaSource.cpp\

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HDRS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
