#pragma once

#define USE_GENERIC_MAIN
#undef REMOVE_LEADING_ZERO_FROM_TIME  /* 12 hour display will not have a leading "0" if this is defined */
#undef FONT_NAME
#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME
//#define USE_TIME_MACHINE  // NOTE mixing with DEBUG_TIME doesn't make sense

#define BG_IMAGE RESOURCE_ID_IMAGE_MAIN
#define IMAGE_RES_X 98  /* NOTE if image res changes - this needs to change too! */
#define IMAGE_RES_Y 132  /* NOTE if image res changes - this needs to change too! */


/*
// Opposite to default if not set
TODO change bitmap color via config
#define DEFAULT_TIME_COLOR GColorBlack
#define DEFAULT_BACKGROUND_COLOR GColorWhite
*/

#define BT_DISCONNECT_IMAGE RESOURCE_ID_IMAGE_BT_DISCONNECT

#define QUIET_TIME_IMAGE RESOURCE_ID_IMAGE_QUIET_TIME
#define QUIET_TIME_IMAGE_GRECT GRect(3, 60, 17, 17)  // 17x17 image

//#define NO_BATTERY
//#define NO_DATE

//#define FONT_SYSTEM_NAME FONT_KEY_BITHAM_30_BLACK /* works well if 144x144 image is used above, little wasted space */

#define BAT_FMT_STR "%d%%"

//#define DATE_FMT_STR "%b\n%d"  /* TODO review %d for day */
//#define MAX_DATE_STR "00\nAug"  /* if custom version of DATE_FMT_STR is set, MAX_DATE_STR  needs to be updated too */
#define DATE_FMT_STR "%a\n%b\n%d"  /* TODO review %d for day */
#define MAX_DATE_STR "Thu\n00\nAug"  /* if custom version of DATE_FMT_STR is set, MAX_DATE_STR  needs to be updated too */



//#define QUIET_TIME_IMAGE RESOURCE_ID_IMAGE_QUIET_TIME
//#define QUIET_TIME_IMAGE_GRECT GRect(20, 20, 20, 20)  // Example assumes a 20x20 image

#ifdef PBL_ROUND /* 180x180 */
    /* Image at top of screen, centered horizontally */
    #define BG_IMAGE_GRECT GRect((180 - IMAGE_RES_X) / 2, 0, IMAGE_RES_X, IMAGE_RES_Y)

    #define CLOCK_POS GRect(0, 120, 180, 180) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */

/*TODO center/move right*/
    #define BT_POS GRect(0, 100, 180, 180) /* probably taller than really needed */

    #define DATE_ALIGN GTextAlignmentRight
    //#define DATE_POS GRect(115, 90, 50, 60) /* probably taller than really needed */
    //#define DATE_POS GRect(125, 70, 50, 60) /* probably taller than really needed */
    #define DATE_POS GRect(120, 70, 50, 60) /* probably taller than really needed */
    #undef  DATE_FMT_STR
    #define DATE_FMT_STR "%d\n%b\n%a"

    #define BAT_ALIGN GTextAlignmentLeft
    #define BAT_POS GRect(10, 90, 180, 180) /* probably taller than really needed */
#else /* PBL_RECT 144x168*/
    /* Clock at top of screen, Image below and centered horizontally */
    #define BG_IMAGE_GRECT GRect((144 - IMAGE_RES_X) / 2, 35,  IMAGE_RES_X, IMAGE_RES_Y)  // use same size as image. On Aplite can determine this at runtime but not Basalt

    //#define CLOCK_POS GRect(0, 136, 144, 168) /* bottom of screen for FONT_KEY_BITHAM_30_BLACK */
    #define CLOCK_POS GRect(0, -15, 144, 168) /* bottom of screen for FONT_KEY_ROBOTO_BOLD_SUBSET_49 with one pixel border on bottom */

    //#define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 138, 20, 30)
    #define BT_DISCONNECT_IMAGE_GRECT GRect(144 - 20, 168 - (2 * 30 + 4), 20, 30)

    #define BT_POS GRect(0, 120, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 35, 144, 168) /* probably taller than really needed */
    #define BAT_POS GRect(0, 35, 144, 168) /* probably taller than really needed */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
