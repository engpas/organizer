all: 
	cp src/entry.cpp src/timepoint.cpp src/timepoint.hpp src/entry.hpp lib
	g++ -std=c++11 -c lib/entry.cpp lib/timepoint.cpp
	mv *.o lib
	ar ruc lib/liborganizer.a lib/timepoint.o lib/entry.o
	ranlib lib/liborganizer.a
	rm lib/*.o lib/*.cpp lib/*.hpp
	cp src/unit_test.cpp src/entry.hpp src/timepoint.hpp bin
	g++ bin/unit_test.cpp -L/Users/Pascal/organizer/lib -lorganizer -std=c++11 -o bin/unit_test
	rm bin/*.cpp bin/*.hpp

clean:
	rm bin/* lib/* 
