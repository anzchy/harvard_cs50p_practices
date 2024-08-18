CC = gcc
CFLAGS = -Wall -Wextra -O2

%: %.c
	$(CC) $(CFLAGS) $< -lcs50 -o $@

.PHONY: clean

clean:
	rm -f *.out