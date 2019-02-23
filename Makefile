PROGRAM = math_expressions
CFLAGS = -Wall -g -ansi -O0
LDLIBS = -lm

default: bin/$(PROGRAM)

bin/$(PROGRAM): bin/$(PROGRAM).o
	$(CC) $^ $(LDLIBS) -o $@

bin/$(PROGRAM).o: src/main.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fv bin/*.o bin/math_expressions