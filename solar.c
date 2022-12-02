#include<reg51.h>


sbit ldr1=P1^3;
sbit ldr2=P1^4;

sbit reed1=P1^0;
sbit reed2=P1^1;

sbit m1=P2^0;
sbit m2=P2^1;


void delay(unsigned int a)
	{ while(a--); }

void main()
	{
	 
	 	int flag=1;

		while(1)
			{
			 	if(flag==1)
					{ m1=0; m2=1; }
			 	else if(flag==2)
					{ m1=1; m2=0; }
				else if(flag==3)
					{ m1=1; m2=1; }

				if(ldr1==1&&ldr2==0)
				{
					if(reed1==0)
						{ flag=2; }
					else if(reed2==0)
						{ flag=1; }
					else if(flag==3)
						{ flag=1; }
					
				}
				else
					{
					 flag=3;
					}



			}

	}

