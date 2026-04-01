#include <stdlib.h>
#include <stdio.h>
// comentario super necessario
int main(int argc, char* argv[]){
	if(argv[2] == "pt-br"){
		printf("Ola %s!", argv[1]);
	}else{
		printf("Hello %s!", argv[1]);
	}
	return 0;
}
