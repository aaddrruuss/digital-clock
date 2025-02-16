//DIGITAL CLOCK
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void main(){

int hour, minute, second;
hour=minute=second=0;
while(1) {
    system("cls"); 
    printf("%02d : %02d : %02d ",hour,minute,second); 
    fflush(stdout);
second++;
if (second == 60){
    second = 0;
    minute++;
}
if (minute == 60) {
    second = 0;
    minute = 0;
    hour++;
}
if (hour == 24){
    second = 0;
    minute = 0;
    hour = 0;
}
sleep(1);
}

}