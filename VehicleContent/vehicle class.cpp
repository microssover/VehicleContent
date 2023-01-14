#include <iostream>

using namespace std;

class Navigation
{
	protected: 
	double distance;

};

class Bicycle: public Navigation
{
	private:
	double speed;
	
	public:
	Bicycle();
	~Bicycle();
	void setDistance(double d)
	{
		distance=d;
	}
	
	double getDistance(void)
	{
		return distance;
	}
	
	 void setSpeed(double s)
	{
		speed=s;
	}
	double getSpeed(void)
	{
		return speed;
	}
};

    Bicycle::Bicycle()
	{
		cout<<"There is a Bicycle."<<endl;
	}
	Bicycle::~Bicycle()
	{
		cout<<"Bicycle is crashed."<<endl;
	}



	class Motorcycle: public Navigation
{
	private:
	double speed;

	public:
		
	Motorcycle();
	~Motorcycle();
	void setDistance(double d)
	{
		distance=d;
	}
	
	double getDistance(void)
	{
		return distance;
	}
	void setSpeed(double s)
	{
		speed=s;
	}
	double getSpeed(void)
	{
		return speed;
	}

	
	
};

Motorcycle::Motorcycle()
{
		cout<<"There is a Motorcycle."<<endl;
}
Motorcycle::~Motorcycle()
{
         cout<<"Motorcycle is crashed."<<endl;
}	
	

  class Car: public Navigation
{
    private:
	double speed;
	
	public:
	Car();
	~Car();
	
	void setDistance(double d)
	{
		distance=d;
	}
	
	double getDistance(void)
	{
		return distance;
	}
	
	void setSpeed(double s)
	{
		speed=s;
	}
	double getSpeed(void)
	{
		return speed;
	}
	
};

Car::Car()
{
	cout<<"There is a Car."<<endl;
}

Car::~Car()
{
	cout<<"Car is crashed."<<endl;
}

int main()
{
	Car c;
	Motorcycle m;
	Bicycle b;
	
	double distance;
	char vehicle;
	double time_needed;
	
	cout<<"Enter vehicle character (c for car, b for bicycle and m for motorcycle) : ";
	cin>>vehicle;
	
	switch(vehicle)
	{
		
		case 'c' : 
		cout<<"Enter distance for car : ";
		cin>>distance;
	    c.setDistance(distance);
		
		c.setSpeed(90.0);
		time_needed = (distance/ c.getSpeed()) *60;
		
		cout<<"Distance is : "<<c.getDistance()<<endl;
		cout<<"Speed is : "<<c.getSpeed()<<endl;
		
		cout<<"Time Needed : "<<time_needed<<endl;
		break;
		
		case 'm' : 
		cout<<"Enter distance for motorcycle : ";
		cin>>distance;
	    m.setDistance(distance);
		
		m.setSpeed(60.0);
		time_needed = (distance/ m.getSpeed()) *60;
		
		cout<<"Distance is : "<<m.getDistance()<<endl;
		cout<<"Speed is : "<<m.getSpeed()<<endl;
		
		cout<<"Time Needed : "<<time_needed<<endl;
		break;
		
		
		case 'b' : 
		cout<<"Enter distance for bicycle : ";
		cin>>distance;
	    b.setDistance(distance);
		
		b.setSpeed(20.0);
		time_needed = (distance/ b.getSpeed()) *60;
		
		cout<<"Distance is : "<<b.getDistance()<<endl;
		cout<<"Speed is : "<<b.getSpeed()<<endl;
		
		cout<<"Time Needed : "<<time_needed<<endl;
		break;
		
		default : 
		
		cout<<"You entered wrong character. ";

	}
}
