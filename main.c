#include<stdlib.h>
#include<stdio.h>
int menu();
int del();
void showdetail();
void bus();
void cycle();
void  riksha();
int changeamount();
int nor=0,noc=0,nob=0,amount=0,totv=0;
int ar=20,ab=100,ac=10;
int  main()
{
    int n;
    while(menu()==1)
    {
        printf("\n1.For bus\n2.For cycle\n3.For Riksha\n4.For show status\n5.For del\n6.Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:bus();
                    break;
            case 2:cycle();
                    break;
            case 3:riksha();
                    break;
            case 4:showdetail();
                    break;
            case 5:del();
                    break;
            case 6:exit(0);
            default :
                printf("\nInvalid Choice");
        }
    }
return 0;
}
int menu()
{
   int ch;
   while(1)
   {
        printf("\n1.For Entry\n2.For change parking amount\n3.Exit\n");
        scanf("%d",&ch);
        if(ch==1)
          return ch;
        else if(ch==2)
          changeamount();
        else if(ch==3)
          exit(0);
        else
           printf("\nInvalid choice");
   }
return 0;
}
int del()
{
    int b;
    printf("\n1.Delete all data\n2.Delete for specific\n3.Return to back\n");
    scanf("%d",&b);
    if(b==1)
    {
        nob=0;
        nor=0;
        noc=0;
        amount=0;
        totv=0;
    }
    else if(b==2)
    {
        int c,d;
      while(1)
      {
        printf("\n1.Delete buses\n2.Delete cycles\n3.Delete rikshas\n4.Delete amount\n5.Delete from total value\n6.Exit\n");
        scanf("%d",&c);
          switch(c)
        {
        case 1:printf("Enter the number:");
                   scanf("%d",&d);
                   nob-=d;
                   break;
            case 2:printf("Enter the number:");
                   scanf("%d",&d);
                   noc-=d;
                   break;
            case 3:printf("Enter the number:");
                   scanf("%d",&d);
                   nor-=d;
                   break;
            case 4:printf("Enter the amount:");
                    scanf("%d",&d);
                   amount-=d;
                   break;
            case 5:printf("Enter the number:");
                   scanf("%d",&d);
                   totv-=d;
                   break;
            case 6:return 0;
            default:
                printf("\nInvalid choice");
        }
      }
    }
    else if(b==3)
        return 0;
return 0;
}
void showdetail()
{
    printf("Number of buses are:%d\n",nob);
    printf("Number of cycles are:%d\n",noc);
    printf("Number of rikshas are:%d\n",nor);
    printf("Total number of vehicles:%d\n",nob+noc+nor);
    printf("Total gain amount:%d\n",amount);
}
void riksha()
{
    nor++;
    amount+=ar;
    totv++;
}
void cycle()
{
  noc++;
  amount+=ac;
  totv++;
}
void bus()
{
  nob++;
  amount+=ab;
  totv++;
}
int changeamount()
{
    int a;
    while(1)
    {
      printf("\n1.For bus amount\n2.For cycle amount\n3.For riksha amount\n4.Shoechanges\n5.Exit\n");
       scanf("%d",&a);
        if(a==1)
        {
          printf("Enter the parking amount for bus\n");
          scanf("%d",&ab);
        }
        else if(a==2)
        {
            printf("Enter the parking amount for cyclen\n");
            scanf("%d",&ac);
        }
        else if(a==3)
        {
            printf("Entre the parking amount for riksha\n");
            scanf("%d",&ar);
        }
        else if(a==4)
        {
            printf("Bus parking amount is:%d\n",ab);
            printf("cycle parking amount is:%d\n",ac);
            printf("riksha parking amount is:%d\n",ar);
        }
        else if(a==5)
             break;
        else
             return 0;
    }
     return 0;
}
