#pragma once
#include "ChernobylCore.h"

namespace Chernobyl 
{
	class CHERNOBYL_API ChernobylApplication
	{
	public:
		ChernobylApplication();
		virtual ~ChernobylApplication();
		void Run();
	};

	ChernobylApplication* CreateApplication();
}


