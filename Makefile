
SRCS = src/check_duplicate.c src/check_max.c src/ft_atoi.c src/ft_initar.c src/ft_isnum.c src/ft_lstadd_back.c src/ft_lstadd_front.c src/ft_lstlast.c src/ft_strlen.c src/ft_strncmp.c src/get_stack_a.c src/is_sorted.c src/moves1.c src/moves2.c src/new_node.c src/push_swap.c src/sar.c src/sort_all.c src/sort_big.c src/utils.c
BNS_SRCS = get_next_line/get_next_line.c get_next_line/get_next_line.h get_next_line/get_next_line_utils.c ls src/check_duplicate.c src/check_max.c src/checker.c src/ft_atoi.c src/ft_initar.c src/ft_isnum.c src/ft_lstadd_back.c src/ft_lstadd_front.c src/ft_lstlast.c src/ft_strlen.c src/ft_strncmp.c src/get_stack_a.c src/is_sorted.c src/moves1.c src/moves2.c src/new_node.c src/push_swap.h 
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g
CC = gcc
NAME = push_swap
OBJS = $(SRCS:.c=.o)
BNS_OBJ = $(BNS_SRCS:.c=.o)
NAME_O = checker

all : $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)
bonus : $(BNS_OBJ)
		$(CC) $(FLAGS) $(BNS_SRCS) -o $(NAME_O)
clean :
		rm -f $(OBJS) $(BNS_OBJ)
fclean : clean
	rm -f $(NAME)
bclean : clean
	rm -f $(NAME_O)
re : fclean all
bre : bclean bonus
