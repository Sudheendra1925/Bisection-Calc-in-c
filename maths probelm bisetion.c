#include<stdio.h>
main()
{
	float x,i,a,b,fx1,fx2,x1,x2,x3,x0,c,fx3;
	printf("enter the x3 expression");
	scanf("%f",&x3);
	printf("enter the x2 expression");
	scanf("%f",&x2);
	printf("enter the x1 expression");
	scanf("%f",&x1);
       printf("enter the constant expression");
       scanf("%f",&x0);
       printf("enter the a,b values");
       scanf("%f%f",&a,&b);
       fx1=(x3*a*a*a+x2*a*a+x1*a+x0);
       fx2=(x3*b*b*b+x2*b*b+x1*b+x0);
      if( fx1<0 && fx2>0)
      	
	   {
			 	  
       	for(i=0;i<30;i++)
       {
		   	c=(a+b)/2;
	 	fx3=(x3*c*c*c+x2*c*c+x1*c+x0);
       	   
       	   	if(fx3<0)
       	   	{
       	   		a=c;c=(a+b)/2;
				  }
		    else if(fx3>0)
		    {
		    	b=c;c=(a+b)/2;
			
			fx3=(x3*c*c*c+x2*c*c+x1*c+x0);
		}
		else if(fx3==0)
		{
			break;
		}
		
}
         printf("\nthe approx root is %f",c);
}
	 else if (fx1>0 && fx2<0)
	{
			
       	for(i=0;i<30;i++)
       {
	   
		   	c=(a+b)/2;
	 	fx3=(x3*c*c*c+x2*c*c+x1*c+x0);
       	   
       	   	if(fx3>0)
       	   	{
       	   		a=c;c=(a+b)/2;
				  }
		    else if(fx3<0)
		    {
		    	b=c;c=(a+b)/2;
			
			fx3=(x3*c*c*c+x2*c*c+x1*c+x0);
		}
		else if(fx3==0)
		{
			break;
		}
		
	}	
	printf("\nthe approx root is%f",c);
	}
	else
	{
		printf(" enter different a,b values");
	}

}
