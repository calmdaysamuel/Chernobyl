#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Chernobyl::ChernobylApplication* Chernobyl::CreateApplication();

int main(int argc, char** argv)
{
	Chernobyl::ChernobylApplication* app = Chernobyl::CreateApplication();

	app->Run();

	delete app;

}

#endif