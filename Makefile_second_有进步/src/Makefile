all_obj = $(shell ls)
current_dir = $(filter-out %.a %.o Makefile,$(all_obj))

all:$(current_dir)
	@echo *****123******************************************
	ar cr libmath.a add.o div.o min.o multi.o
	cp libmath.a $(lib_dir)
	-rm -rf libmath.a
	@echo ****456*******************************************

	
$(current_dir):echo_debug
	make -C $@
	
echo_debug:
	@echo helloworld