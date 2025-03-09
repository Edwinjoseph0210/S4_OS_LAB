#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
	pid_t childpid=fork();
	
	if(childpid == -1 )
		{
			printf("Child Execution is unsuccessful.\n");
		}
		
	else if(childpid == 0)
		{
			printf("Child Execution is successful\n");
			printf("I am the child: %d\n",getpid());
			printf("I am the parent: %d\n",getppid());
			
		}
	else
		{
			printf("---- Parent Process ----\n");
			printf("PID: %d \n",getpid());
			printf("Child PID: %d \n",childpid);
			wait(NULL);
			printf("Child finished.\n");
			exit(0);
			
		}
return 0;
}