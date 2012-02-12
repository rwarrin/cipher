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
Unix: `g++ -o cipher cipher.cpp`

Windows: `g++ -mno-cygwin -o cipher cipher.cpp`
