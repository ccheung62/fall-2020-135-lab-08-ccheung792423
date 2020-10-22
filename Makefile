main: main.o imageio.o invert.o add.o change.o
	g++ -o main main.o imageio.o invert.o add.o change.o

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

main.o: main.cpp imageio.o

invert.o: invert.cpp invert.h

add.o: add.cpp add.h

change.o: change.cpp change.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h


clean:
	rm -f sample.o imageio.o main.o invert.o add.o change.o
