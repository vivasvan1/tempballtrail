//thread synchronization
#include <iostream>
#include <pthread.h>
#include <cstring>
#include <fstream>
#include <fcntl.h>
#include <unistd.h>
#include <cstdio>
#include <stdio.h>
using namespace std;

pthread_mutex_t m=PTHREAD_MUTEX_INITIALIZER;

void *writer1(void *fd)
{
   int f=*(int*)fd;
   char *string1=new char[200];
   pthread_mutex_lock(&m);
   cout<<"\n enter 1st thread items to write in file";
   fgets(string1,*fd);
   for(int i=0;i<=strlen(string1);i++)
   {
      write(f,&string1[i],1);
      sleep(1);
   }
   pthread_mutex_unlock(&m);
}
void *writer2(void *fd)
{
   int f=*(int*)fd;
   char *string2=new char[200];
   pthread_mutex_lock(&m);
   cout<<"\n enter enter second thread items to write in file";
   gets(string2);
   for(int i=0;i<=strlen(string2);i++)
   {
      write(f,&string2[i],1);
      sleep(1);
   }
   pthread_mutex_unlock(&m);
}
main()
{
   pthread_t t1,t2;
   int fd=open("file.txt",O_CREAT|O_RDWR|O_APPEND);
   pthread_create(&t1,0,writer1,&fd);
   pthread_create(&t2,0,writer2,&fd);
   pthread_join(t1,0);
   pthread_join(t2,0);
}
