/* All of the definitions in this file are based on the information provided in the BT81x series Programming Guide
 * The programming guide can be found at: https://www.mouser.com/catalog/additional/BRT_AN_033_BT81XSeriesProgrammingGuidev2.0.pdf
 */


/*
 * Addresses of different sections of BT817 internal memory
 * More details can be found in Section 2.1 "Address Space" of the BT81x Programming Guide
 */
#define RAM_G 0x000000
#define ROM_FONT 0x1E0000
#define ROM_FONTROOT 0x2FFFFC
#define RAM_DL 0x300000
#define RAM_REG 0x302000
#define RAM_CMD 0x308000
#define RAM_ERR_REPORT 0x309800

/*
 * The following are addresses of the registers described in Section 3 of the programming guide
 * They consist of an offset added to the RAM_REG address defined above
 * These following constants ALREADY INCLUDE the ram_reg address added to the offset, so you DO NOT need to add them to RAM_REG
 */

//Graphics 
/**
 * TODO!!
 */
