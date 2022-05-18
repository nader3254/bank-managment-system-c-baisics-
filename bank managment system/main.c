#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>
//global
 static int i =0;static int y=0;static int i2=0;
char R0 [60],R1[10]={"          "};  //recievers
int ano[200],age[200],p[200];
 float blnc[200];
char nm[200][60]={{},{},{},{},{},{'n','a','d','e','r'},};
char ps[200][10]={{},{},{},{},{},{'0','0','0','0','0','0',' ',' ',' ',' '},};
//========================================================
void initializer(){//tested
    int s;p[5]=1;ano[5]=5;
for(s=0;s<=199;s++){
    if (s==5){}
    else
        {
            nm[s][0]=' ';nm[s][1]=' ';nm[s][2]=' ';nm[s][3]=' ';nm[s][4]=' ';
            ps[s][0]=' ';ps[s][1]=' ';ps[s][2]=' ';ps[s][3]=' ';ps[s][4]=' ';
            age[s]=0;ano[s]=s;blnc[s]=0;p[s]=3;

        }
}


}
//============================================================================
void enter(int x,char m[])                    //tested  enter(60,R0);
{

char R[x];

 int j=0;scanf("%s",&R);
  for(j=0;j<=x-1;j++){m[j]=R[j];}


}
//==================================================================
bool sc()      //tested
{int m;bool b0=false,b1=false;

    for(m=0;m<=200;m++)
        {
           // char* ptr_1=&R0;char* ptr_2=&nm[m];
             // char* ptr_3=&R1;char* ptr_4=&ps[m];
            //char* p5 =&b0;char*p2=&b1;

          // if(*ptr_1==*ptr_2){b0=true;};
          // if(*ptr_3==*ptr_4){b1=true;};
         // printf("%c",nm[m][0]);
      //  b0= nm[m][0]==R0[0];printf("\n b0 =%d",b0);//working

          if (nm[m][0]==R0[0]&&nm[m][1]==R0[1]&&nm[m][2]==R0[2]&&nm[m][3]==R0[3]&&nm[m][4]==R0[4])//working
              {b0=true;
              //printf("\n b0 =%d",b0);}//i2=a;/* printf("\ntmmmmmmmmmam\ni=%d\n",i);}*/;break;
              }

        if(ps[m][0]==R1[0]&&ps[m][1]==R1[1]&&ps[m][2]==R1[2]&&ps[m][3]==R1[3]&&ps[m][4]==R1[4]&&ps[m][5]==R1[5])
        {
            b1=true;
            //printf("\n b1 =%d",b1);
        }

 if (b1&&b0){i=m;break;}

 }

return b0&&b1;

}
//==============================================================================
void clr()  //tested
{
    printf("\n press any key to continue.......\n");
    getch();system("cls");
}
//=======================================================================================
void delay() //tested
{
int bb;
for (bb=0;bb<=166666;bb++)
    {

       if (bb==27777){printf("\nloading .");sleep(1);printf(" .");
        sleep(1);
        printf(" .");sleep(01);printf(" .");sleep(0.5);
        };}

}
//==================================================================================
 void mm(){printf("welecome MR.%s\n\n\n\n\n\t\t\t\t\t\t MAIN MENU\n",nm[i]); } //tested
 //====================================================================================
 int main_menu(int x)  // main_menu(position);tested
 {int yy=0;
 mm();
 switch(x)
 {
     case 1 :   //manager y=1,2,3,4,5
         s1 :
           printf("\n\n\n\n\n\t\t\t[1]ADD NEW USER\n\t\t\t[2]REMOVE USER\n\t\t\t[3]UPDATE USER DATA\n\t\t\t[4]VIEW USERS LIST\n\t\t\t[5]EXIT\n");
          printf("\n\nEnter your selection :: ") ;scanf("%d",&yy);//printf("\nyy=%d",yy);//tsted
          if (yy!=3&&yy!=2&&yy!=1&&yy!=4&&yy!=5){printf("\nINVALID INPUT \nTRY AGAIN.....\n");delay();clr();goto s1;}
          y =yy;
         break;
     case 2 :  //employer
         s2 :
              printf("\n\n\n\n\n\t\t\t[1]ADD NEW USER\n\t\t\t[2]VIEW USERS LIST\n\t\t\t[3]EXIT\n");
          printf("\n\nEnter your selection :: ") ;scanf("%d",&yy);//printf("\nyy=%d",yy);
          if (yy==1 ){y=1;}
          if(yy==2){y=4;}
          if (yy==3){y=5;}
          if (yy!=3&&yy!=2&&yy!=1){printf("\nINVALID INPUT \nTRY AGAIN.....\n");delay();clr();goto s2;}
         break;
     case 3 : //client
         s3 :
            printf("\n\n\n\n\n\t\t\t[1]UPDATE USER DATA\n\t\t\t[2]EXIT\n");
          printf("\n\nEnter your selection :: ") ;scanf("%d",&yy);//printf("\nyy=%d",yy);
          if (yy==1 ){y=3;}
          if(yy==2){y=5;}
          if (yy!=2&&yy!=1){printf("\nINVALID INPUT \nTRY AGAIN.....\n");delay();clr();goto s3;}
         break;
     default :
         printf("UNRECOGNIZED USER POSITION ....\nPLESE GO TO THE BANK MANAGER TO SET YOUR POSITION ...\nSORRY FOR WASTING YOUR TIME.....\n " );delay();clr();
         break;
 }

return y;
 }
 //==============================================================================================
