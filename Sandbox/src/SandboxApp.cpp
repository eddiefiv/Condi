#include <Condi.h>

class Sandbox : public Condi::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Condi::Application* Condi::CreateApplication() {
	return new Sandbox();
}