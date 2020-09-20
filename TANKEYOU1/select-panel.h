#pragma once

// ?¿ÌöH?–OáØ
enum EnumSelectResult
{
	OnePlayer = 1,	// 1->1?öH?
	TwoPlayer,		// 2->2?öH?
	Custom,			// 3->Áâ???•±
	Error			// 4
};

/**
	öH?–OáØ??Àõ¶¼?åÈ?
*/
void selelct_panel_init();

/**
	÷¶¿ÌÌ¤¹·öH???
*/
EnumSelectResult show_select_panel();