#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,D;
	printf("Enter the coefficients a,b,c :");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0 && b==0 && c==0) printf("sorry: The cofficients must not be zero at the same time");
	else {
	
    if(a==0){
		printf("The solution leads to the solution of the first degree equation :");
        	
	        if(b==0)	printf("\nBut no solution : Division by zero (b=0)");
	     	else printf("\nx=%f",(-c/b));}
	         
	else if(b==0){
            	if(c<=0) printf("\n x1=%f and x2=%f",sqrt(-c/a),-sqrt(-c/a));
			    else printf("\n No solution in real numbers.");} 
	    else
		{
		D=(b*b)-(4*a*c);
		     if (D==0) printf("\n X1=X2= %f",(-b/2*a));
		     else if(D<0) printf("\n No solution in real numbers."); 
		          else printf("x1=%f and x2=%f",(-b-sqrt(D))/2*a ,(-b+sqrt(D))/2*a);
		}
		}}
