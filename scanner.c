#include "scanner.h"

char caracter; // defino la variable que voy a usar para cada caracter
int pos;

struct token getToken(){
    token.lexema[0]='\0';
    token.tipo=0;
    caracter=getchar();//obtengo el primer caracter
    //printf("%c",caracter);
    if(caracter==EOF){
        printf("holaaa fin");
    }
    while (caracter!=EOF){//meientras que caracter no sea igual al final
        if(caracter==','){//si el caracter es el separador
            token.tipo=SEP;
            token.lexema[0]=',';
            token.lexema[1]='\0';

            return token;
        }else{
            if(!isspace(caracter)){ //si el caracter no es un espacio vacio
                pos=0;
                do{
                    token.lexema[pos]=caracter;
                    pos++;
                    caracter=getchar();//obtengo el siguiente caracter ingresado
                }while(caracter!=',' && !isspace(caracter) && caracter !=EOF);//va a continuar solo si !=',' || no es un espacio vacio o si no es EOF, solamente si es otro caracter
                //salio del whil porque termino la cadena
                token.tipo=CADENA;
                token.lexema[pos]='\0';
                ungetc(caracter,stdin);

                return token;//devuelve la cadena 
            }
        }
        caracter=getchar();//obtengo el proximo caracter
    }
    //printf("saliooooo");
    //detecto el EOF y salio del do while
    token.lexema[0]='\0';
    token.tipo=FDT;

    return token;
}