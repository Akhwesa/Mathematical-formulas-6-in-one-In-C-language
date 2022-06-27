#include<stdio.h>
#include<math.h>
int main()
{
	float pi;
	pi=3.14159265359;
	//Menu
	printf(" \t Calculator MENU\t \n");
	printf("--------------------------\n");
	printf("1.\t Area of a circle\n");
	printf("2.\t Surface Area of a cone\n");
	printf("3.\t Volume of a Sphere\n");
	printf("4.\t Volume of a cube\n");
	printf("5.\t Area of a Triangle\n");
	printf("6.\t Quadratic equations\n");
	printf("---------------------------\n");
	printf("Enter Number of ur Choice \n");
	
	int choice;
	scanf("%d",&choice);
	//Area of a circle
	if (choice==1)
	{
		float r, area;
		const float pi = 3.142;
		printf("Enter Radius of the circle:\n");
		scanf("%f",&r);
		area = pi * r * r;
		printf("The Area of a circle is: %f", area);
	}
	//Surface Area of a cone
	else if (choice==2)
	{
	float area,pi,r,h,h_r,r_h_r;
	pi=3.142;
	
	printf(" SURFACE AREA OF A CONE\n");
	
	printf(" Enter The Radius:");
	
	scanf("%f",&r);
	
	printf("\n Enter the Height:");
	
	scanf("%f",&h);
	h_r = pi * r * r;
	r_h_r = pi * r * h;
	area = h_r + r_h_r;
	printf("\n Surface Area of this Cone is: %f",area);
	}
	//Volume of a Sphere
	else if (choice == 3)
	{
	float radius,l,volume,q,t;
	q= 4/3;
	printf("Enter the radius:\n");
	scanf("%f",& radius);
	//formula = 4/3 pi r^3
	l= pow(radius,3);
	t= q*pi;
	volume = t * l;
	printf("Volume is:\n %f", volume);
		 
	}
	//Volume of a cube
	else if ( choice == 4)
	{
		float v,a;
		printf("Enter The Length of Edge:");
		scanf("%f",&a);
		v = pow(a,3);
		printf("Volume is:%f", v);
	}
	//Area of a Triangle
	else if ( choice == 5)
	{
		float area,b,h;
		printf("\nEnter the Base:");
		scanf("%f",& b);
		printf("\nEnter The Height:");
		scanf("%f", &h);
		area = 0.5 * b * h;
		printf("The Area of Triangle is:%f", area);
	}
	//Quadratic equations
	else if ( choice == 6)
	{
	float a,b,c, x1, x2, x, sq;
	printf("Enter values for a, b, c as co-efficient of the Quadratic equation.\n");
	scanf("%f%f%f",&a,&b,&c);
	x = b*b - 4*a*c;
	sq = sqrt(x);
	x1 = (-b+sq)/(2*a);
	x2 = (-b-sq)/(2*a);
	printf("\nAnswer is: %f or %f", x1, x2);
	}
	else 
	{
		printf("Invalid Entry.( Use 1 - 5 )");
		main();
	}
}
