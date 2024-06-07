objects = main.o 
# testobjects = test.o

all: $(objects)
	g++ -o all $(objects)

# test: $(testobjects)
# 	g++ -o test $(testobjects)

main.o: main.cpp LMModules.h
	g++ -c main.cpp

LMModules.o: LMModules.cpp LMModules.h
	g++ -c LMModules.cpp

# test.o: test.cc
# 	g++ -c test.cc

# Control.o: Control.h Control.cc
# 	g++ -c Control.cc

# View.o: View.h View.cc
# 	g++ -c View.cc