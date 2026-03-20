CXX = g++
CXXFlags = -Wall -Wextra -g -std=c++20

TARGET = main

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFlags) -o $(TARGET) $(OBJS)

%.o:%.cpp
	$(CXX) $(CXXFlags) -c $< -o $@

run: $(TARGET)
	$(TARGET)

clean:
	rm -rf $(TARGET) $(OBJS)