top_dir := $(shell pwd)
inc_dir := $(top_dir)/include
src_dir := $(top_dir)/src
lib_dir := $(top_dir)/lib/libmath.a
SUBDIRS  = $(shell ls | grep *.c)

LDFLAG := $(lib_dir)
CFLAGS := -O2 -Wall
CFLAGS += -I $(inc_dir)

TARGET := test_makefile

#将总目标分批次生成会比较合理，也容易单独生成

all:mathlib
	@echo all
	gcc $(CFLAGS) main.c $(LDFLAG) -o $(TARGET)
	
mathlib:
	@echo mathlib
	make -C $(src_dir)
	@echo lib_over
	
test_echo:
	@echo $(SUBDIRS)
	
.phony: clean
clean:
	-rm -rf $(src_dir)/*.o
	-rm -rf $(top_dir)/lib/libmath.a
	-rm -rf $(TARGET)