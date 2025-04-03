NAME	=	megaphone
CC		=	c++
WFLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
CC		+=	$(WFLAGS)

BUI_DIR	=	build/

SRC_FIL	=	megaphone

SRC		=	$(addsuffix .cpp, $(SRC_FIL))
OBJ		=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))

OBJF	=	.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking $<..."
	$(CC) $(OBJ) -o $(NAME)

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)

	@mkdir -p $(dir $@)
	@echo "Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJF):
	@touch $(OBJF)

clean:
	@echo "Removing build files..."
	@rm -rf $(BUI_DIR) $(OBJF)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm $(NAME)

re: fclean all
