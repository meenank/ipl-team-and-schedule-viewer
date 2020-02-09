//          keywords:-
//          'srh' for details of srh team
//          'csk for datails of csk team
//          'mi' for details of mi team
//          'rcb' for details of rcb team
//          'dhoni' for details of m.s.dhoni
//          'virat' for details of virat kohli
//          'rohit' for details of rohit sharma
//          'raina' for details of suresh raina

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class ipl
{
	public:
	void schedule()
	{
		ifstream ob;
	    ob.open("ipl_schedule.txt");
	    if(ob==0)
	    cout<<"file not opened";
	    else
	    cout<<"________________________________________________ipl schedule for the year 2019 is below_____________________________________________\n";
	    char ch;
	    while(1)
	    {
		ch=ob.get();
		if(ch==EOF)
		break;
			cout<<ch;
		}
		cout<<"\n";
		cout<<"\n";
	}
	void srh_details()
	{
		ifstream ob;
	    ob.open("srh-details.txt");
	    if(ob==0)
	    cout<<"file not opened";
	    else
	    cout<<"file opened"<<" ";
	    char ch;
	    while(1)
	    {
		  ch=ob.get();
		  if(ch==EOF)
		  break;
			cout<<ch;
		}
		cout<<"\n";
		cout<<"\n";
	}
	void csk_details()
	{
		ifstream ob;
	    ob.open("csk-details.txt");
	    if(ob==0)
	    cout<<"file not opened";
	    else
	    cout<<"file opened"<<" ";
	    char ch;
	    while(1)
	    {
		  ch=ob.get();
		  if(ch==EOF)
		  break;
			cout<<ch;
		}
		cout<<"\n";
		cout<<"\n";
	}
	void mi_details()
	{
		ifstream ob;
	    ob.open("mi-details.txt");
	    if(ob==0)
	    cout<<"file not opened";
	    else
	    cout<<"file opened"<<" ";
	    char ch;
	    while(1)
	    {
		  ch=ob.get();
		  if(ch==EOF)
		  break;
			cout<<ch;
		}
		cout<<"\n";
		cout<<"\n";
	}
	void rcb_details()
	{
		fstream ob;
	    ob.open("rcb-details.txt");
	    if(ob==0)
	    cout<<"file not opened";
	    else
	    cout<<"file opened"<<" ";
	    char ch;
	    while(1)
	    {
		  ch=ob.get();
		  if(ch==EOF)
		  break;
			cout<<ch;
	    }
	    cout<<"\n";
	    cout<<"\n";
    }
	void dhoni_details()
	{
		ifstream ob;
		ob.open("dhoni-details.txt");
		if(ob==0)
		cout<<"file not opened";
		else
		cout<<"details of DHONI are below\n";
		char ch;
		while(1)
		{
			ch=ob.get();
			if(ch==EOF)
			break;
			cout<<ch;
		}
		cout<<"\n";
		cout<<"\n";
	}
	void Rohit_details()
	{
		ifstream ob;
		ob.open("rohit-details.txt");
		if(ob==0)
		cout<<"file not opened";
		else
		cout<<"details of ROHIT SHARMA are below\n";
		char ch;
		while(1)
		{
			ch=ob.get();
			if(ch==EOF)
			break;
			cout<<ch;
	    }
	    cout<<"\n";
	    cout<<"\n";
	}
	void virat_details()
	{
		ifstream ob;
		ob.open("virat-details.txt");
		if(ob==0)
		cout<<"file not opened";
		else
		cout<<"details of VIRAT KOHLI are below\n";
		char ch;
		while(1)
		{
			ch=ob.get();
			if(ch==EOF)
			break;
			cout<<ch;
	    }
	    cout<<"\n";
	    cout<<"\n";
	}
	void raina_details()
	{
		ifstream ob;
		ob.open("raina-details.txt");
		if(ob==0)
		cout<<"file not opened";
		else
		cout<<"details of SURESH RAINA are below\n";
		char ch;
		while(1)
		{
			ch=ob.get();
			if(ch==EOF)
			break;
			cout<<ch;
	    }
	    cout<<"\n";
	    cout<<"\n";
	}
};
int main()
{
	int x,i;
	for(i=0;i<12;i++){
	cout<<"enter 1 for ipl shcedule\n";
	cout<<"enter 2 for player details\n";
	cout<<"enter 3 for team details\n";
	cin>>x;
	switch(x)
	{
	   case 1:
	   {
	   	ipl sch;
	   	sch.schedule();
	   }
		   break;
		case 2:
		{
				string s;
				string d("dhoni");
				string r("raina");
				string v("virat");
				string R("rohit");
			cout<<"enter player name\n";
	        cin>>s;
	        if(s==d)
	            {
		          ipl dd;
		          dd.dhoni_details();
		         }
	         else if(s==r){
	         	ipl ri;
	         	ri.raina_details();
			   }
			   else if(s==v)
			   {
			   	ipl vr;
			   	vr.virat_details();
			   }
			   else if(s==R)
			   {
			   	ipl ro;
			   	ro.Rohit_details();
			   }
			   else
			   {
			   	cout<<"   entered data has not matched with stored data  ";
			   }
		}
		 break;
	    case 3:
		{
	    	string g;
	    	string sr("srh");
	    	string ck("csk");
	    	string mu("mi");
	    	string rc("rcb");
	    	cout<<"enter any team name\n";
	        cin>>g;
	        if(g==sr)
	             {
		          ipl sh;
		          sh.srh_details();
		         }
	        else if(g==ck)
	        {
	        	ipl csk;
	        	csk.csk_details();
			}
			else if(g==mu)
			{
				ipl m;
				m.mi_details();
			}
			else if(g==rc)
			{
				ipl r;
				r.rcb_details();
			}
			else
			{
				cout<<"  please check the spelling of keyword you entered, from comments of the program above!  ";
				cout<<"/n";
			}
		}break;
		default:
			{
				cout<<"it is not a valid number/n";
			}
			break;		      	
	}
  }
}
