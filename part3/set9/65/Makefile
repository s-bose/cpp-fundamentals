#!/usr/bin/make

# Simple Makefile. Source files either become programs, or they go into the
# convenience library, against which the programs are linked.

# https://www.gnu.org/software/make/manual/html_node/Reading-Makefiles.html

# If no flags are set (?=), use at least these.
CXXFLAGS ?= -Wall -std=c++20

# If non-C++ programs must be built, append them to this line.
PROGRAMS = $(CXX_PROGRAMS)

# We build a static convenience library. The linker needs flags to find it.
# Notice that seem to be using LIBNAME before setting it. That is ok.
LDFLAGS += -L. -l$(LIBNAME)

# We recursively scan the entire directory for source files.
CXX_SOURCES = $(patsubst ./%,%,$(shell find ./ -type f -name \*$(CPP_EXT)))
CXX_OBJECTS = $(patsubst %$(CPP_EXT),%.o,$(CXX_SOURCES))
CXX_OBJDEPS = $(patsubst %$(CPP_EXT),%.dep,$(CXX_SOURCES))

# This command finds the first of .ccp, .cc or .C, whichever you use.
# Stick to one extension per project though. A Makefile that can handle multiple
# extensions would have to be much longer.
CPP_EXT := $(suffix $(shell find . -name \*.cc -o -name \*.cpp -o -name \*.cxx -o -name \*.C|head -1))

# If it has a 'main' function, it's a program.
MAIN_REGEX = '^[[:space:]]*int[[:space:]]+main[[:space:]]*[(]'
CXX_PROG_SOURCES = $(patsubst ./%,%,$(shell find -type f -iname \*$(CPP_EXT) -exec grep -lE $(MAIN_REGEX) {} \; ))
CXX_PROGRAMS = $(patsubst %$(CPP_EXT),%,$(CXX_PROG_SOURCES))

# Whatever is not a program source goes into the library.
CXX_LIBSOURCES = $(filter-out $(CXX_PROG_SOURCES),$(CXX_SOURCES))
CXX_LIBOBJECTS = $(CXX_LIBSOURCES:$(CPP_EXT)=.o)

# Name of our library and the file containing it.
LIBNAME = proj
LIBRARY = lib$(LIBNAME).a

# When compiling, generate dependency listings, too.
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.dep
DEPDIR = generated_deps

# When used, ensures dependency directories exist.
ENSURE_DIR = $(shell test -d $(dir $(DEPDIR)/$@) || mkdir -p $(dir $(DEPDIR)/$@))

# This is for 'make show'.
EDGES = $(DEPDIR)/build.edges
ADD_EDGES = $(foreach PREREQ,$^,$(file >> $(EDGES),"$(PREREQ)" -> "$@" [label = "$(ACTION)"]))

# Try: VERBOSE=1 make
QUIET := $(if $(filter $(VERBOSE), 1 t true True TRUE y yes Yes YES),,@)

# https://www.gnu.org/software/make/manual/html_node/Rules.html#Rules
# https://www.gnu.org/software/make/manual/html_node/Rule-Example.html#Rule-Example

# The default target (by convention called 'all') is: to build the programs.
all: $(PROGRAMS)

.PHONY: all

# Programs are built by linking their object files against the convenience
# library. This is a static pattern rule:
# https://www.gnu.org/software/make/manual/html_node/Static-Usage.html#Static-Usage
# We don't call the linker directly. We call it through the compiler.
$(CXX_PROGRAMS): %: %.o $(LIBRARY)
	@printf "\t[Linking $@]\n"
	$(ENSURE_DIR)
	$(QUIET) $(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)
	@$(ADD_EDGES)
$(CXX_PROGRAMS): ACTION = link

# The library contains all object files that don't become programs.
$(LIBRARY): $(CXX_LIBOBJECTS)
	@printf "\t[Composing $@]\n"
	$(QUIET) ar rcs $@ $^
	@$(ADD_EDGES)
$(LIBRARY): ACTION = gather

# Any non-program C++ source builds an object that goes into the library.
# The use of $(DEPFLAGS) causes a dependency file to also be written.
# (But Make does not know that!)
$(CXX_OBJECTS): %.o: %$(CPP_EXT) | $(DEPDIR)
	@printf "\t[Compiling $@]\n"
	$(ENSURE_DIR)
	$(QUIET) $(CXX) $(CPPFLAGS) $(CXXFLAGS) $(DEPFLAGS) -c -o $@ $<
	@$(ADD_EDGES)
$(CXX_OBJECTS): ACTION = compile

# This is where we store the dependencies.
$(DEPDIR):
	mkdir $@

buildgraph.dot: all
	echo "digraph " > $@
	echo "{" >> $@
	echo "rankdir = LR;" >> $@
	echo "{rank = same; $(foreach SRC,$(CXX_SOURCES), \"$(SRC)\";) }" >> $@
	cat $(EDGES) >> $@
	echo "}" >> $@
	cat $@

show: buildgraph.dot
	xdot $<

.PHONY: show

# 'make clean' removes all generated files.
clean:
	rm -f $(PROGRAMS) $(CXX_OBJECTS) $(LIBRARY) buildgraph.dot $(LIBRARY)
	rm -rf $(DEPDIR)

# Even if a file 'clean' should exist, run the recipe anyway.
.PHONY: clean

# Source files need to be recompiled when header files that they include are
# newer than the object. Including the generated dependency files ensures this.
# If make has run previously, $(DEPDIR) will exist.
ifneq (,$(wildcard $(DEPDIR)))

    # In that case, find all .dep-files in $(DEPDIR) and include them.
    FOUND_CXX_DEPS = $(shell find $(DEPDIR) -name \*.dep)

    # They list the dependencies of source files on the headers they include,
    # which ensures that sources that include foo.hh have their objects rebuilt
    # when foo.hh is newer. Thus we need run 'make clean' less often.
    -include $(FOUND_CXX_DEPS)

    # Don't let Make try to rebuild the .deps. (We don't even tell it how to,
    # but it would try to find a rule for them anyway.)
    $(FOUND_CXX_DEPS):;
endif

# Also block any attempts to remake the Makefile itself.
Makefile:;

# https://www.gnu.org/software/make/manual/html_node/index.html