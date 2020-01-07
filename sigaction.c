#include <signal.h>
#include<stdio.h>

static void handler(int signum)
{
    /* Take appropriate actions for signal delivery */
printf("hello caught %d\n",signum);
sleep(2);
}


int main()
{
    struct sigaction sa;


    sa.sa_handler = handler;
    sigemptyset(&sa.sa_mask);
   //a.sa_flags = SA_RESTART; /* Restart functions if
//                                 interrupted by handler */
    sigaction(SIGINT, &sa, NULL) 

        /* Handle error */;

while(1)
{
printf("hello main\n");
sleep(2);
}
    /* Further code */
}

