TARGET = stack_test4 add_value_test

CXX = g++
CXXFLAGS = -std=c++11
INC_DIRS =
LIBS =

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%)

all: $(TARGET)

$(TARGET): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(INC_DIRS) $(LIBS)

clean:
	rm -rf $(TARGET)
	rm -rf *.o
