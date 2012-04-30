##
## Makefile for minitalk in /home/fillin_j//minitalk
## 
## Made by jennifer fillinger
## Login   <fillin_j@epitech.net>
## 
## Started on  Thu Mar  8 16:43:29 2012 jennifer fillinger
## Last update Sun Mar 18 23:16:29 2012 jennifer fillinger
##

COLOR_OFF =	\x1b[0m
COLOR =		\x1b[32;01m
PROG_OK =	$(COLOR)[Program Compiled]$(COLOR_OFF)

CC =		gcc

RM =		rm -f

CLIENT =	./client/client

SERVER =	./server/server

SRCLIENT =	./client/client.c \
		./client/my_getnbr.c \
		chest.c

OBJCLIENT =	$(SRCLIENT:.c=.o)

SRCSERVER =	./server/server.c \
		./server/my_put_nbr.c \
		chest.c
OBJSERVER =	$(SRCSERVER:.c=.o)

all:		$(CLIENT) $(SERVER)

$(CLIENT):	$(OBJCLIENT)
		$(CC) $(OBJCLIENT) -o $(CLIENT)
		@echo -e "$(PROG_OK)"

$(SERVER):	$(OBJSERVER)
		$(CC) $(OBJSERVER) -o $(SERVER)
		@echo -e "$(PROG_OK)"
clean:
		$(RM) $(OBJCLIENT) $(OBJSERVER)
fclean:		clean
		$(RM) $(CLIENT) $(SERVER)
coffee:
	@echo "         {"
	@echo "      {   }"
	@echo "       }_{ __{"
	@echo "    .-{   }   }-."
	@echo "   (   }     {   )"
	@echo "   |'-.._____..-'|"
	@echo "   |             ;--."
	@echo "   |            (__  \\"
	@echo "   |             | )  )"
	@echo -e "   | $(COLOR)   Hot    $(COLOR_OFF)  |/  /"
	@echo -e "   |  $(COLOR) coffee $(COLOR_OFF)   /  /"
	@echo "   |            (  /"
	@echo "   \             Y'"
	@echo "    '-.._____..-'"

re:		fclean all