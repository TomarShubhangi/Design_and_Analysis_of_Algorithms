#include<stdio.h>
#include<math.h>
int c1(int a,int b)
{
    double x = log(a)/log(b);
    printf("T(n)=O(n^%f)",x);
}
int c2(int a,int b,float p)
{
    double x = log(a)/log(b);
    if(p>-1)
    {
	    int y=p+1;
        printf("T(n)=O(n^%f log^%d n)",x,y);
    }
    else if(p==-1)
	{
        printf("T(n)=O(n^%f log log n)",x);
    }
    else
	{
	    printf("T(n)=O(n^%f)",x);
    }
}
int c3(int k,float p)
{
    if(p>=0)
    {
	    printf("T(n)=O(n^%d log^%d n)",k,p);
    }
    else
    {
        printf("T(n)=O(n^%d)",k);
    }
}
int main()
{ 
    int a,b,k,d;
    float p;
    printf("the equation is T[n]=a t[n/b]]+O[n^k log^p n]\n");
    printf("enter the respective value of a,b,k,p where a>=1,b>1,k>=0,p must be real no.\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("k:");
    scanf("%d",&k);
    printf("p:");
	scanf("%f",&p);
	d=pow(b,k);
	if(a>d)
	{
        c1(a,b);
    }
    else if(a==d)
    {
        c2(a,b,p);
    }
    else
    {
        c3(k,p);
    }
}





