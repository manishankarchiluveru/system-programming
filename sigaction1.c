#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void sighand(int signo)
{
printf("signal caught %d\n",signo);
}

int main()
{
printf("hello i am main function\n");
signal(SIGQUIT,sighand);
printf("before getchar()\n");
getchar();
printf("after getchar()\n");


}


