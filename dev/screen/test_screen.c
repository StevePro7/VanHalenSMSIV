#include "test_screen.h"
#include "..\engine\asm_manager.h"
#include "..\engine\cursor_manager.h"
#include "..\engine\enum_manager.h"
#include "..\engine\font_manager.h"
#include "..\engine\input_manager.h"
#include "..\engine\record_manager.h"
#include "..\engine\riff_manager.h"
#include "..\engine\storage_manager.h"
#include "..\engine\scroll_manager.h"
#include "..\engine\timer_manager.h"
#include "..\devkit\_sms_manager.h"

static void load_record();

void screen_test_screen_load()
{
	// TODO delete
	struct_record_object *ro = &global_record_object;
	ro->record_album_index = 0;

	//engine_font_manager_draw_text( "TEST SCREEN...", 10, 5 );
	
	// TODO initialize at begin.
	engine_riff_manager_init();

	load_record();
	//engine_riff_manager_play( 0 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	struct_record_object *ro = &global_record_object;
	unsigned char input1;
	//unsigned char input2;
	
	input1 = engine_input_manager_hold( input_type_fire1 );
	//input2 = engine_input_manager_hold( input_type_fire2 );
	
	if( input1 )
	{
		//engine_font_manager_draw_text( "SAMPLE 0", 10, 10 );
		engine_riff_manager_play( ro->record_album_index );
	
		//engine_font_manager_draw_text( "SAMPLE 1", 10, 11 );
		//engine_riff_manager_play( 1 );
	}

	*screen_type = screen_type_test;
}

static void load_record()
{
	devkit_SMS_displayOff();
	engine_asm_manager_clear_VRAM();
	engine_record_manager_load();
	devkit_SMS_displayOn();
}

//void screen_test_screen_update( unsigned char *screen_type )
//{
//	unsigned char input1;
//	//unsigned char input2;
//
//	input1 = engine_input_manager_hold( input_type_fire1 );
//	//input2 = engine_input_manager_hold( input_type_fire2 );
//
//	if( input1 )
//	{
//		//engine_font_manager_draw_text( "SAMPLE 0", 10, 10 );
//		//engine_riff_manager_play( 0 );
//
//		//engine_font_manager_draw_text( "SAMPLE 1", 10, 11 );
//		//engine_riff_manager_play( 1 );
//	}
//
//	*screen_type = screen_type_test;
//}