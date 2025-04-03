NAME	=	phonebook
CC		=	c++
WFLAGS	=	-Wall -Wextra -Werror -Wpedantic
WFLAGS	+=	-std=c++98 -g3
CC		+=	$(WFLAGS)
FLAGS	=	-I./include

BUI_DIR	=	build/

SRC_FIL	=	main \
			contact \
			phonebook

SRC		=	$(addsuffix .cpp, $(SRC_FIL))
OBJ		=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))

OBJF	=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)

	@mkdir -p $(dir $@)
	@echo "$(PENDING)Compiling $<..."
	$(CC) $(FLAGS)  -c $< -o $@

$(OBJF):
	touch $(OBJF)

clean:
	rm -rf $(BUI_DIR) $(OBJF)

fclean: clean
	rm -rf $(NAME)

re: fclean all
