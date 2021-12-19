# https://www.tuwlab.com/ece/27193
CROSS = mips-linux-
CC = $(CROSS)gcc
CFLAGS = -I./include
DEFINES = -DDEBUG
# 옵션으로 define 됨
LDFLAGS = -lpthread
EXE = test
OBJS = makefile.o sum.o sum2.o

C_SRC = $(wildcard *.c) # 모든 .c들 
OBJ  = $(C_SRC:.c=.o) # .c를 .O로 바꾼다. 

all : $(EXE)
	echo completed!!
# 저절로 주어진 조건을 충족시키기 위해서 
# exe로 이동. 
# exe는 objs들 충족시키기 위해 또 이동해서 만듬

$(EXE) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
#$^는 :오른쪽 위에 쓴거를 따라 쓰는 것
#$@는 :왼쪽 위에 쓴거를 따라 쓰는 것
#$(CFLAGS)는 include 헤더 파일 옵션 넣기(컴파일옵션)
#(LDFLAGS) : 뒤에 옵션 더 넣기(링커옵션)

test: makefile.o sum.o
	gcc -o test makefile.o sum.o
#test의 조건이 makefile.o, sum.o가 존재
clean: 
	rm *.o
	rm test
#make clean 이런식으로 치면 나옴