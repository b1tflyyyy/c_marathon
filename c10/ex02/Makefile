CC = clang
OPT = -O0

CFLAGS = -Wall -Wextra
DEPFLAGS = -MP -MD

BINARY = ft_tail.out
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
