TARGET = max

CXX = g++
CXXFLAGS =
INC_DIRS =
LIBS =

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $< $(INC_DIRS) $(LIBS)

.cpp.o:
	$(CXX) -c $< -o $@ $(INC_DIRS)

clean:
	rm -rf *.o
	rm -rf $(TARGET)
