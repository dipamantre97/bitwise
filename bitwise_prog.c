/*#include<stdio.h>
int main()
	{
		int data,bit;
		printf("enter data\n");
		scanf("%d",&data);
		printf("enter bit no\n");
		scanf("%d",&bit);
		//to set a perticular bit
		int result=(data|(1<<bit));
		printf("after setting bit=%d\n",result);
		//to clear perticular bit
		int result1=(data&(~(1<<bit)));
		printf("after clearing bit=%d\n",result1);
		//to toggle a bit
		int result2=(data^(1<<bit));
		printf("after toggle a bit=%d\n",result2);
		return 0;
	}
*/

/*--------------------------------------------------------------*/

//To check LSB is set or not

/*#include<stdio.h>
int main()
{
	int data,bit;
                printf("enter data\n");
                scanf("%d",&data);
                printf("enter bit no\n");
                scanf("%d",&bit);
		if((data>>bit)&1)
		printf("bit is set");
		else
		printf("bit is clear");

		return 0;
}
-------------------------------------------------------------------*/

//To check MSB is set or not
/*
#include<stdio.h>
int main()
{
        int data,bit;
                printf("enter data\n");
                scanf("%d",&data);
                printf("enter bit no\n");
                scanf("%d",&bit);
                if((data>>bit)&1)
                printf("bit is set");
                else
                printf("bit is clear");

                return 0;
}

-----------------------------------------------------------------------*/

//To get nth bit of a no
/*
#include<stdio.h>
int main()
{
        int data,bit;
                printf("enter data\n");
                scanf("%d",&data);
                printf("enter bit no\n");
                scanf("%d",&bit);
                printf("nth bit %d of data %d\n",(data>>bit)&1,data);

                return 0;
}
-------------------------------------------------------------------------*/

//Write a C program to get highest set bit of a number.
//
/*
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8 // Integer size in bits //

int main()
{
	        int data,bit=8,cnt=0;
                printf("enter data\n");
                scanf("%d",&data);
                //printf("enter bit no\n");
                //scanf("%d",&bit);
		for(int i=0;i<INT_SIZE;i++)
		{
			if((data>>i)&1)
			{
				cnt=i;
			}
		}
		printf("Highest order set bit in %d is %d", data, cnt);


		return 0;
}


--------------------------------------------------------------------*/

//Write a C program to get lowest set bit of a number.

/*

#include<stdio.h>
#define INT_SIZE sizeof(int) * 8 // Integer size in bits //

int main()
{
                int data,bit=8,cnt=1,i;
                printf("enter data\n");
                scanf("%d",&data);
                //printf("enter bit no\n");
                //scanf("%d",&bit);
                for(i=0;i<INT_SIZE;i++)
                {
                        if((data>>i)&1)
                        {
                                cnt++;
                        
			break;
			}
                }
		if(cnt==2)
		{
                printf("lowest order set bit in %d is %d", data, i);
		}


                return 0;
}
------------------------------------------------------------*/

//Write a C program to count trailing zeros in a binary number
/*
#include<stdio.h>
#define INT_SIZE sizeof(int) * 8 // Integer size in bits //

int main()
{
                int data,i,cnt=0;
                printf("enter data\n");
                scanf("%d",&data);
                //printf("enter bit no\n");
                //scanf("%d",&bit);
                for(i=0;i<INT_SIZE;i++)
                {
                        if((data>>i)&1)
                        {
                                break;

                        }
			cnt++;
                }
                
               
                printf("trailing zeros in %d is %d", data, cnt);
                


                return 0;
}
----------------------------------------------------*/
//WAP to count leading zeros in given no

