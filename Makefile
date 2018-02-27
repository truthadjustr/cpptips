all: learn

learn: learn.cpp
	g++ -o learn learn.cpp

clean:
	rm -f learn 

.PHONY: clean
