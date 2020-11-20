TARGET = printcoll_test stack5_test stack6_test stack7_test stack8_test max5 max6 ref_nonref

CXX = g++
CXXFLAGS = -std=c++17
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
