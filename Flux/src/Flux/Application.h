#pragma once

#include "Core.h";


namespace Flux {

	class FLUX_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	// Must define in instances of applications
	Application* CreateApplication();
}