void lgn()        //tested//lgn();
{  bool x;
 start :
    printf("\t\t\t\t\t\t\t WELECOME\n\t\t\t\t\t\t   BANK MANAGMENT SYSTEM\nDESIGNED BY :NADER HANY AHMED\n\n\n\n\n\n");

printf("Enter USERNAME ::  ");enter(60,R0);;printf("Enter PASSWORD ::  ");enter(10,R1);
//test
//int q; for(q=0;q<=9;q++){printf("\n%c",R1[q]);}
  x =sc();
if(x==1)
    {   delay();
        printf("\nwelecome MR.%s",nm[i]);
        clr();
      //comming soon
};
if(x==0){
        printf("\nwrong USERNAME or PASSWORD");
        printf("\nTRY AGAIN..");delay();clr();
        goto start;
};



//printf("\nx= %d \n",x);//test pass
//printf("\nR0=%s\nR1=%s \nnm[5]=%s\nps[5]=%s",R0,R1,nm[5],ps[5]);//test pass

}
//=====================================================================================================
void add()//tested
{int a=0;
for (a=0;a<=199;a++)
{// printf("\n%s\n",nm[a]);
    if (nm[a][0]==' '&&nm[a][1]==' '&&nm[a][2]==' '&&nm[a][3]==' '&&nm[a][4]==' '&&ps[a][0]==' '&&ps[a][1]==' '&&ps[a][2]==' '&&ps[a][3]==' '&&ps[a][4]==' ')
        {i2=a;/* printf("\ntmmmmmmmmmam\ni=%d\n",i);}*/;break;}
}
printf("Enter USERNAME :: ");scanf("%s",&nm[i2]);/*printf("\n nm=%s",nm[i]);*/
   printf("ENTER PASSWORD :: ");scanf("%s",&ps[i2]);/*printf("\n pss=%s",ps[i]);*/
    printf("ENTER AGE :: ");scanf("%D",&age[i2]);
     printf("ENTER INITIAL DEPOSITE AMOUNT :: ");scanf("%f",&blnc[i2]);
     delay();clr();
     printf("\nACCOUNT ADDED SUCCESFULLY  \n\n\nACCOUT NO. :%d\nACCOUT USERNAME :%s\nACCOUT PASSWORD :%s\nACCOUT INITIAL DEPOUSITE :%f\n",ano[i2],nm[i2],ps[i2],blnc[i2]);
    clr();y=0;
   i2=0;

}
//========================================================

