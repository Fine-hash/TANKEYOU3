#pragma once

// ?���H?�O��
enum EnumSelectResult
{
	OnePlayer = 1,	// 1->1?�H?
	TwoPlayer,		// 2->2?�H?
	Custom,			// 3->��???��
	Error			// 4
};

/**
	�H?�O��??����?��?
*/
void selelct_panel_init();

/**
	����̤���H???
*/
EnumSelectResult show_select_panel();