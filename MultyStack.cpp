// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>

using namespace std;


class MultyStack
{
	int *a;
	int i,j;
	int size;
public:
	MultyStack(int s)
	{
		size=s;i=-1;
		j=size;
		a=new int [size];
	}
	~MultyStack()
	{
		delete [] a;
	}
	bool isFull()
	{
		return (j-1==1||i==size-1);
	}
	bool isEmpty(int ind)
	{
		if ((ind!=0)&(ind!=1)) throw -1;
		else 
			if (ind==0)
				return (i==-1);
			else
				return(j==size);
	}
	void push(int ind,int v)
	{
		if ((ind!=0)&(ind!=1)) throw -1;
		if(this->isFull()) throw -2;
		if(ind==0)
			i++; a[i]=v;
		if(ind==1)
		{
			j--;a[j]=v;
		}
	}
	int pop(int ind)
	{
		if ((ind!=0)&(ind!=1)) throw -1;
		if(this->isEmpty(ind)) throw -3;
		if(ind==0)
		{
			return a[i];i--;
		}
		if(ind==1)
		{
			return a[j];j++;
		}
	}





int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

