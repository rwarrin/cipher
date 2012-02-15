#Cipher

##About
Encrypt or Decrypt a string of text one the command line.  Works by rotating each letter by a specified shift amount.

##Usage
	./cipher -direction <shift>
	-direction
		-e: Encrypt a string
		-d: Decrypt a string
	<shift>
		- amount to shift each letter must be a positive number.

##How To Compile
To build for unix and windows use
	make all

To build for unix only use
	make cipher

To build for windows only use
	make cipherw

Windows: `g++ -mno-cygwin -o cipher cipher.cpp`
