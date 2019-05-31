CC = g++
PROGRAM = math_expressions
CFLAGS = -Wall -Wextra -ggdb
LDLIBS = -lm

default: bin/$(PROGRAM)

bin/$(PROGRAM): bin/$(PROGRAM).o
	$(CC) $^ $(LDLIBS) -o $@

bin/$(PROGRAM).o: src/main.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fv bin/*.o bin/math_expressions
