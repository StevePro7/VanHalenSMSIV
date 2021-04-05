#include "test_screen.h"
#include "..\engine\enum_manager.h"
#include "..\engine\font_manager.h"
#include "..\engine\input_manager.h"
#include "..\engine\riff_manager.h"

void screen_test_screen_load()
{
	engine_font_manager_draw_text( "TEST SCREEN 1024 KB", 10, 5 );
	engine_riff_manager_init();
}

void screen_test_screen_update( unsigned char *screen_type )
{
	unsigned char input1;
	//unsigned char input2;

	input1 = engine_input_manager_hold( input_type_fire1 );
	//input2 = engine_input_manager_hold( input_type_fire2 );

	if( input1 )
	{
		//engine_font_manager_draw_text( "SAMPLE 0", 10, 10 );
		//engine_riff_manager_play( 0 );

		//engine_font_manager_draw_text( "SAMPLE 1", 10, 11 );
		//engine_riff_manager_play( 1 );
	}

	*screen_type = screen_type_test;
}
