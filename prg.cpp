#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
fstream fp1,fp2,fp3;
void match()
{
char buffer1[100],buffer2[100];
int i,j;
fp1.open("names1.txt",ios::in);
fp2.open("names2.txt",ios::in);
fp3.open("match.txt",ios::out);
fp1>>buffer1;
fp2>>buffer2;
cout<<"Matched Names are ..... "<<endl;
while(!fp1.fail() && !fp2.fail())
{
if(strcmp(buffer1,buffer2)==0)
{
fp3<<buffer1;
fp3<<"\n";
cout<<buffer1;
cout<<"\n";
fp1>>buffer1;
fp2>>buffer2;
}
else if(strcmp(buffer1,buffer2)<0)
{
fp1>>buffer1;
}
else
{
fp2>>buffer2;
}
}
}
void main()
{
clrscr();
match();
getch();
}
