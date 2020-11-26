PROJ = output.out
CXX = g++
CXXFLAGS = -Wall -std=gnu++11
OBJS = Driver.o MerkleTree.o FileChecker.o

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(PROJ)

%.o : %.cpp MerkleTree.h
	$(CXX) $(CXXFLAGS) -c $<
	
	
%.o : %.cpp FileChecker.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean finish
clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~ *.h.gch *#
finish:clean
	rm -rf ./project4.zip
	zip project4.zip ./*

.PHONY: run
run:
	./$(PROJ)

.PHONY: val
val:
	valgrind ./$(PROJ)
