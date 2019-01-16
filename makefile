PROGNAME := MeasureOverhead
OUTDIR := build
SRCS := main.cpp SimpleFunctions.cpp
CXXFLAGS := -std=c++17 -O0

PROG := $(OUTDIR)/$(PROGNAME)
OBJS := $(SRCS:%.cpp=$(OUTDIR)/%.o)
DEPS := $(SRCS:%.cpp=$(OUTDIR)/%.d)

CXX := g++

all: $(PROG)

-include $(DEPS)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

$(OUTDIR)/%.o: %.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(DEFS) -o $@ -c -MMD -MP -MF $(@:%.o=%.d) $<

clean:
	rm -f $(PROG) $(OBJS) $(DEPS)