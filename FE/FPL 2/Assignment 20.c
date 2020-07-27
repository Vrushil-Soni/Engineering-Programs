#include<reg51.h>
   void main()
  {
        while(1)
        {       void delay (int);
                P1=0xCC;
                delay(1);
                P1=0x66;
                delay(1);
                P1=0x33;
                delay(1);
                P1=0x99;
                delay(1);
        }
        }
        void delay(int a)
                {
                unsigned int x,y;
                 for(x=0;x<10;x++)
                 for(y=0;y<a;a++);
                                  }