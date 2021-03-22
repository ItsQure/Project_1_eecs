#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"
#include "syscall.h"

//int window = 1;
int MAX_TIME = 3000000;
/*
int  printpinfo( int pid) { 
  struct pstat pi = {{0}};
int ret =  getpinfo(&pi);
  int i;
  for( i=0; i < NPROC; i++){
    if(pi.pid[i] == pid){
      printf(0,"PID %d tickets: %d\n",pid, pi.tickets[i]);
      printf(0,"Number of ticks that PID %d has: %d\n", pid, pi.ticks[i]);
      printf(0,"\n\n");
	 }
  }
return ret;
}
*/
/*
void spin(){
	int time_passed = 0;
	while(1){
		int pid = getpid();
		if(time_passed >=MAX_TIME)
			break;
               if((time_passed %400) ==0){
		 printpinfo(pid);
		

}
	
		sleep(window);
		time_passed+=window;
	}

}
*/
int main(int argc, char *argv[]){
/*int pp1, pp2, pp3;
pp1 = -1;
pp2 = -1;
pp3 = -1;

  settickets(1);
    pp1 = getpid();

    printf(0,"process started with PID %d\n\n", pp1);
   
  fork();

if(pp1 != getpid()){
 settickets(2);

    pp2 = getpid();
    printf(0,"process started with PID %d\n\n", pp2);

	fork();
if(getpid() == pp2){
;
}
else{
  settickets(3);    
   // settickets(4);
    pp3 = getpid();
    printf(0,"process started with PID %d\n\n", pp3);
}
}

  spin();
wait();
wait();
exit();
*/

int pid;
int i;

for( i = 500; i > 1; i/=5){
settickets(i);
pid = fork();
if(pid ==0){
  int count = 0;
int laps = 0;

while(1){
count++;
if(count > MAX_TIME){
laps++;
count = 0;
//printf(1, "%d\n", i);
printf(0, "%d :: %d\n", i, laps);
}

}
}
}
while(1){}
exit();
}
