#pragma once

#include "Core.h"

namespace EdwinAlkinsGameEngine {

	class EDWINALKINSGAMEENGINE_API Application {
	public:
		Application();
		~Application();

		void Run();
	};

	// To be defined in CLIENTs
	Application* CreateApplication();
}

