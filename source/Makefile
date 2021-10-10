CXX=clang++
LIBS=
CPPFLAGS=--std=c++17 \
         -I. \
		 -fPIC \
		 -fdeclspec \
		 -D'fopen_s(pFile,filename,mode)=((*(pFile))=fopen((filename),(mode)))==NULL'
SRC=$(wildcard *.cc)
OBJ=$(SRC:.cc=.o)

.DEFAULT_GOAL := all

%.o: %.cc
	$(CXX) -c -o $@ $< $(CPPFLAGS)

libsparkle_lite.a: $(OBJ)
	ar rc $@ $(OBJ)
	ranlib $@

libsparkle_lite.so: $(OBJ)
	$(CXX) $(OBJ) -shared -o $@

all: libsparkle_lite.a libsparkle_lite.so

clean:
	rm -rf *.so *.a *.o