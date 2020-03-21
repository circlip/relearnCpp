CC=g++
LIBS=-lm 
CFLAGS=
TARGETS=1001_oop 1002_overload 1003_friends

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


