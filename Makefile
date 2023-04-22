NAME = FTV
CFLAGS = c++ -std=c++2a 

FILES = Srcs/main.cpp Srcs/FTV.cpp

all : $(NAME)

$(NAME): $(FILES)
	$(CFLAGS) $(FILES) -o  $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re clean