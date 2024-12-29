typedef uint64_t unt; //easily changed to 64 bit system alias
const unt L = 64; //length of bit vectors represented as unts.
const unt N = 5; //nhood size of CA, should be 5 or less for unt = 32 bit
const unt M = (1 << N) - 1; //mask vector  starts with N ones finishes with L - N zeros.
const unt R = 64;//length of rule vector (stored within unt extra space usually)
const size_t A = 1000000;// attempts to find c that works
const unt G = 80; ///brightness of de-emphasized text
//SYSTEM PARAMETERS (MAKE CONSTANTS FOR FIXED SYSTEM)

unt P; //plaintext bits 
unt S; //spacing between bits that matter
unt E; //applications of rule to decrypt
unt F; //number of 64-bit rules to use (in order, modular if E > F)