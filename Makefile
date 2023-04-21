NAME = FTV
CFLAGS = c++ -std=c++2a 

FILES = Srcs/main.cpp Srcs/FTV.cpp

# OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME):
	$(CFLAGS) $(FILES) -o $(NAME)

# %.o: %.cpp
# 	@$(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean all fclean re