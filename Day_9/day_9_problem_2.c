//I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON”
//if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”
#include <stdio.h>
int main(){ // main program
  int num1,num2,pos=3,pos1=6,pos2=7; // initialize the varaiable and position change bits
  printf("enter the values");    // get the value from user
  scanf("%d%d",&num1,&num2); 
  if((48 & num1) == 48)     /// 48 is because of hex value 0x06 CHS3,CHS2,CHS1 register
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);  // position changing and saving in num2
      printf("%d",num2);  // printing the final value num2
  }
  else
  printf(" not equal nothing");

}
