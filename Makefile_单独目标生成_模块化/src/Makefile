all: 
	make -C ./Add/.
	make -C ./Div/.
	make -C ./Min/.
	make -C ./Multi/.
	ar cr libmath.a add.o div.o min.o multi.o
	cp libmath.a ../lib/.
	-rm -rf libmath.a
