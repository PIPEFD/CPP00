NAME		=   Phonebook
OBJ_DIR		=	objs/

SRC_FILES	=	Contact.cpp \
				Contact.hpp \
				main.cpp \
				Phonebook.cpp \
				Phonebook.hpp

OBJS_FILES	=	$(patsubst %.cpp,$(OBJ_DIR)%.o,$(SRC_FILES))

CC			= c++ -std=c++98 -g3
FLAGS		= -Wall -Wextra -Werror
RM			= rm -rf

DEF_COLOR 	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;31m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE 		= \033[0;94m
MAGENTA 	= \033[0;95m
CYAN 		= \033[0;96m
WHITE 		= \033[0;97m
CLEAR 		= \033[0m
OKLOGO 		= \033[80G\033[32m[OK]\033[0m\n

all:		$(NAME)

build_message:
	@echo "$(BLUE)COMPILING...$(CLEAR)"

$(NAME): $(OBJS_FILES)
	$(CC) -o $(NAME) $(FLAGS) $(OBJS_FILES)
	@echo "$(GREEN)MEGAPHONE COMPILED SUCCESSFULLY!$(CLEAR)"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)FILES REMOVED!$(DEF_COLOR)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) REMOVED!$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re
