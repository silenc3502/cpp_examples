TARGET = max adl inject lazy

CXX = g++
CXXFLAGS = -std=c++17
INC_DIRS =
LIBS =

SRCS = $(wildcard *.cpp)
#EXCLUDE_SRCS = $(filter-out first_main.cpp second_main.cpp third_main.cpp, $(SRCS))
OBJS = $(SRCS:%.cpp=%)
#EXCLUDE_OBJS = $(EXCLUDE_SRCS:%.cpp=%.o)

all: $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) -o $@ $< $(INC_DIRS) $(LIBS)

clean:
	rm -rf $(TARGET)
	rm -rf *.o
