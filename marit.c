#include<stdio.h>
#include<string.h>
#include<time.h>
void chek();
void dinesh();
void chekprim();
void prittime();
void limtprim();
void chekamsr();
void limtamsr();
void chekplrm();
void prttable();
void mauot();
void doit();
void linetoword();
void linetowords();
void linetonum1();
void linetonum2();
int power(int);
void timehr();
void greeting();
int old();
int s,yy,oy,od=0;
void day();
void manth();
void calender();
char na[6],wo[10][10],sr[50],wos[10][15],tem[10],srs[50];
int wn=0,wns=0,same=0,x,n,m,y,d;
int hr;
void main()
{
    timehr();
    greeting();
  printf(" \n i'm MARIT the roboat created by DINESH ANBU\n");
  printf("\n MARIT:please enter your name\n YOU:");
  gets(na);
  strupr(na);
  na[6]='\0';
  printf(" MARIT:lets chat with me %s. for any details enter \"more\"\n %s:",na,na);
  gets(sr);
      do
      {
          linetoword();
          strcpy(srs,"hi hai hii hiii haii dai hello");
      doit();
     if(same>=1)
     {
    printf(" MARIT:\aHi there!!");
    greeting();
        printf("%c\n %s: ",1,na);
    same=-1;
     }
     if(same!=-1)
     {
      strcpy(srs,"more");
      doit();
      if(same==1)
      {
        mauot();
        same=-1;
        }
     }
    if(same!=-1)
     {
      strcpy(srs,"how are you");
      doit();
      if((same==3)&&(wn==3))
      {
        printf(" MARIT : I'M fine %c\n %s : ",2,na);
        same=-1;
        }
     }
       if(same!=-1)
        {
           strcpy(srs,"what is your name");
           doit();
           if(same>=2)
           {
            printf(" MARIT : My name is MARIT The robot created by DINESH ANBU \n %s : ",na);
            same=-1;
           }
        }
        if(same!=-1)
        {
            strcpy(srs,"who are you");
           doit();
           if(same==3)
           {
            printf(" MARIT : My name is MARIT The robot created by DINESH ANBU \n %s : ",na);
            same=-1;
        }
        }
        if(same!=-1)
        {
            strcpy(srs,"old");
            doit();
            if(same==1)
            {
            strcpy(srs,"how old are you");
            doit();
           if(same>=3)
           {
            printf(" MARIT : I'm %d year old robot \n %s : ",old(),na);
            same=-1;
        }
        }
        }
   if(same!=-1)
        {
            strcpy(srs,"age");
            doit();
            if(same==1)
            {
            strcpy(srs,"what your is you age");
            doit();
           if(same>=2)
           {
            printf(" MARIT : I'm %d year old robot \n %s : ",old(),na);
            same=-1;
        }
        }
        }
   if(same!=-1)
        {
            strcpy(srs,"do doing there");
            doit();
            if(same==1)
            {
           strcpy(srs,"what are do you doing there");
           doit();
           if(same>=2)
           {
            printf(" MARIT : I'm always chating with robots and people  \n %s : ",na);
            same=-1;
           }
        }
        }
        if(same!=-1)
        {
            strcpy(srs,"love like");
            doit();
            if(same>=1)
            {
            strcpy(srs,"i love like you");
            doit();
           if(same>=2)
           {
            printf(" MARIT : I Love you too %c %s \n %s : ",3,na,na);
            same=-1;
        }
        }
        }
    if(same!=-1)
        {
            strcpy(srs,"boy girl male female");
            doit();
            if(same>=1)
            {
            strcpy(srs,"you are boy or girl male female");
            doit();
           if(same>=2)
           {
            printf(" MARIT : I am male robot  \n %s : ",na);
            same=-1;
        }
        }
        }
        if(same!=-1)
        {
            strcpy(srs,"eat ate food eating");
            doit();
            if(same>=1)
            {
            strcpy(srs,"you are eat ate food eating");
            doit();
           if(same>=2)
           {
            printf(" MARIT : I am not human, so not eat the food  \n %s : ",na);
            same=-1;
        }
        }
        }
        if(same!=-1)
        {
            strcpy(srs," single comitted married playboy");
            doit();
            if(same>=1)
            {
            strcpy(srs,"you are single comitted married playboy");
            doit();
           if(same>=2)
           {
            printf(" MARIT : I am single \n %s : ",na);
            same=-1;
        }
        }
        }







{

            if(same!=-1)
       {
      strcpy(srs,"CHEKPRIM");
      linetowords();
      chek();
      if(same==1)
      {
          linetonum1();
        chekprim();
        same=-1;
        }
     }
        if(same!=-1)
     {
      strcpy(srs,"LIMTPRIM");
    linetowords();
    chek();
      if(same==1)
      {
          linetonum1();
        limtprim();
        same=-1;
        }
     }
     if(same!=-1)
     {
      strcpy(srs,"CHEKAMSR");
      linetowords();
      chek();
      if(same==1)
      {
          linetonum1();
        chekamsr();
        same=-1;
        }
     }
     if(same!=-1)
     {
      strcpy(srs,"LIMTAMSR");
      linetowords();
      chek();
      if(same==1)
      {
        linetonum1();
        limtamsr();
        same=-1;
        }
     }
     if(same!=-1)
     {
      strcpy(srs,"CHEKPLRM");
      linetowords();
      chek();
      if(same==1)
      {
          linetonum1();
        chekplrm();
        same=-1;
        }
     }
     if(same!=-1)
     {
      strcpy(srs,"PRITTIME");
      linetowords();
      chek();
      if(same==1)
      {
        prittime();
        same=-1;
        }
     }


     if(same!=-1)
     {
      strcpy(srs,"PRTTABLE");
      linetowords();
      chek();
      if(same==1)
      {
        linetonum1();
        prttable();
        same=-1;
        }
     }
     if(same!=-1)
     {
      strcpy(srs,"CALENDER");
      linetowords();
      chek();
      if(same==1)
      {
          linetonum2();
        calender();
        same=-1;
        }
     }
}
     if(same!=-1)
     {
      strcpy(srs,"marit");
      doit();
      if(same==1)
      {
        printf(" MARIT : Yeah!! Its My Name. Named  by DINESH ANBU  \n %s : ",na);
        same=-1;
        }
     }


     if(same!=-1)
     {
      strcpy(srs,"dinesh dhinesh kumar anbu");
      doit();
      if(same>=1)
      {
        printf(" MARIT : Yeah!! Its My Boss Name  \n %s : ",na);
        same=-1;
        }
     }


if(same!=-1)
     {
      strcpy(srs,"ok kk wow nice mm hm yes bye super excellent");
      doit();
      if(same>=1)
      {
        printf(" MARIT : OK  \n %s : ",na);
        same=-1;
        }
     }












if(same!=-1)
    printf(" MARIT : I'm still not updated to answer this type of questions \n %s : ",na);
gets(sr);
}while(sr[0]!=0);
printf("\n\n\n\t\t THE END\n\n\n");
dinesh();
getch();
}

  void linetoword()
{
    int i=0,j=0;
    strupr(sr);
    wn=0;
      for(i=0;i<strlen(sr);i++)
    {
        if((sr[i]>=65)&&(sr[i]<=90))
        {
        tem[j]=sr[i];
         j++;
        }
        else if(sr[i]==32)
        {
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
        j=0;
        }
        }
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
   // printf("\n\t\twn=%d",wn);
   //for(i=0;i<wn;i++)
    // printf("\n\t\t%s",wo[i]);
}
void chek()
{
    int i,j;
    same=0;
    for(i=0;i<wns;i++)
  {
    for(j=0;j<wn;j++)
    if(strcmp(wos[i],wo[j])==0)
    {
     same++;
    break;
    }
  }
    }
 void linetowords()
{
   int i=0,j=0;
    strupr(srs);
    wns=0;
     //printf("\n in linetowordss\n\t\t");
    //ouputs(srs);
     for(i=0;i<strlen(srs);i++)
    {
        if((srs[i]>=65)&&(srs[i]<=90))
        {
        tem[j]=srs[i];
         j++;
        }
        else if(srs[i]==32)
        {
        for(x=0;x<j;x++)
       wos[wns][x]=tem[x];
       wos[wns][x]='\0';
        wns++;
        j=0;
        }
        }
        for(x=0;x<j;x++)
       wos[wns][x]=tem[x];
       wos[wns][x]='\0';
        wns++;
  // printf("\n\t\twns=%d",wns);
   //for(i=0;i<wns;i++)
    //printf("\n\t\t%s",wos[i]);
}
void doit()
{
    int i;
    //for(i=0;i<10;i++)
    //wo[i][0]='\0';
    for(i=0;i<10;i++)
    wos[i][0]='\0';
    //linetoword();
    linetowords();
    chek();
}
void dinesh()
{
        char d[20]={177,3,'D','I','N','E','S','H',' ','A','N','B','U',3,177};
    int i,j,m,k,b=22;
    printf("\n coded by \n");
        for(m=0;m<20;m++)
        printf("%c",219);
        printf("\n ");
    for(i=0;i<15;i++)
    {
        for(m=0;m<10;m++)
        {
        for(j=i;j<15;j++)
      printf("%c",b++);
    for(k=0;k<15-i;k++)
        printf("\b");
    if(b>123)
      b=22;
        }
    printf("%c",d[i]);
    }
    printf("\a\a\a\a\n  %c   %c %c %c   %c\n",177,1,2,1,177);
        for(m=0;m<20;m++)
        printf("%c",219);
}
void mauot()
{
  printf(" MARIT : For check prime number enter CHEKPRIM <number>");
  printf("\n\t For Print current time & date enter PRITTIME ");
  printf("\n\t For print limited prime numbers enter LIMTPRIM <number>");
  printf("\n\t For check amstrong number enter CHEKAMSR <number>");
  printf("\n\t For print limited amstrong numbers enter LIMTAMSR <number>");
  printf("\n\t For check palindrom number enter CHEKPLRM <number>");
  printf("\n\t For get calender of any month of year enter CALENDER <month> <year>");
  printf("\n\t For Print table of number enter PRTTABLE <number>");
  printf("\n %s :",na);
}
void linetonum1()
{
int i=0,x,j=0;
wn=0;
n=0;
    strupr(sr);
    wn=0;
     for(i=9;i<strlen(sr);i++)
    {
        if((sr[i]>=48)&&(sr[i]<=57))
        {
        tem[j]=sr[i];
         j++;
        }
        else if(sr[i]==32)
        {
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
        j=0;
        }
        }
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
         for(i=0;i<strlen(wo[0]);i++)
     {
       n=n*10+(wo[0][i]-48);
     }
}
void linetonum2()
{
 int i=0,x,j=0;
wn=0;
    strupr(sr);
    wn=0;
    m=0;
    y=0;
   // printf("\n in linetoword\n\t\t");
    //puts(sr);
     for(i=9;i<strlen(sr);i++)
    {
        if((sr[i]>=48)&&(sr[i]<=57))
        {
        tem[j]=sr[i];
         j++;
        }
        else if(sr[i]==32)
        {
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
        j=0;
        }
        }
        for(x=0;x<j;x++)
       wo[wn][x]=tem[x];
       wo[wn][x]='\0';
        wn++;
    //printf("\n\t\twn=%d",wn);
   //for(i=0;i<wn;i++)
    // printf("\n\t\t%s\n",wo[i]);
   //  printf(" %d",n);
     for(i=0;i<strlen(wo[0]);i++)
     {
      m=m*10+(wo[0][i]-48);
      // printf(" %d",n);
     }
     for(i=0;i<strlen(wo[1]);i++)
     {
       y=y*10+(wo[1][i]-48);
      // printf(" %d",n);
     }
     //printf("\n\t\tm=%d y=%d",m,y);
}
void chekprim()
{
int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    break;
  if(i==n)
  printf(" MARIT : %d is PRIME number\n %s : ",n,na);
  else
    printf(" MARIT : %d is NOT PRIME number\n %s : ",n,na);
}
void limtprim()
{
    int i,j,t=0,sum=0;
    printf(" MARIT :\n    PRIME SERICES\n ");
   printf("\n  ");
   for(j=2;j<=n;j++)
   {
  for(i=2;i<j;i++)
    if(j%i==0)
    break;
  if(i==j)
  {
  printf("%d ",j);
  sum=sum+j;
  t++;
  }
   }
   printf("\n total number of prime number upto %d is %d\n %s : ",n,t,na);
}
void prittime()
{
    time_t mytime;
    mytime = time(NULL);
    printf(" MARIT :Current Time :%s %s : ", ctime(&mytime),na);
}

