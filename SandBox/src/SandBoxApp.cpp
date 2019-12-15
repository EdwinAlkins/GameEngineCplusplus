#include <EdwinAlkinsGameEngine.h>

class SandBox : public EdwinAlkinsGameEngine::Application{
public:
	SandBox() {

	}

	~SandBox() {

	}


};

EdwinAlkinsGameEngine::Application* EdwinAlkinsGameEngine::CreateApplication() {
	return new SandBox();
}