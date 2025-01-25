NAME	=	megaphone
CC		=	clang++

BUI_DIR	=	build/

SRC_FIL	=	megaphone

SRC		=	$(addsuffix .cpp, $(SRC_FIL))
OBJ		=	$(addprefix $(BUI_DIR), $(addsuffix .o, $(SRC_FIL)))

OBJF	=	.cache_exists

$(NAME): $(OBJ)
	$(CC) $(SRC) -o $(NAME)

$(BUI_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)

	@mkdir -p $(dir $@)
	@echo "$(PENDING)Compiling $<..."
	@$(CC) $(FLAGS)  -c $< -o $@

$(OBJF):
	touch $(OBJF)

all: $(NAME)

clean:
	rm -rf $(BUI_DIR)

fclean: clean
	rm $(NAME)

re: fclean all
