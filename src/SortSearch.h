#ifndef SORTSEARCH_H
#define SORTSEARCH_H

#include <iostream>
#include <string>
#include <math.h>
#include<vector>


using namespace std;

class SortSearch
{
	private:


	public:

	SortSearch();
	int linearSearch(int[], int);
	int binarySearch(int[], int );
	std::vector<int> boubleSort(vector<int>);
	std::vector<int> selectionSort(vector<int>);
	void showArray(vector<int>);


};
#endif /*SORTSEARCH_H_*/