void viewlist(){//tested
    char init[4][10]={"      ","manager","employer","client"};
int t;
printf("\n************************************************************************************************************************");
printf("\t\tACCOUNT NO. \t\tUSERNAME \t\tPOSITION \t\tBALANCE \n");
printf("************************************************************************************************************************\n\n");
for (t=0;t<=199;t++)
{int m =p[t];
    printf("\t\t%d            \t\t%s         \t\t%s         \t\t%f      \n",ano[t],nm[t],init[m],blnc[t]);//here
    printf("\n************************************************************************************************************************\n");
}
printf("FOR MAIN MENU PRESS [1]AND [0] TO EXIT :: ");int x ;scanf("%d",&x);//printf("x=%d",x);
if (x==0){}
if(x==1){clr();y=0;}
}
//============================================================================================
void dlt()//tested
{ crt:
    clr();int w;
printf("\nENTER ACCOUNT NO. :: ");scanf("%d",&w);if(w>=200||w<0){printf("INVALID INPUT \nTRY AGAIN.....\n");goto crt;}
i2=w;printf("\nCOFIRMING :\nTHE ACCOUNT NO. = %d\nUSERNAME : %s \nPASSWORD : %s\nBALANCE : %f \nTO CONFIRM PRESS [1] AND [0] TO RETURN TO MAIN MENU : \n",ano[i2],nm[i2],ps[i2],blnc[i2]);
int conf=0;scanf("%d",&conf);
if (conf==0){printf("\t\t\tproccess cansled :\n");delay();clr();y=0;}
if (conf==1){
       // nm[i2]={' ',' ',' ',' ',' ',' ',' ', ' ',' ',' '};
   int t;   for (t=0;t<=59;t++){nm[i2][t]=' ';};t=0;
    for (t=0;t<=9;t++){ps[i2][t]=' ';};t=0;
age[i2]=0;p[i2]=3;blnc[i2]=0.0;printf("\t\t\t ACCOUNT DELETED SUCCESSFULY \n");delay();clr();y=0;}
//printf("\nconf =%d\n",conf);clr();
if(conf!=0&&conf!=1){printf("INVALID INPUT \nTRY AGAIN...dltconf\n");y=0;};i2=0;
}
//=======================================================================
void blc() //update
{
    int mx;
zza:
    clr();
printf("\n\n\n[1]DEPOSITE\n[2]WITHDROW\n[3]RETURN TO MAIN MENU\n");printf("Enter your choice : ");
scanf("%d",&mx);
//if(mx==1&&p[i]==1){printf("enter account number : ");scanf("%d",i2);
  //  printf("\nenter the new name :");scanf("%s",&nm[i2]);printf("%s",nm[i2]);}
if(mx==1){printf("enter the deposite amount :");float val;scanf("%f",&val);;blnc[i]+=val;printf("\n\ succesfull process \nthank you for your coopration\nyour balance is : %f",blnc[i]);;clr();main_menu(p[i]);/*printf("%f",)*/;}
if(mx==2){printf("enter the withdraw amount :");float val;scanf("%f",&val);blnc[i]-=val;printf("\n\ succesfull process \nthank you for your coopration\nyour balance is : %f",blnc[i]);;clr();main_menu(p[i]);}
if(mx==3){delay();clr();y=0;}
if(mx<1||mx>3){printf("INVALID INPUT \nTRY AGAIN.....\n");delay();clr();goto zza;}
}
//===================================================================================
void upd()//tested
{ int m;
zz:
printf("\n\n\n[1]CHANGE NAME\n[2]CHANGE PASSWORD\n[3]CHANGE AGE \n[4]UPDATE BALANCE \n[5]RETURN TO MAIN MENU\n");
printf("Enter your choice : ");
scanf("%d",&m);
//if(m==1&&p[i]==1){printf("enter account number : ");scanf("%d",i2);
  //  printf("\nenter the new name :");scanf("%s",&nm[i2]);printf("%s",nm[i2]);}
if(m==1){printf("enter the new name :");scanf("%s",&nm[i]);/*printf("%s",nm[i]);*/
printf("\n\naccount name is changed succesfully \nthank you for your coopration\n");clr();y=0;
}
if(m==2){printf("enter the new password :");scanf("%s",&ps[i]);/*printf("%s",ps[i]);*/printf("\n\naccount password is changed succesfully \nthank you for your coopration\n");clr();y=0;}
if(m==3){printf("enter the new AGE :");scanf("%d",&age[i]);printf("\n\naccount age is changed succesfully \nthank you for your coopration\n");clr();y=0;}
if(m==4){blc();}
//
if(m==5){delay();clr();y=0;}
if(m<1||m>5){printf("INVALID INPUT \nTRY AGAIN.....\n");delay();clr();goto zz;}

}
//==============================================================================
void main() //tested
{
initializer();
//int q; for(q=0;q<=9;q++){printf("\n%c",R1[q]);}
lgn();
ax :

switch(y)
{ case 0:
   main_menu(p[i]);goto ax;

    break;


case 1:
    system("cls");printf("add interface\n"); add();goto ax;
    break;
case 2:

 printf("dlt interface\n");dlt();goto ax;
    break;
case 3 :
    printf("update interface\n");
 system("cls");upd();goto ax;
    break;
case 4:
    printf("viewlist interface\n");
 viewlist();goto ax;
    break;
case 5:
     //add();y=0;
     printf("exit interface\n");
    clr(); printf("\nTHIS SYSTEM IS BROUGHT TO YOU BY : \nNADER HANY");
    break;
default:
    printf("\nINVALIED INPUT \nTHIS SYSTEM IS BROUGHT TO YOU BY : \nNADER HANY");
    clr();goto ax;
    break;


}

}
