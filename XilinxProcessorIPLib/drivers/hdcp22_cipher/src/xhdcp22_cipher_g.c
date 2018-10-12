/*******************************************************************
*
* Copyright (C) 2010-2015 Xilinx, Inc. All rights reserved.
*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the "Software"), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
*
*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*
*
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xhdcp22_cipher.h"

/*
* The configuration table for devices
*/

XHdcp22_Cipher_Config XHdcp22_Cipher_ConfigTable[] =
{
#if XPAR_XHDCP22_CIPHER_NUM_INSTANCES
	{
		XPAR_HDMI_RX_SS_HDCP22_RX_SS_V_HDCP22_CIPHER_RX_0_DEVICE_ID,
		XPAR_HDMI_RX_SS_HDCP22_RX_SS_V_HDCP22_CIPHER_RX_0_CPU_BASEADDR
	},
	{
		XPAR_HDMI_TX_SS_HDCP22_TX_SS_V_HDCP22_CIPHER_TX_0_DEVICE_ID,
		XPAR_HDMI_TX_SS_HDCP22_TX_SS_V_HDCP22_CIPHER_TX_0_CPU_BASEADDR
	}
#endif
};