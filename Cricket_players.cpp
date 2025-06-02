#include <iostream>
#include <string>

using namespace std;

class batsman
{
	public:
	string batsmanName;
	int batsmanNum;
	int Innings;
	int notout;
	int runs;
	float batAvg;

	int calculateAvg()
	{
		batAvg=runs/(Innings-notout);
	}
	
	void readData()
	{
		cout<<"Batsman Name:";
		getline(cin,batsmanName);
		cout<<"Batsman Jersey Number:";
		cin>>batsmanNum;
		cout<<"Number of Innings played:";
		cin>>Innings;
		cout<<"Number of notout matchs:";
		cin>>notout;
		cout<<"Total number of runs scored:";
		cin>>runs;
	}

	void DisplayData()
	{
		cout<<"******************************"<<endl;
		cout<<"Players Details"<<endl;
		cout<<"Name:"<<batsmanName<<endl;
		cout<<"Jersey Number:"<<batsmanNum<<endl;
		cout<<"Innnings Played:"<<Innings<<endl;
		cout<<"Notout matchs:"<<notout<<endl;
		cout<<"Total runs scored:"<<runs<<endl;
		cout<<"Batting Average:"<<batAvg<<endl;
		cout<<"******************************"<<endl;
	}

};

int main()
{
	batsman player1,player2,player3,player4,player5;

	cout<<"Enter the 5 player details of your team:"<<endl;
	
	player1.readData();
	player1.calculateAvg();
	player2.readData();
	player2.calculateAvg();
	player3.readData();
	player3.calculateAvg();
	player4.readData();
	player4.calculateAvg();
	player5.readData();
	player5.calculateAvg();
	player1.DisplayData();
	player2.DisplayData();
	player3.DisplayData();
	player4.DisplayData();
	player5.DisplayData();

	return 0;
}

