#pragma once

#include "UI_TextBox.h"
#include "SDL_TileSheet.h"

class TextBox : public UI_TextBox
{
	SDL_TileSheet* m_UiSheet;
	bool m_BG = false;

public:

	void SetBG(bool bg);
	virtual void Initialize() override;

	virtual void Draw() override;
};