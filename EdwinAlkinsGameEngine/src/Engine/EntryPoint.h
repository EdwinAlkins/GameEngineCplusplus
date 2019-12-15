#pragma once

#ifdef EDALGE_PLATFORM_WINDOWS

extern EdwinAlkinsGameEngine::Application* EdwinAlkinsGameEngine::CreateApplication();

int main(int argc, char** argv) {
	printf("EdwinAlkins GameEngine");
	auto app = EdwinAlkinsGameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // EDALGE_PLATFORM_WINDOWS
