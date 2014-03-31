CC = clang++

CFLAGS = -std=c++11 -stdlib=libc++
LFLAGS =

Object = cpptest

all: $(Object)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(Object) : $(Object).o
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)
	-@mv $(Object) ../bin/ 2>&1 > /dev/null
	-@ln -s ../bin/$(Object) $(Object) 2>&1 > /dev/null
	-@rm -f *.o 2>&1 > /dev/null

.PHONY: clean all

clean :
	-@rm -f *.o $(Object) 2>&1 > /dev/null
