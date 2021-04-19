
CFLAG=-g -std=c99 -I incl
CC=gcc
LD_FLAG=-lcmocka
TARGET=ts_examp
VPATH=src incl test



#SRC=$(wildcard %.c)
SRC=$(wildcard src/*.c incl/*.h test/*.c)
sss:$(SRC)
	@echo $^
	$(CC) $(CFLAG) $(LD_FLAG) -o $@ $^


.PHONY:testing
testing:
	echo "testing"

.PHONY:print
print:$(SRC)
	echo $(SRC)

