#pragma once
#include <ChernobylEngine.h>


class SandBox : public Chernobyl::ChernobylApplication
{
public:
	SandBox() {};

	~SandBox() {};
};


Chernobyl::ChernobylApplication* Chernobyl::CreateApplication()
{
	Chernobyl::ChernobylApplication* application = new SandBox();
	return application;
}