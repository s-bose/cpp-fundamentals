#!/usr/bin/make

CXXFLAGS ?= -Wall -Werror -std=c++2a

CXX_LIBSRCS = $(find -type f -name \*.cc)
CXX_LIBOBJS = $(patsubst %.cc, %.o, $(CXX_LIBSRCS))

main:	main.o libvstring.a
		$(CXX) $(CXXFLAGS) -o $@ $< -L. -lvstring
	
main.o:	main.cc vowels.cc
		$(CXX) $(CXXFLAGS) -o $@ $<

$(CXX_LIBOBJS):	%.o : %.cc
		$(CXX) $(CXXFLAGS) -c -o $@ $<
	
libvstring.a:	vstring/*.cc
		ar rcs 