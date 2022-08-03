GCC = g++ 
CFLAGS = -g -Wall
EXEC = main.exe
OBJS = main5.o
DEPS = 

%.o: %.c $(DEPS)
	$(GCC) -c -o $@ $< $(CFLAGS)

all: $(OBJS)
	$(GCC) $(CFLAGS) -o $(EXEC) $(OBJS)

test: all
	$(EXEC)

clean:
	rm -f *.o *.exe