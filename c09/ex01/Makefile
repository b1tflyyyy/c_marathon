BINARY=libft.a
CODEDIRS=srcs
INCDIRS=includes

CC=clang
OPT=-O0
DEPFLAGS=-MP -MD
CFLAGS=-Wall -Wextra -g $(foreach D, $(INCDIRS), -I$(D)) $(OPT) $(DEPGLAGS)

CFILES=$(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c))

OBJECTS=$(patsubst %.c, %.o, $(CFILES))
DEPFILES=$(patsubst %.c, %.d, $(CFILES))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	ar rcs  $@ $^
%.o: %.c
	$(CC) -o -c $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(BINARY) $(OBJECTS)

re: fclean all
