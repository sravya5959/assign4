#include<stdio.h>
#include <pthread.h> 
#include <semaphore.h> 
#include <stdlib.h>

int a,b,c;

void *ThreadProc1()
{
	int i=10,j=11,k=12;
	a=10;
	b=11;
	c=12;
	printf("address of variable i is %p\n",&i );
	printf("address of variable j is %p\n",&j );
	printf("address of variable k is %p\n",&k );
	printf("address of variable a is %p\n",&a );
	printf("address of variable b is %p\n",&b );
	printf("address of variable c is %p\n",&c );

	printf("i =%d\n",i );
	printf("j =%d\n",j );
	printf("k =%d\n",k );
	printf("a =%d\n",a );
	printf("b =%d\n",b );
	printf("c =%d\n",c );
	
	while(1)
	{
		
	}
}

void *ThreadProc2()
{
	int i=20,j=21,k=22;
	a=20;
	b=21;
	c=22;
	printf("address of variable i is %p\n",&i );
	printf("address of variable j is %p\n",&j );
	printf("address of variable k is %p\n",&k );
	printf("address of variable a is %p\n",&a );
	printf("address of variable b is %p\n",&b );
	printf("address of variable c is %p\n",&c );

	printf("i =%d\n",i );
	printf("j =%d\n",j );
	printf("k =%d\n",k );
	printf("a =%d\n",a );
	printf("b =%d\n",b );
	printf("c =%d\n",c );
	
	while(1)
	{
		
	}
}

void *ThreadProc3()
{
	int i=30,j=31,k=32;
	a=30;
	b=31;
	c=32;
	printf("address of variable i is %p\n",&i );
	printf("address of variable j is %p\n",&j );
	printf("address of variable k is %p\n",&k );
	printf("address of variable a is %p\n",&a );
	printf("address of variable b is %p\n",&b );
	printf("address of variable c is %p\n",&c );

	printf("i =%d\n",i );
	printf("j =%d\n",j );
	printf("k =%d\n",k );
	printf("a =%d\n",a );
	printf("b =%d\n",b );
	printf("c =%d\n",c );
	
	while(1)
	{
		
	}
}

int main()
{
	a=3;
	b=4;
	c=5;

	pthread_t thread1,thread2,thread3;
	pthread_create(&thread1,NULL,ThreadProc1,NULL);
	pthread_create(&thread2,NULL,ThreadProc2,NULL);
	pthread_create(&thread3,NULL,ThreadProc3,NULL);

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_join(thread3,NULL);

	return 0;
}
