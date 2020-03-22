#include<stdio.h>
main()
{
int salary,total;
double bonus; 
char grade ;
printf("enter the value of salary and grade\n");
scanf("%d %c",&salary,&grade);

switch(grade)
   
   	if(salary>=15000)
{

	case 'a':
	        bonus=.03*salary;
	         break;
	case 'b':
         	bonus=.025*salary;
	         break;
	case 'c':
	        bonus=.015*salary;
	         break;
	default:printf("invaldid grade\n");
	}
	
   else
   {
   	if(salary<15000)
   	
   	   {
		  
   	    case 'A':
   	    	bonus=.02*salary;
		   	break;
		case 'B':
		   	bonus=.015*salary;
			   break;
		case 'C':
			bonus=.01*salary ;  	
	   
   }
}
   total=salary+bonus;
   printf("total=%d",total);

}
