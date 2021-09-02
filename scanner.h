#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum Tokens {FDT, SEP, CADENA};

struct token getToken(); //defino get_token

struct token { //defino la estructura de token y sus valores
    char lexema[128];
    char tipo;
};

struct token token; //defino token

#endif