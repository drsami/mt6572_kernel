#include <linux/module.h>
#include "partition_define.h"
struct excel_info PartInfo[PART_NUM]={
			{"preloader",6291456,0x0, EMMC, 0,BOOT_1},
			{"mbr",524288,0x600000, EMMC, 0,USER},
			{"ebr1",524288,0x680000, EMMC, 1,USER},
			{"pro_info",3145728,0x700000, EMMC, 0,USER},
			{"nvram",5242880,0xa00000, EMMC, 0,USER},
			{"protect_f",10485760,0xf00000, EMMC, 2,USER},
			{"protect_s",10485760,0x1900000, EMMC, 3,USER},
			{"seccfg",131072,0x2300000, EMMC, 0,USER},
			{"uboot",393216,0x2320000, EMMC, 0,USER},
			{"bootimg",6291456,0x2380000, EMMC, 0,USER},
			{"recovery",6291456,0x2980000, EMMC, 0,USER},
			{"sec_ro",262144,0x2f80000, EMMC, 0,USER},
			{"misc",524288,0x2fc0000, EMMC, 0,USER},
			{"logo",3145728,0x3040000, EMMC, 0,USER},
			{"expdb",10485760,0x3340000, EMMC, 0,USER},
			{"android",681574400,0x3d40000, EMMC, 4,USER},
			{"cache",394264576,0x2c740000, EMMC, 5,USER},
			{"usrdata",1388314624,0x43f40000, EMMC, 6,USER},
			{"fat",0,0x96b40000, EMMC, 7,USER},
			{"bmtpool",22020096,0xFFFF00a8, EMMC, 0,USER},
 };
EXPORT_SYMBOL(PartInfo);

#ifdef  MTK_EMMC_SUPPORT
struct MBR_EBR_struct MBR_EBR_px[MBR_COUNT]={
	{"mbr", {1, 2, 3, 4, }},
	{"ebr1", {5, 6, 7, }},
};

EXPORT_SYMBOL(MBR_EBR_px);
#endif

