PROGNAME := MeasureOverhead
OUTDIR := build
SRCS := main.cpp SimpleFunctions/SimpleFunctions.cpp
CXXFLAGS := -std=c++17 -O0
DUMPNAME := dump.txt

PROG := $(OUTDIR)/$(PROGNAME)
OBJS := $(SRCS:%.cpp=$(OUTDIR)/%.o)
DEPS := $(SRCS:%.cpp=$(OUTDIR)/%.d)
DUMP := $(OUTDIR)/$(DUMPNAME)

CXX := g++

all: $(PROG) $(DUMP)

-include $(DEPS)

$(DUMP): $(PROG)
	objdump -d $(PROG:%=%.exe) > $(DUMP)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

$(OUTDIR)/%.o: %.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(DEFS) -o $@ -c -MMD -MP -MF $(@:%.o=%.d) $<

clean:
	rm -f $(PROG) $(OBJS) $(DEPS) $(DUMP)