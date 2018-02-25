top_dir := $(shell pwd)
inc_dir := $(top_dir)/include
src_dir := $(top_dir)/src
lib_dir := $(top_dir)/lib/libmath.a

LDFLAG := $(lib_dir)
CFLAGS := -O2 -Wall
CFLAGS += -I $(inc_dir)

TARGET := test_makefile


all:
	make -C $(src_dir)
	gcc $(CFLAGS) main.c $(LDFLAG) -o $(TARGET)
	
	
.phony: clean
clean:
	-rm -rf $(src_dir)/*.o
	-rm -rf $(top_dir)/lib/libmath.a
	-rm -rf $(TARGET)