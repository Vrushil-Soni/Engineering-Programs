#include"reg51.h"
sbit sw = P1^0;
void MSDelay(unsigned int);
void main(void)
{             
 while(1)
 {
            if(sw==1)
            {
            P2=0x55;                     //ON all LEDs
           MSDelay(50);              //Delay
             }
            else 
            {
              P2=0x00;                   //OFF all LEDs
               MSDelay(50);                      //Delay                        //Delay
              }
            }
            }
 void MSDelay(unsigned int itime)
 {            
 unsigned int i,j;
  for(i=0;i<=itime;i++)
  for(j=0;j<=1275;j++);
 }