/*#include<stdio.h>
#define INT_SIZE 7 // Integer size in bits //

int main()
{
                int data,i,cnt=0;
                printf("enter data\n");
                scanf("%d",&data);
                //printf("enter bit no\n");
                //scanf("%d",&bit);
                for(i=INT_SIZE;i>0;i--)
                {
                        if((data>>i)&1)
                        {
                                break;

                        }
                        cnt++;
                }
                
               
                printf("leading zeros in %d is %d", data, cnt);
                


                return 0;
}
-----------------------------------------------------------------*/

//Write a C program to count total zeros and ones in a binary number.

/*#include<stdio.h>
//#define INT_SIZE sizeof(int)*8
int main()
{
        int data,bit=7,cnt=0,cnt1=0;
                printf("enter data\n");
                scanf("%d",&data);
		        while(bit>=0)
        {
                if((data>>bit)&1)
		{
                cnt++;
		}
		else
		{
		cnt1++;
		}

                bit--;
        }
		printf("no of 1's=%d,no of zeros=%d",cnt,cnt1);	

                return 0;
}
-------------------------------------------------------------*/

//Write a C program to rotate bits of a given number
/*
#include<stdio.h>
int main()
{
        int data,bit;
                printf("enter data\n");
                scanf("%d",&data);
                printf("enter bit no\n");
                scanf("%d",&bit);
		printf("before ratating=%d\n",data);
		int result=(data<<3);

                printf("after rotating=%d",result);

                return 0;
}
--------------------------------------------------------------------*/

//a C program to convert decimal to binary number system using bitwise operator
/*#include<stdio.h>
int main()
{
        int data,bit=31;
        printf("enter data\n");
        scanf("%d",&data);
        while(bit>=0)
        {
                printf("%d",(data>>bit)&1);
                if(bit%8==0){
                        printf(" ");
                }
                bit--;
        }
        return 0;
}
-----------------------------------------------------------------------*/
//Write a C program to swap two numbers using bitwise operator.
//
/*#include<stdio.h>
int main()
{
	int a=2,b=3;
	printf("before swapping=%d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping=%d %d\n",a,b);
}

-----------------------------------------------------------------*/

//Write a C program to check whether a number is even or odd using bitwise operator.

/*#include<stdio.h>
int main()

{
	int n;
	printf("enter data\n");
	scanf("%d",&n);
	if(n&(n-1))
			printf("odd no");
			else
			printf("even");
		

}

-----------------------------------------------------------*/

//swap given perticular bits
/*
#include<stdio.h>
int main()
        {
                int data,bit1,bit2;
                printf("enter data\n");
                scanf("%d",&data);
                printf("enter bits to swap\n");
                scanf("%d %d",&bit1,&bit2);

                printf("enter data after swapping bit=%d\n",data);

                data=data^(1<<bit1);
                data=data^(1<<bit2);
                printf("enter data after swapping bit=%d",data);
        return 0;
        }
--------------------------------------------------------------*/

// swapping nibble
/*
 *
 #include <stdio.h>

int main()
{
 int data;
 printf("enter data\n");
 scanf("%d",&data);
 printf("before swapping =%d\n",data);
 int a= ((data & 0x0FFFF)<<12);
 int b=  ((data & 0x0FFFF)>>12);
 int c= a|b;
 printf("after swapping =%d\n",c);

    return 0;
}
-------------------------------------------------------------*/
//Write a C program to check if the given number is power of 2.

/*#include<stdio.h>
int main()

{
        int n;
        printf("enter data\n");
        scanf("%d",&n);
        if(n&(n-1))
                        printf("not power of 2");
                        else
                        printf("power of 2");


}
--------------------------------------------------------------------*/

//WAP to swap all even and odd bits
//
#include<stdio.h>
int main()
{
	int n;
	printf("enter data\n");
	scanf("%d",&n);
    int odd_mask = 0X55555555;
    int even_mask = 0XAAAAAAAA;

    int odds = (n & odd_mask);
    int even = (n & even_mask);

    odds <<= 1;
    even >>= 1;

    int result = odds | even;
	printf("after swapping=%d",result);
	return 0;
}




















