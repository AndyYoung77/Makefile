CROSS_COMPILE =
AS			= $(CROSS_COMPILE)as
LD			= $(CROSS_COMPILE)ld
CC			= $(CROSS_COMPILE)cc
CPP			= $(CC) -E
AR 			= $(CROSS_COMPILE)ar
NM			= $(CROSS_COMPILE)nm

STRIP		= $(CROSS_COMPILE)strip
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP	= $(CROSS_COMPILE)objdump

export AS LD CC CPP AR NM
export STRIP OBJCOPY 

TOPDIR := $(shell pwd)

CFLAGS := -Wall -O2 -g
CFLAGS += -I $(TOPDIR)/include

LDFLAGS := -lm

export CFLAGS LDFLAGS TOPDIR

TARGET := show_file

obj-y += main.o
obj-y += font/
obj-y += display/

all:
	$(warning $(obj-y))
	make -C ./ -f $(TOPDIR)/Makefile.build
	$(CC) $(LDFLAGS) -o $(TARGET) built-in.o
	
clean:
	-rm -rf $(shell find -name "*.o")
	-rm -rf $(shell find -name "*.d")
	-rm -rf $(TARGET)
