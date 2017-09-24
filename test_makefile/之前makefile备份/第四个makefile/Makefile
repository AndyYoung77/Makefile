objs := a.o b.o

test:$(objs)
	gcc -o test $^

# .a.o.d .b.o.d
dep_files := $(foreach f,$(objs),.$(f).d)#改名字为. .d
dep_files := $(wildchar $(dep_files))#清除不存在的
	
ifneq ($(dep_files),)
	include $(dep_files)#包含非空的文件
endif
	
%.o:%.c
	gcc -Wp,-MD,$@.d -c -o $@ $<
	
clean:
	rm *.o *.d test
