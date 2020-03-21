CC=g++
LIBS=-lm 
CFLAGS=
TARGETS=0501_loops 0502_nested 0503_fstream

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


