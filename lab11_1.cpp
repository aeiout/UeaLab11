#include<iostream>
#include<string>
using namespace std;

int main(){
	string grade;
	int i=1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["<<i << "]: ";
		cin >> grade;
		i++;
		//The loop must be terminated when grade = '0'
		if(grade=="0"){
			
			
			break;
			
		}
		if(grade=="A"){
			count[0]+=1;
			
		} // if grade is A
			//Do something
		else if(grade=="B"){
			count[1]+=1;
			
		} // if grade is B
			//Do something
		//and so on ... for grade = C, D, F
		else if(grade=="C"){
			count[2]+=1;
			
		}else if(grade=="D"){
			count[3]+=1;
			
		}else if(grade=="F"){
			count[4]+=1;
			
		}	
		else{ // grade is wrong input
		i=i-1;
		cout<<"Wrong input. Please input again.\n";
			//Do something
		} 
	}while(grade!="0");
	
	
	cout << "In total "<<count[0]+count[1]+count[2]+count[3]+count[4]<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	
	return 0;
}
