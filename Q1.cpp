#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

int number;
int totalweight=0;
ifstream inFile("infile", ios::in);
inFile>>number;// cows number
vector<int>weight(number);

for(int i=0;i<number;++i){ inFile>>weight.at(i); }

sort(weight.begin(),weight.end());

for(int j=0;j<5;++j){ totalweight=totalweight+weight[number-1-j]; }
cout<<totalweight<<endl;

return 0;
}
