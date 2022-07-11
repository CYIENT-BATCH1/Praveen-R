//Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
#include<stdio.h>
int main(){ // main program
    int n,pos, pos_1; //initialize the varaible
    n=0xFA; // taking n value as hex value to change position
    pos=3; // changing the postion 3 in hex value
    pos1=7;// changing the position 7 in hex value
    n=n|(1<<pos)|(1<<pos1); // changing the value to 1 by left shifting the position
    printf("%x",n); // print value of n
    return 0;
}
//II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3
#include <stdio.h>
int main(){
    int n,,x,i;
    n=0xf3; //initialize the value
for(i=2;i>=0;i--){ //for loop to change the bit 0 to 2
    x=(n>>i)&1; // changing the position by right shift
    printf("%x",x); // printing the value
}
