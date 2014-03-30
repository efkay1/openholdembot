#ifndef INC_STRUCTS_DEFINES_H
#define INC_STRUCTS_DEFINES_H

#include "../CTransform/hash/stdint.h"

#define VERSION_NUMBER				1.15
#define VERSION_TEXT				"1.1.5"  // change version number in OpenHoldem.rc also, when needed

// Error Codes
#define SUCCESS						0
#define ERR_EOF						1
#define ERR_SYNTAX					2
#define ERR_VERSION					3
#define ERR_NOTMASTER				4
#define ERR_HASH_COLL				5
#define ERR_REGION_SIZE				6
#define ERR_UNK_LN_TYPE				7
#define ERR_INV_HASH_TYPE			8

// WH SUIT Defs
#define WH_SUIT_CLUBS		1
#define WH_SUIT_DIAMONDS	2
#define WH_SUIT_HEARTS		3
#define WH_SUIT_SPADES		4

// Colors
// (more color codes here: http://htmlhelp.com/cgi-bin/color.cgi)
#define	COLOR_RED		RGB(255,0,0)
#define	COLOR_BLACK		RGB(0,0,0)
#define	COLOR_BLUE		RGB(0,0,255)
#define	COLOR_GREEN		RGB(0,255,0)
#define	COLOR_WHITE		RGB(255,255,255)
#define COLOR_LT_GRAY	RGB(212,208,200)
#define COLOR_GRAY		RGB(182,182,182)
#define COLOR_YELLOW	RGB(255,255,0)

// Bitmap display
#define BITMAP_WIDTH		344
#define BITMAP_HEIGHT		164

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


struct STableList {
	HWND		hwnd;
	CString		title;
	CString		path;
	RECT		crect;
};


#endif /* INC_STRUCTS_DEFINES_H */