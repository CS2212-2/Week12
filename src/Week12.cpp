//============================================================================
// Name        : Week11.cpp
// Author      : Izzat Alsmadi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

#include "SortSearch.h"
using namespace std;

int main() {
	    int searchArray[6]={34,23,56,77,88,99};
	    int result;

	      SortSearch s1;
	     // Variable Declaration
	     int counter, n;
	     // Get Input Value
	     cout<<"Enter the Number :";
	     cin>>n;
        // result = s1.search1(searchArray,n);
         result=s1.binarySearch(searchArray,n);
         if(result>0){
         cout<<"Value exists in the array";
         }
         else{
        	 cout<<"Value does not exist in the array";
         }
	     return 0;
	 }


