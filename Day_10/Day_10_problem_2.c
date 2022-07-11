//Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
//signed int G_Str_SteeringAngle_sint = -60;
//unsigned char G_Msg_SteeringInformation_Byte[3u];"
#include<stdio.h>
int main(){ // main program
    int reg0,reg1,reg2;  // initialize the varaible
    signed SteeringAngle_sint = -60; // the value of streering angle 
unsigned char SteeringInformation_Byte[3u]; //the array

reg0= SteeringAngle_sint|(0x00);      // doing or with 60 | 0x00 for knowning the value
printf("SteeringAngle_sint reg0:");
printf("%x %x \n",((reg0>>10)&1),(reg0>>11)&1);   // right shift the 10 and 11 bits 

reg1=SteeringAngle_sint|(0x00);
printf("SteeringAngle_sint reg1:");
for(int i=9;i>=2;i--){                 //For loop for we want the 1 byte date so we used for loop
    printf("%x ",(reg1>>i)&1);
}
    reg2= SteeringAngle_sint|(0x00);
    printf("\n");
printf("SteeringAngle_sint reg0:");  // its shows the same value
printf("%x %x ",((reg0>>1)&1),(reg0>>2)&1);
printf("\n");
}
