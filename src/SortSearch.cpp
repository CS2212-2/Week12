/*
/ * Recursion.cpp
 *
 *  Created on: Oct 29, 2015
 *      Author: Izzat Alsmadi
 */
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "SortSearch.h"


using namespace std;

SortSearch::SortSearch(){}

int SortSearch::search1(int arr[], int element){
int size = sizeof(arr);
int index=0;
int position=-1;
bool found=false;
while(index< element && !found){
if(arr[index]==element){
	found=true;
	position=index;
}
index++;

}
return position;
}

int SortSearch::binarySearch(int arr[], int element){
	int size = sizeof(arr);
	int first=0, last= size-1, middle, position=-1;
	bool found=false;
	while(!found && first <=last){
		middle=(first+last)/2;
	  if(arr[middle]==element){
		  found=true;
		  position=middle;
	  }
	  else if(arr[middle] > element)
		  last=middle-1;
	  else
		  first=middle+1;
	}
	return position;
}
