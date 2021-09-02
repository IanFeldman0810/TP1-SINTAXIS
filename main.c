#include "scanner.h"
#include "scanner.c"

int main(){
    do{
        token=getToken();//obtengo el token actual

        if(token.tipo==SEP){
            printf("Separador: %s \n",token.lexema);
        }else if(token.tipo==CADENA){
            printf("Cadena: %s \n",token.lexema);
        }else if(token.tipo==FDT){
            printf("Fin de Texto:");
        }
    }while(token.tipo!=FDT);//realizar esto hasta que get_token devuelva FDT
    
    return 0;
}