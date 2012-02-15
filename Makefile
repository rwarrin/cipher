# Builds the cipher project
#

all: cipher cipherw

cipher: cipher.cpp crypt.cpp crypt.h
	g++ -Wall -Werror -o cipher cipher.cpp crypt.cpp

cipherw: cipher.cpp crypt.cpp crypt.h
	g++ -Wall -Werror -mno-cygwin -o cipherw cipher.cpp crypt.cpp

clean:
	rm -f *.o a.out core cipher

