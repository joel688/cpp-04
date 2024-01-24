NAME					=	JeVeuxBrulerLeMonde

CXX						=	c++
CXXFLAGS				=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS					=	main.cpp\
								Class/Animal/Animal.cpp\
								Class/Cat/Cat.cpp\
								Class/Dog/Dog.cpp\
								Class/WrongAnimal/WrongAnimal.cpp\
								Class/WrongCat/WrongCat.cpp\
								Class/Brain/Brain.cpp

OBJS					=	$(SRCS:.cpp=.o)

all						:	$(NAME)

$(NAME)					:	$(OBJS)	$(HDRS)
							$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean					:
							rm -rf $(OBJS)

fclean					:	clean
							rm -rf $(NAME)

re						:	fclean all

.PHONY					:	all clean fclean re
