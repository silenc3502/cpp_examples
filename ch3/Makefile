TARGET = stack_test stack_test2 stack_test3

CXX = g++
CXXFLAGS = -std=c++11
INC_DIRS =
LIBS =

SRCS = $(wildcard *.cpp)
SRCS += $(wildcard *.c)
OBJS = $(SRCS:%.cpp=%)
OBJS += $(SRCS:%.c=%)

all: $(OBJS)

.cpp.o: 
	$(CXX) $(CXXFLAGS) -o $@ $< $(INC_DIRS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -o $@ $< $(INC_DIRS) $(LIBS)

clean:
	rm -rf $(TARGET)
	rm -rf *.o
