
#include <iostream>



// Base class with a virtual function
class Shape
{
public:
	virtual void Draw()
	{
		printf("Drawing a shape.\n");
		
	}
};


// Derived class overriding the virtual function
class Circle : public Shape
{
public:
	void Draw() override
	{
		printf("Drawing a circle.\n");
		
	}

};


// Derived class overriding the virtual function
class Square : public Shape
{
public:
	void Draw() override
	{
		printf("Drawing a square.\n");
		
	}

};
