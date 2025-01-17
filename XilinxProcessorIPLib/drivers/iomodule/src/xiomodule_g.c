/******************************************************************************
* Copyright (C) 2011 - 2021 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xiomodule_g.c
* @addtogroup iomodule_v2_13
* @{
*
* This file contains a configuration table that specifies the configuration of
* interrupt controller devices in the system.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -----------------------------------------------
* 1.00a sa   07/15/11 First release
* </pre>
*
* @internal
*
* This configuration table contains entries that are modified at runtime
* by the driver. The EDK tools populate the table with default values for the
* vector table and the options flag. These default values can be, and are,
* overwritten at runtime by the driver.  This is a deviation from most drivers'
* configuration tables in that most are created statically by the tools and
* are never modified during runtime.  Most tables reflect only the hardware
* configuration of the device. This IOModule configuration table contains
* software information in addition to hardware configuration.  The IOModule
* configuration table should be considered an exception to the usage of the
* configuration table rather than the norm.
*
******************************************************************************/

/***************************** Include Files *********************************/

#include "xiomodule.h"
#include "xparameters.h"

/************************** Constant Definitions *****************************/


/**************************** Type Definitions *******************************/


/***************** Macros (Inline Functions) Definitions *********************/


/************************** Function Prototypes ******************************/


/************************** Variable Prototypes ******************************/

/**
 * This table contains configuration information for each iomodule device
 * in the system. The XIOModule driver must know when to acknowledge the
 * interrupt. The entry which specifies this as a bit mask where each bit
 * corresponds to a specific interrupt.  A bit set indicates to ack it before
 * servicing it. Generally, acknowledge before service is used when the
 * interrupt signal is edge-sensitive, and after when the signal is
 * level-sensitive.
 *
 * Refer to the XIOModule_Config data structure in xiomodule.h for
 * details on how this table should be initialized.
 */
XIOModule_Config XIOModule_ConfigTable[XPAR_XIOMODULE_NUM_INSTANCES] = {
	{
	 XPAR_IOMODULE_0_DEVICE_ID,	    /* Unique ID of device */
	 XPAR_IOMODULE_0_REG_BASEADDR,	    /* Unique identifier */
	 XPAR_IOMODULE_0_IO_BASEADDR,	    /* IO Bus Base Address */
	 XPAR_IOMODULE_0_INTC_HAS_FAST,	    /* Fast interrupt enabled */
	 XPAR_IOMODULE_0_INTC_BASE_VECTORS, /* Relocatable base vector */
	 XPAR_IOMODULE_0_INTC_ADDR_WIDTH,   /* Width of vector address */
	 XPAR_IOMODULE_0_ACK_BEFORE,	    /* Ack before or after service */
	 0,				    /* Device options */
	 100000000,			    /* Input clock frequency (Hz) */
	 115200,			    /* Current baud rate */
	 {0, 0, 0, 0},			    /* PIT timer used */
	 {0, 0, 0, 0},			    /* PIT timer counter size */
	 {0, 0, 0, 0},			    /* PIT prescaler */
	 {0, 0, 0, 0},			    /* PIT readable */
	 {0, 0, 0, 0}			    /* GPO initial value */
	 }
	,
	{
	 XPAR_IOMODULE_1_DEVICE_ID,	    /* Unique ID of device */
	 XPAR_IOMODULE_1_REG_BASEADDR,	    /* Unique identifier */
	 XPAR_IOMODULE_1_IO_BASEADDR,	    /* IO Bus Base Address */
	 XPAR_IOMODULE_1_INTC_HAS_FAST,	    /* Fast interrupt enabled */
	 XPAR_IOMODULE_1_INTC_BASE_VECTORS, /* Relocatable base vector */
	 XPAR_IOMODULE_1_ACK_BEFORE,	    /* Ack before or after service */
	 0,				    /* Device options */
	 100000000,			    /* Input clock frequency (Hz) */
	 115200,			    /* Current baud rate */
	 {0, 0, 0, 0},			    /* PIT timer used */
	 {0, 0, 0, 0},			    /* PIT timer counter size */
	 {0, 0, 0, 0},			    /* PIT prescaler */
	 {0, 0, 0, 0},			    /* PIT readable */
	 {0, 0, 0, 0}			    /* GPO initial value */
	 }
};
/** @} */
