#include<iostream>
#include<stdio.h>
#include<cstring>
#include <string>
#include <math.h>
#include <vector>

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */

//chapter 8, ex 14
//Can we declare a non-reference function argument const (e.g., void f(const int);)? , YES
//What might that mean? , Means the function will still work but the initial value will not be changed
//Why might we want to do that? , Want to do this to not update our value but still return a value from it
//Why don’t people do that often? , Extra step easier to just copy it to a new integer
//Try it; write a couple of small programs to see what works.

using namespace std;
void randomfunction(const int);
string prog2(const string);

int main(){
	int k = 10;
	const string j = "Hello";
	randomfunction(k);
	string c = prog2(j);
	cout << c << endl;
	
	return 0;
}


void randomfunction(const int b){	//can declare a non=refrence argument const
	int c;
	c=b+2;
//	b=b+3;			//compiler catches that it is constant and cannot be modified
	cout << c << ", "<< b << endl;
}
string prog2(const string v){
	string name,ret;
	cout << "Please enter your name: ";
	cin >> name;
	ret = v;
//	 v += " " + name;	//compiler catches that it is constant and cannot be modified
	ret+= " " + name;
	cout << "Original string was \""<<v<<"\""<<endl;

	return ret;
	
}
