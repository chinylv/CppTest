CC = clang++

CFLAGS = -std=c++11 -stdlib=libc++
LFLAGS =

Object = cpptest

all: $(Object)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(Object) : $(Object).o
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)
	-@rm -f *.o 2>&1 > /dev/null

.PHONY: clean all

clean :
	-@rm -f $(Object) 2>&1 > /dev/null
