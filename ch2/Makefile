TARGET = max max2 max3 max4 clean_max4cver max4_c_ver

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
