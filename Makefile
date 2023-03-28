NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
RM		=	rm -f
SRCS	=	ft_isalpha.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_strlen.c\
			ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c\
			ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
			ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c\
			ft_split.c
SRCBONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCBONUS:.c=.o)

LIB		=	ar rcs
INCLUDE	=	libft.h

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)  $(OBJS) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJS_BONUS) $(OBJS)

clean:
	@$(RM) $(OBJS_BONUS) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

reb:		fclean bonus

.PHONY: all bonus clean fclean re
