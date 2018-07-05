#ifndef PARTS_H
#define PARTS_H

#include <iostream>
#include <string>

class Arms
{
private:
	std::string _serial;
	bool _functionnal;
public:
	Arms(std::string const serial = "A-01", bool functionnal = true);
	~Arms();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
};

class Legs
{
private:
	std::string _serial;
	bool _functionnal;
public:
	Legs(std::string const serial = "L-01", bool functionnal = true);
	~Legs();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
};

class Head
{
private:
	std::string _serial;
	bool _functionnal;
public:
	Head(std::string const serial = "H-01", bool functionnal = true);
	~Head();
	bool isFunctionnal() const;
	std::string serial() const;
	void informations() const;
};

#endif
