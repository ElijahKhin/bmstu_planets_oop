# --- PROJECT SQLite Database Creation ---
NAME = planets.db
SRC = planets.sql

GREEN = \033[32m
YELLOW = \033[0;33m
RED = \033[0;31m
GRAY = \033[2;37m
CURSIVE = \033[3m
NO_COLOR = \x1b[0m
RESET = \033[0m

all: $(NAME)

$(NAME): fclean	
	@sqlite3 $(NAME) < $(SRC)
	@printf "\n$(CURSIVE)$(GREEN)$(NAME)$(RESET)$(CURSIVE) is up and running...$(RESET)\n"

fclean:
	@rm -rf $(NAME)
.PHONY: fclean
