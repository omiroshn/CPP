# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/11 16:38:37 by omiroshn          #+#    #+#              #
#    Updated: 2018/04/11 16:38:37 by omiroshn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
FILES = main Base A B C
HDRS = Base.hpp A.hpp B.hpp C.hpp
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -o $(NAME)
%.o: %.cpp $(HDRS)
	clang++ -o $@ $(FLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
