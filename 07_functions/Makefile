CC=g++
LIBS=-lm 
CFLAGS=
TARGETS=0701_ptr2func 0702_reference 0703_ref_struct 0704_template

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


