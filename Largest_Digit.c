#include<stdio.h>
int main()
{
    int num, Reminder,Largest=0;
    scanf("%d",&num);
    while(num>0)
    {
        Reminder=num%10;
        if(Largest<Reminder)
        {
            Largest=Reminder;
        }  
         num=num/10;
    }
    printf("%d", Largest);
    return 0;
}
