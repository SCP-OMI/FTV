NAME = FTV
CFLAGS = c++ -std=c++2a 

FILES = Srcs/main.cpp Srcs/FTV.cpp

OBJS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) 
	$(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : clean all fclean re