#include<iostream>
using namespace std;
class emp{
	protected:int id;
	string name;

	public:
	//deafult constr
	emp(){
		cout<<"-------------emp default--------\n";
		id=0;
		name="unknown";
		
	}
	emp(int i,string n){
		cout<<"-------------emp para--------------\n";
		id=i;
		name=n;
	}
	void display(){
		cout<<"-------------emp dispaly--------------\n";
		cout<<"id is: "<<id<<endl;
		cout<<"name is: "<<name<<endl;
	}
};
class manager:public emp{
	int inc;
	int sal;
	public:
		manager(){
			cout<<"---------------manaager default---------\n";
			inc,sal=10,1000;
		}
		manager(int i,int s,int idd,string namee):emp(idd,namee){
			cout<<"---------------manaager para---------\n";
			inc=i;
			sal=s;
			
		}
		void display(){
			cout<<"---------------manaager display---------\n";
			cout<<"incentive :"<<inc<<endl;
			cout<<"sal: "<<sal<<endl;
			cout<<"id :"<<id<<endl;
			cout<<"name: "<<name<<endl;
		}
		
	
};
int main(){
	manager obj(100,100000,101,"pragati");
	obj.display();
	

}
