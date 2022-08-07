GCC = g++ 
CFLAGS = -g -Wall
EXEC = main
OBJS = L2187.o
DEPS = leetcode.cpp

%.o: %.cpp $(DEPS)
	$(GCC) -c -o $@ $< $(CFLAGS)

all: $(OBJS)
	$(GCC) $(CFLAGS) -o $(EXEC) $(OBJS)

test: all
	./$(EXEC)

clean:
	rm -f *.o *.exe $(EXEC)