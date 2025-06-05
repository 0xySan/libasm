SRCS_FILE = ft_strlen.s ft_write.s ft_strcmp.s ft_read.s ft_strcpy.s ft_strdup.s

SRCS = $(addprefix ./,$(SRCS_FILE))

OBJ = $(SRCS:.s=.o)

NAME = libasm.a

all: $(NAME)

$(NAME): $(OBJ)
		@ar rcs $@ $(OBJ)

%.o: %.s
		@nasm -f elf64 $< -o $@

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
