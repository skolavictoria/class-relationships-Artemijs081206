CXX = g++
CXXFLAGS = -std=c++11 -Wall -I./src
SRCDIR = src
BINDIR = bin
EXEC = $(BINDIR)/university_system
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.o, $(SOURCES))

all: $(EXEC)

$(EXEC): $(OBJECTS) | $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BINDIR)/%.o: $(SRCDIR)/%.cpp | $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BINDIR):
	mkdir -p $(BINDIR)

clean:
	rm -rf $(BINDIR)

.PHONY: all clean
