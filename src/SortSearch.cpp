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

int SortSearch::linearSearch(int arr[], int element){
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

std::vector<int> SortSearch::boubleSort(vector<int> arr){
	int size = arr.size();
	int swap,temp=0;
	do{
	swap=0;
	for(int count=0; count<size-1;count++){
		if(arr[count]> arr[count+1]){
			temp=arr[count];
			arr[count]=arr[count+1];
			arr[count+1]=temp;
			swap=1;
		}
	}
	}while(swap!=0);
	return arr;
}

std::vector<int> SortSearch::selectionSort(vector<int> arr){
	int size = arr.size();
	int start, minIndex, minValue;
	for(start=0;start<size-1;start++){
		minIndex=start;
		minValue=arr[start];
		for(int index=start+1;index<size;index++){
			if(arr[index]<minValue){
			minValue=arr[index];
			minIndex=index;
		}
		}
		arr[minIndex]=arr[start];
			arr[start]=minValue;
	}
	return arr;
}
void SortSearch::showArray(vector<int> arr){
	int size = arr.size();
	for(int count=0; count<size;count++){
		cout << arr[count] << " ";
	}
	cout << endl;

}
