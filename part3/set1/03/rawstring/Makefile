#!/usr/bin/make

CXXFLAGS ?= -Wall -Werror -std=c++2a
CXX_LIBSRCS ?= $(shell find . -name \*.cc)
CXX_LIBOBJS ?= $(CXX_LIBSRCS:.cc=.o)

LIBNAME = rawstr
LIBRARY = lib$(LIBNAME).a

$(LIBRARY): $(CXX_LIBOBJS)
	ar rcs $@ $^

$(CXX_LIBOBJS): %.o : %.cc
	$(CXX) -c $(CXXFLAGS) -o $@ $<


clean:
	rm -f $(CXX_LIBOBJS)
	rm $(LIBRARY)