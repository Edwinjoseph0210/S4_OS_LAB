//This program is to call the first program using the second program.
//FIRST PROGRAM
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
	printf("I am program first.c & called by second.c");
	printf("BYE\n");
	return 0;
}

//SECOND PROGRAM
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
	char *args[]={"./EXEC",NULL};
	execvp(args[0],args);
	return 0;
}

//command to execute
// gcc first.c -o EXEC