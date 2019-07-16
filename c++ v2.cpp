#include <iostream>
#include <vector>
#include <cmath>
#include<ctime>
using namespace std;
int y = 1;
int count = 26;
bool factor = true;
std::vector<int> primelist = {};
int main(){
int start_s=clock() ;
    std::vector<int> primelist = { 3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101 };
    for (int y = 103; y <= 78786867868; y += 2) {
        bool prime = true;
        for (int x = 0; x < 78786867868; x++) {
            int z = primelist[x];
            if (y % z == 0) { prime = false; break; };
            if (z > sqrt(y)) { break; };}
        if (prime == true) { primelist.push_back(y); count++; if (count == 10001){cout << y << endl;int stop_s=clock();
    cout<<(stop_s-start_s)/double(CLOCKS_PER_SEC); return(0);}}};}
