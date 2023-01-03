//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt") ;
    string textline;
    double i=0;
    double m,n;
    while(getline(source,textline)){
		m+=stod(textline);
        n+=pow(stod(textline),2);
        i++;
	}
    m=(1/i)*m;
    n=sqrt((1/i*n)-pow(m,2));
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<m<<endl;
    cout << "Standard deviation = "<<n<<endl;
}