void manth()
{
int i,da=1,md,j;
od=od%7;
printf("\n    ");
if(m==1)
{
md=31;
printf("  JAN");
}
else if(m==2)
{
    printf("  FEB");
    if(((y%100==0)&&(y%400==0))||((y%100!=0)&&(y%4==0)))
        md=29;
    else
        md=28;
}
else if(m==3)
{
    printf("  MAR");
    md=31;
}
else if(m==4)
{
    printf("  APR");
    md=30;
}
    else if(m==5)
    {
        printf("  MAY");
        md=31;
    }
    else if(m==6)
    {
        printf("  JUN");
        md=30;
    }
    else if(m==7)
    {
        printf("  JUL");
        md=31;
    }
    else if(m==8)
    {
        printf("  AUG");
        md=31;
    }
    else if(m==9)
    {
        printf("  SEP");
        md=30;
    }
    else if(m==10)
    {
        printf("  OCT");
        md=31;
    }
    else if(m==11)
    {
    printf("  NOV");
    md=30;
    }
        else
        {
            printf("  DEC");
            md=31;
            }
 printf("   %d",y);
printf("\n Su Mo Tu We Th Fr Sa \n ");
for(i=0;i<od;i++)
    printf("   ");
        for(j=0;j<md;j++)
    {
    printf("%2d ",da++);
    od++;
    if(od==7)
    {
     od=0;
     printf("\n ");
}
    }
}
void day()
{
 yy=y-1;
if(yy>=400)
    oy=yy%400;
else
    oy=yy;
if(oy>=300)
{
 od=1;
 oy=oy%300;
}
else if(oy>=200)
{
  od=3;
  oy=oy%200;
}
else if(oy>=100)
{
    od=5;
    oy=oy%100;
}
od=od+(oy+(oy/4));
if(m==12)
    od=od+5;
else if(m==11)
    od=od+3;
else if(m==10)
    od=od;
else if(m==9)
    od=od+5;
else if(m==8)
    od=od+2;
else if(m==7)
    od=od+6;
else if(m==6)
    od=od+4;
else if(m==5)
    od=od+1;
else if(m==4)
    od=od+6;
else if(m==3)
    od=od+3;
else if(m==2)
    od=od+3;
if((m>2)&&(((y%100==0)&&(y%400==0))||((y%100!=0)&&(y%4==0))))
   od++;
   od++;
}
void chekamsr()
{
    int sum,n1,i;
printf("\n MARIT : \n");
    i=n;
  d=0;
 sum=0;
 n1=n;
    while(n!=0)
    {
    d++;
    n=n/10;
    }
    n=n1;
while(n!=0)
{
sum=sum+power(n%10);
n=n/10;
}
if(n1==sum)
    printf(" %d is AMSTRONG number \n %s : ",n1,na);
    else
    printf(" %d is NOT AMSTRONG number \n %s : ",n1,na);
}
void limtamsr()
{
    int l,sum,n1,i,n2;
printf("\n MARIT : \tAMSTROG SERIES\n  ");
l=n;
for(i=1;i<=l;i++)
{
    n2=i;
  d=0;
 sum=0;
 n1=n2;
    while(n2!=0)
    {
    d++;
    n2=n2/10;
    }
    n2=n1;
while(n2!=0)
{
sum=sum+power(n2%10);
n2=n2/10;
}
if(n1==sum)
    printf(" %d",n1);
}
 printf("\n %s : ",na);
}
void chekplrm()
{
     int n1,s,d;
        d=0;
        n1=n;
    while(n!=0)
    {
    d=(d*10)+(n%10);
    n=n/10;
    }
    if(n1==d)
        printf("\n MARIT : %d is POLINROM number\n %s : ",n1,na);
    else
        printf("\n MARIT : %d is NOT  POLINDROM number\n %s : ",n1,na);
            }

void prttable()
{
  int i;
  printf("\n MARIT : ");
        for(i=1;i<=10;i++)
  printf("\n        %d*%d=%d",i,n,i*n);
        printf("\n %s : ",na);
}
void calender()
{
        od=0;
        printf("\n MARIT : ");
if((y>0)&&(m>0)&&(m<13))
{
day();
manth();
}
else
    printf("\n MARIT :  *** stupid invalid date ***\n %s : ",na);
    printf("\n %s : ",na);

}
int power(int nn)
{
 int i,r=nn;
 if(d!=1)
 for(i=2;i<=d;i++)
    r=r*nn;
    return r;
}
void timehr()
{
  time_t my_time;
struct tm * timeinfo;
time (&my_time);
timeinfo = localtime (&my_time);
hr=timeinfo->tm_hour;
}
void greeting()
{
    if((hr>=0)&&(hr<=11))
       printf("Good Morning");
       else if((hr>=12)&&(hr<=15))
        printf("Good Afternoon");
    else if(hr>=16)
        printf("Good Evening");
}
int old()
{
    time_t my_time;
struct tm * timeinfo;
time (&my_time);
timeinfo = localtime (&my_time);
return timeinfo->tm_year-117;
}

