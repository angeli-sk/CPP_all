# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: akramp <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:10:32 by akramp        #+#    #+#                  #
#    Updated: 2020/10/06 08:10:19 by akramp        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = clang++
FLAGS = -Wall -Werror -Wextra

#✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* SOURCES ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:#

SRC = 	Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp main.cpp
SRC2 = 	Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp main2.cpp

#✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:* COLORS ✧*:･ﾟ✧: *✧･ﾟ:* ✧ *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:#

ORANGE	= 	\033[38;5;208m
YELLOW2	= \033[38;5;221m
WHITE	= \033[38;5;230m
BLUE		= \033[38;5;75m

#✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:*  RULES  ✧*:･ﾟ✧: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ﾟ: *✧･ﾟ:#

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "$(ORANGE)\n✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:*✧✧*:･ﾟ✧✧･"
	@echo "$(BLUE)✨\t    ᴄᴏᴍᴘɪʟᴀᴛɪᴏɴ ᴅᴏɴᴇ!\t\t✨"
	@echo "$(ORANGE)✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:*✧✧*:･ﾟ✧✧･"

test:
	@$(CC) $(FLAGS) $(SRC2) -o $(NAME)
stars:
	@echo "$(BLUE)\n✧･ﾟ: *✧･ﾟ:*  *:･ﾟ✧*:･ﾟ✧✧･ *✧･ﾟ:*✧✧*:･ﾟ✧✧･\n"

clean:
	@echo "$(ORANGE)🌻\t    🄲 🄻 🄴 🄰 🄽 🄸 🄽 🄶 ...\t\t💫$(WHITE)\n"
	rm -f ./*~ ./*# a.out $(OBJ)
	@echo "\n$(YELLOW2)✨\t    Cleaning Done!$(WHITE)\t\t⚡"

fclean: clean stars
	@echo "$(ORANGE)🌻\t    ℝ𝕖𝕞𝕠𝕧𝕚𝕟𝕘 $(NAME)...\t💫\n$(WHITE)"
	rm -f $(NAME)
	@echo "\n$(YELLOW2)✨\t    Removed $(NAME)!$(WHITE)\t\t⚡"

re: fclean all