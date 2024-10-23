#include "includes.hpp"

void InputHandler() {
	for (int i = 0; i < 5; i++) ImGui::GetIO().MouseDown[i] = false;
	int button = -1;
	if (GetAsyncKeyState(VK_LBUTTON)) button = 0;
	if (button != -1) ImGui::GetIO().MouseDown[button] = true;
}

namespace Menu
{
	bool open = true;
	bool value = false;

	void Draw()
	{
		if (GetAsyncKeyState(VK_HOME) & 1) Menu::open = !Menu::open;
		if (Menu::open)
		{
		
		InputHandler();
		
		ImGui::Begin("Menu");
		ImGui::SetWindowSize(ImVec2{ 700, 400 });
		ImGui::Checkbox("Value", &value);
		ImGui::End();
	}
}