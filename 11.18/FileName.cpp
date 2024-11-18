#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v, v1, v2;
	for (int i = 1; i <= 3; i++) v.push_back(i);
	for (int i = 11; i <= 13; i++) v1.push_back(i);
	for (int i = 101; i <= 103; i++) v2.push_back(i);
	v.insert(v.end(), v1.begin(), v1.end());  //Êä³ö1 2 3 11 12 13
	for (vector<int>::iterator t = v.begin(); t != v.end(); t++) {
		cout << *t;
	}cout << endl;
	v.insert(v.end(), v2.begin(), v2.end()); //Êä³ö1 2 3 11 12 13 101 102 103
	for (vector<int>::iterator t = v.begin(); t != v.end(); t++) {
		cout << *t;
	}
	return 0;
}