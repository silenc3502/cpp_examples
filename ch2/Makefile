TARGET = max max2 max3 max4

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
