CXX = clang++
OBJS = main.o Dice.o

CXXFLAGS = $(CS225) -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpthread -lm


EXENAME = dice

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o : main.cpp Dice.h
	$(CXX) $(CXXFLAGS) main.cpp

Dice.o : Dice.cpp Dice.h
	$(CXX) $(CXXFLAGS) Dice.cpp

clean :
	-rm -f *.o $(EXENAME) test

