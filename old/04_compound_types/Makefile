CC=g++
LIBS=-lm 
CFLAGS=
TARGETS=0401_strings 0402_string_obj 0403_struct 0404_pointer

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


