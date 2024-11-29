CXX = g++

CXXFLAGS = -std=c++11 -Wall

SOURCES = lab10_welton.cpp InvalidDay.cpp InvalidMonth.cpp InvalidYear.cpp

OBJECTS = $(SOURCES:.CPP=.O)

EXECUTABLE = lab10_welton

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)