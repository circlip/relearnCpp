CC=g++
LIBS=-lm 
CFLAGS=
TARGETS=0101_helloworld 0102_functions 

install:
	for TARGET in ${TARGETS}; do	\
		echo compiling $${TARGET} ...;	\
		${CC} -o $$TARGET $${TARGET}.cpp ${LIBS} ${CFLAGS};	\
	done

clean:
	for TARGET in ${TARGETS}; do	\
		echo removing $${TARGET} ...;	\
		rm $${TARGET}; \
	done


