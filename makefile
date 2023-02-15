text0 =
text1 = Compilación del proyecto...
text2 = Modo de empleo:
text3 = ./rational_t
text4 = Se han eliminado el fichero ejecutable y los ficheros objetos.
text5 = clear; make clean; make; clear; ./rational_t

CC=g++
CXXFLAGS=-g -std=c++14

OBJS = main_rational_t.o rational_t.o

all: ${OBJS}
		@echo $(text0)
		@echo $(text1)
		$(CC) $(CXXFLAGS) -o rational_t ${OBJS}
		@echo $(text0)
		@echo $(text2)
		@echo $(text3)

clean:
	rm -rf *.o rational_t
	@echo $(text4)