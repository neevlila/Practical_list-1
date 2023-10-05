#include<iostream.h>
#include<conio.h> 
void main()
{
    int a[10],i,n;
    clrscr();
    
    printf("Enter size of the array ::");
    scanf("%d", &n);
 
    printf("Enter elements in array ::");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("All negative elements in array are ::");
    for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d\t",a[i]);
        }
    }
    
	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
	
    getch();
}
