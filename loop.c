
#include "../shell.h"
#include <stdio.h>
int cd(int argc, char **argv)
{
	if(argv[1]==NULL || argc>1){
		system("echo Needs a directory homie");
	}else{
		return chdir(argv[1]);
	}
}
