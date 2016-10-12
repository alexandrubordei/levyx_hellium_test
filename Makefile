#(C) Bigstep inc. Helium test code
CPPFLAGS=-g 
LDFLAGS=-g 
LDLIBS=-lhe -lpthread

SRCS=helium_native_test.c
OBJS=$(subst .c,.o,$(SRCS))

helium_native_test: $(OBJS)
	g++ $(LDFLAGS) -o helium_native_test helium_native_test.o $(LDLIBS) 

helium_native_test.o: helium_native_test.c
	g++ $(CPPFLAGS) -c helium_native_test.c

all: helium_native_test

clean: 
	rm -rf helium_native_test helium_native_test.o
