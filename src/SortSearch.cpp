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
