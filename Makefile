#(C) Bigstep inc. Helium test code
JAVA_HOME=$(shell jrunscript -e 'java.lang.System.out.println(java.lang.System.getProperty("java.home"));')
CPPFLAGS=-g -fPIC -I$(JAVA_HOME)/../include/ -I$(JAVA_HOME)/../include/linux
LDFLAGS=-g 
LDLIBS=-lhe -lpthread

SRCS=helium_native_test.c
OBJS=$(subst .c,.o,$(SRCS))

libhelium.so: Helium.o
	g++ $(LDFLAGS) -shared -fPIC -o libhelium.so Helium.o $(LDLIBS) 

helium_native_test: $(OBJS)
	g++ $(LDFLAGS) -o helium_native_test helium_native_test.o $(LDLIBS) 

helium_native_test.o: helium_native_test.c
	g++ $(CPPFLAGS) -c helium_native_test.c

Helium.class: Helium.java
	javac Helium.java

Helium.h: Helium.class
	javah Helium

Helium.o: Helium.h Helium.cc
	g++ $(CPPFLAGS) -c Helium.cc

all: helium_native_test libhelium.so Helium.class

clean: 
	rm -rf helium_native_test *.o *.class libnative.so
