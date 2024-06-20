# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aklein <aklein@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 17:15:14 by aklein            #+#    #+#              #
#    Updated: 2024/06/21 01:15:02 by aklein           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC					=	c++
CC_STRICT 			=	$(CC) $(CCF_STRICT)
DB_FLAGS			=	-g
OBJ_DIR				=	./obj
SRC_DIR				=	.

CCF_STRICT			=	-Wall -Wextra -Werror -g

SRCS				=	Zombie.cpp \
						newZombie.cpp \
						randomChump.cpp \
						main.cpp

OBJECTS				=	$(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

vpath %.cpp $(SRC_DIR)

################################################################################
# REQUIRED
################################################################################

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC_STRICT) $(OBJECTS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC_STRICT) -c $< -o $@

re: fclean all

################################################################################
# CLEAN
################################################################################

clean:
	rm -rf ./obj

fclean: clean
	rm -rf $(NAME)

################################################################################
# PHONY
################################################################################

.PHONY: all re clean fclean run
