cur_src := $(wildcard *.c)
cur_header := $(wildcard *.h)
cur_obj := $(patsubst %.c,%.o,$(cur_src))

all:$(cur_obj)
	cp $(cur_obj) ../.
	cp $(cur_header) $(inc_dir)

$(cur_obj):$(cur_src) echo_debug
	gcc -Wall -c $<

echo_debug:
	@echo $(cur_obj)