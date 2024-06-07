objects = main.o Control.o View.o ASCIIText.o LinAlg.o
# testobjects = test.o

all: $(objects)
	g++ -o all $(objects)

# test: $(testobjects)
# 	g++ -o test $(testobjects)

main.o: main.cpp
	g++ -c main.cpp

# test.o: test.cc
# 	g++ -c test.cc

Control.o: Control.h Control.cpp
	g++ -c Control.cpp

View.o: View.h View.cpp
	g++ -c View.cpp

ASCIIText.o: ASCIIText.h ASCIIText.cpp
	g++ -c ASCIIText.cpp

LinAlg.o: LinAlg.h LinAlg.cpp
	g++ -c LinAlg.cpp

clean:
	rm *.o all