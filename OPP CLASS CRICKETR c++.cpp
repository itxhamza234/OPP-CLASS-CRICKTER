#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class Cricketer {

protected:
	string name;
	int shirt_no;
	string dob;
	int odi_rating;
	int test_rating;
	int t20_rating;
	int  startyear;

public:
	Cricketer() {
		name = "Hamza ";
		shirt_no = 18;
		dob = "18-09-2001";
		odi_rating = 891;
		test_rating = 450;
		t20_rating = 818;
		startyear = 2015;
		cout << "Default construtor of Cricketer " << endl;


	}
	Cricketer(string n, int s, string d, int o, int test, int t20, int year) {

		name = n;
		shirt_no = s;
		dob = d;
		odi_rating = o;
		test_rating = test;
		t20_rating = t20;
		startyear = year;

	}
	int calculateAge() {
		cout << "Your date of birth is = " << dob << endl;
		string a = dob.substr(6);
	int b ;
	b= stoi(a);
		int c = 2022;
		c = c - b;
		return c;


	}
	int calculateExperience() {
		int a = 2022;
		int b;
		b = 2022 - startyear;
		return b;

	}

	void changeODIRating(int O) {

		cout << "\nThe ODI ratting was = " << odi_rating << endl;

		odi_rating = O;
		
		cout << "The ODI ratting change to = " << odi_rating << endl;

		}
		
	
	

	void changeTestRating(int T) {
		
		cout << " Test ratting was = " << test_rating << endl;

		test_rating = T;

		cout << " Test ratting change to = " << T << endl;

	}
	void changeT20Rating(int T20) {
		cout << " T20 Ratting was = " << t20_rating << endl;

		t20_rating = T20;

		cout << " The T20 ratting change to = " << t20_rating << endl;

	}
	~Cricketer() {
		cout << "\nDefault Destructor Of Cricketer " << endl;
	}
};

class Bowler :virtual public Cricketer {
private:
	string type = "Fast right arm";
	int total_wicket;
	int match_played;
public:
	Bowler() {
		total_wicket = 49;
		match_played = 200;
		cout << "Default constructor of Bowler" << endl;

	}
	Bowler(string tp, int t, int m, string n, int s, string d, int o, int test, int t20, int year) :Cricketer(n, s, d, o, test, t20, year) {
		type = tp;
		total_wicket = t;
		match_played = m;

	}
	int calculateBowlAverage() {
		double A;
        
		A = match_played / total_wicket;
		return A;

	}
	void updateBowlerMatches(int M) {


		if (M < 0) {
			cout << "\nInput Update Number please " << endl;
		}
		else {
			match_played = match_played + M;
			cout<<"\nYour Bowler Match is Updated To = " << match_played << endl;
		}

	}
	void updateWicketes(int W)
	{
		if (W < 0) {
			cout << "Input Update Number please" << endl;
		}
		else {
			
			total_wicket = total_wicket + W;
			cout << "Your Wickets is Update To = " << total_wicket << endl;

		}

	}
	~Bowler() {
		cout << "\nDefault Destructor Of Bowler " << endl;

	}
};

class Batsman : virtual  public Cricketer {
private:
	string type;
	int total_runs;
	int match_played;
	int best_score;

public:
	Batsman() {
		type = " RIGHT HAND BATSMAN ";
		total_runs = 450;
		match_played = 20;
		best_score = 99;

		cout << "\nDefault construtor of Batsman " << endl;

	}
	Batsman(string t, int r, int m, int b, string n, int s, string d, int o, int test, int t20, int year) : Cricketer(n, s, d, o, test, t20, year) {
		type = t;
		total_runs = r;
		match_played = m;
		best_score = b;



	}
	int calculateBatAverage() {
		int A;
		A = total_runs / match_played;
		return A;

	}
	void updateBatMatches(int M) {

		if (M < 0) {
			cout << "\nInput Update Number please " << endl;
		}
		else {
			match_played = match_played + M;
			cout << "\nYour Batsman Match is Updated To = " << match_played << endl;
		}


	}
	void updateRuns(int R) {
		if (R < 0) {
			cout << " Please Enter Upadate Number " << endl;
		}
		else {
			total_runs = total_runs + R;
			cout << "Your Runs is update to " << total_runs << endl;
		}

	}
	~Batsman() {
		cout << "\nDefault Destructor of Batsman " << endl;
	}
};

class AllRounder :public Bowler, public Batsman {
public:
	AllRounder() {
		cout << "\nDefault constructor of AllRounder" << endl;
	}
	~AllRounder() {
		cout << "\nDefault destructor of AllRounder " << endl;
	}

};

int main()
{
	system("COLOR 60");
	//Cricketer* c1 = new Cricketer();
	//int x = c1->calculateExperience();
	//cout << "\nTotal Experience is =" << x << endl;

	//int a = c1->calculateAge();
	//cout << "\nYour total Age is = " << a;
	//c1->changeODIRating(-1);
	//c1->changeTestRating(2);
	//c1->changeT20Rating(100);

	//Bowler* B1 = new Bowler();
	//B1->updateBowlerMatches(1);
	//B1->updateWicketes(2);
	//double A;
	//A = B1->calculateBowlAverage();
	//cout << "The Bowler Average is  = " << A << endl;

	//Batsman*B2 = new Batsman();
	//B2->updateBatMatches(3);
	//B2->updateRuns(5);


	//Cricketer* c1 = new Cricketer();
	//int a;
	//a=c1->calculateAge();
	//cout << "\nNow you are " << a << " years Old" << endl;
	//int b;
	//b = c1->calculateExperience();
	//cout << "\nyou have " << b << "years Experience " << endl;
	//c1->changeODIRating(4);

	AllRounder* A1 = new AllRounder();
	A1->calculateAge();
	int a=A1->calculateAge();
	cout <<"Your total Age is = " << a;

	A1->changeODIRating(550);
	double b;
	b=A1->calculateBatAverage();
	cout << "Your Bat Average is = " << b;

	double c;
	c = A1->calculateBowlAverage();
	cout << "\nYour Bowl Average is = " << c;
}     

















