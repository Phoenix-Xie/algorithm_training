
// 7_3.cpp : Defines the entry point for the console application.
//

#include <string.h>
#include<iostream>
char *songname(char *song);
int compare(char a[],char b[]);
int main(int argc, char* argv[])
{   
  int i,j,k;
  char *p;
  char x[]="0";
  char *song_name;//[8]={"A","C","B"};
  p=songname(song_name);
  for(i=0;compare(song_name,x)!=0;i++)
  {
    k=i; 
    for(j=i+1;compare(song_name,x)!=0;j++)
	{
		if(compare(song_name,song_name)>0)
			 k = j;
	}
    if(k!=i)
	{
		//p=song_name[i];
		song_name[i]=song_name[k];
        //song_name[k]=p;
    }
  }

  for(i=0;compare(song_name,x)!=0;i++)
	  printf ("%s  ",song_name[i]);
  printf ("\n");
  return 0;
}

int compare(char a[],char b[])
{
	int i;
	// /ar *p,*pp;
	//p=a,pp=b;
	for(i=0;a[i]&&b[i];i++)
		if(a[i]>b[i])
			return 1;
		else if(a[i]<b[i])
			return -1;
		if(a[i]==0&&b[i]==0)
			return 0;
		else if(a[i]!=0)
			return 1;
		else
			return -1;
}
/*int compare(char a[],char b[])
{
	int j;
	if(a[0]==b[0])
		j=0;
	else
		j=1;
	return j;
}*/

char *songname(char *song)
{
	song=new char[8];
	printf("请输入歌名:");
	for(int i=0;i<8;i++)
		scanf("%s",&song[i]);
	return song;
}
