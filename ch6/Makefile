TARGET = first_main second_main third_main tracer_test

CXX = g++
CXXFLAGS = -std=c++17
INC_DIRS =
LIBS =

SRCS = $(wildcard *.cpp)
#EXCLUDE_SRCS = $(filter-out first_main.cpp second_main.cpp third_main.cpp, $(SRCS))
OBJS = $(SRCS:%.cpp=%.o)
#EXCLUDE_OBJS = $(EXCLUDE_SRCS:%.cpp=%.o)

all: $(TARGET)

tracer_test: tracer.o tracer_test.o
	$(CXX) $(CXXFLAGS) -o $@ $< $@.cpp $(INC_DIRS) $(LIBS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC_DIRS) $(LIBS)

clean:
	rm -rf $(TARGET)
	rm -rf *.o
