//I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
#include<stdio.h>
int main(){	//initiaze of two value
    int a=0x58; //its the value of SSPSTAT convert hex to dec
    int b=0xff; // taken to make the three bits to 0
    int c=a^b; // "xor" the value to make bits to 0 and store in c
    printf("%x",c); // printing the value
}
//II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
#include<stdio.h>
int main(){
	int a=0x55; initiaze the value 
	int b=a&(1<<0); //changing the postion of 0 bit to 0
	int c=a&(1<<1); //changing the postion of 1 bit to 0
	int d=a&(1<<7); //changing the postion of 7 bit to 0
	printf("%d %d %d",b,c,d); //printing the saved variable of position change
}
