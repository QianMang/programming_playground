#pragma once
class MySingleton
{
private:
	int val;
	// constructor , copy ctor and =, should be private
	MySingleton();
	MySingleton(const MySingleton &);
	MySingleton& operator=(const MySingleton&);
public:
    ~MySingleton();
	int GetVal() { return val; }
	static MySingleton* Instance();
};

