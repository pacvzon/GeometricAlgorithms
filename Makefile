# CC = g++
CC = clang

SRCDIR = src
CFLAGS = -Wall
LIB = -lm
INC = -I include
BUILDIR = build

$(BUILDIR)/Structs.o: $(SRCDIR)/Structs.cpp
	mkdir $(BUILDIR)
	$(CC) $(CFLAGS) $(INC) -c $(SRCDIR)/Structs.cpp -o $(BUILDIR)/Structs.o

$(BUILDIR)/Util.o: $(SRCDIR)/Util.cpp $(BUILDIR)/Structs.o
	$(CC) $(CFLAGS) $(INC) -c $(SRCDIR)/Util.cpp -o $(BUILDIR)/Util.o

objs: $(BUILDIR)/Structs.o $(BUILDIR)/Util.o
	echo "objs"

clean:
	rm -r $(BUILDIR)
