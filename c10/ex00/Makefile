CC = clang

OPT = -O

CFLAGS = -Wall -Wextra
DEPFLAGS = -MP -MD

BINARY = ft_display_file.out
SRCS = *.c

OBJECTS = $(patsubst %.c, %.o, $(SRCS))
DEPFILES = $(patsubst %.c, %.d, $(SRCS))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) $(CFLAGS) $(DEPFLAGS) $(OPT) -o $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) $(DEPFLAGS) $(OPT) -c $< -o $@

clean:
	rm -rf *.d *.o

fclean:
	rm -rf *.d *.o *.out 

re: fclean all

rec: fclean all clean
