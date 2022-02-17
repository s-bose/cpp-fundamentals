#!/usr/bin/make

CXXFLAGS ?= -Wall -Werror -std=c++2a
LDFLAGS += -L./rawstring -l$(LIBNAME)

LIBNAME = rawstr
LIBRARY = lib$(LIBNAME).a

CXX_LIBSRCS ?= $(shell find . -name \*.cc)
CXX_LIBOBJS ?= $(CXX_LIBSRCS:.cc=.o)

.PHONY: all

main: $(CXX_LIBOBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) 

$(CXX_LIBOBJS): %.o : %.cc
	$(CXX) -c $(CXXFLAGS) -o $@ $<


clean:
	rm -f $(CXX_LIBOBJS)
	rm -f $(LIBRARY)
	rm main