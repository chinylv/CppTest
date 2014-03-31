CC = g++

CFLAGS =
LFLAGS =

Object = cpptest

all: $(Object)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(Object) : $(Object).o
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

.PHONY: clean all

clean :
	-@rm -f *.o $(Object) 2>&1 > /dev/null

