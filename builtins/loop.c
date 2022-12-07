
#include "../shell.h"
#include <stdio.h>
int loop(int argc, char **argv)
{
	char command[4096];
	sprintf(command, "%s %s",argv[2], argv[3]);
	if(argv[4] == NULL){
		
		for(int i =0; i <= atoi(argv[1]); i++){
			system(command);
		}
	}else{
		for(int i =0; i < atoi(argv[1]); i++){
			sprintf(command, "%s %s %d",argv[2], argv[3], i+1);
			system(command);
		}
	}
}
