CC = gcc
CFLAGS = -Wall -Wextra -O2

%: %.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f *.out