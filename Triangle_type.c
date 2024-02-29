#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of side a : ");
    scanf("%d", &a); 
    printf("Enter the length of side b : ");
    scanf("%d", &b); 
    printf("Enter the length of side c : "); 
    scanf("%d", &c); 
 

	if(a+b>c && b+c>a && a+c>b)
    {
    	  	
      	if(a==b && b==c)
        {
        	printf("Equilateral Triangle");
        }
      	else if(a==b || b==c || a==c)
        {
        	printf("Isosceles Triangle");
        }
      	else if((c*c)==(a*a)+(b*b) || (b*b)==(a*a)+(c*c) || (a*a)==(c*c)+(b*b))
        {
        	printf("Right-angle Triangle");	
        }
      	else
        {
        	printf("Scalene Triangle");
        }    
    }
	else
    {
    	printf("Triangle is not possible");
    }

	return 0;
}

// Code by : alpha_maverick