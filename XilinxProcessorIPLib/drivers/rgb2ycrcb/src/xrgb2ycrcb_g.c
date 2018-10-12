
/*******************************************************************
*
Copyright 1986-2014 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*

*******************************************************************************/



#include "xparameters.h"
#include "xrgb2ycrcb.h"

/*
* The configuration table for devices
*/

XRgb2YCrCb_Config XRgb2YCrCb_ConfigTable[] =
{
	{
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_DEVICE_ID,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_BASEADDR,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_HIGHADDR,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_S_AXIS_VIDEO_FORMAT,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_M_AXIS_VIDEO_FORMAT,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_HAS_DEBUG,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_HAS_INTC_IF,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_MAX_COLS,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_ACTIVE_COLS,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_ACTIVE_ROWS,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_HAS_CLIP,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_HAS_CLAMP,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_ACOEF,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_BCOEF,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CCOEF,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_DCOEF,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_YOFFSET,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CBOFFSET,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CROFFSET,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_YMAX,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_YMIN,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CBMAX,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CBMIN,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CRMAX,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_CRMIN,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_S_AXI_CLK_FREQ_HZ,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_STANDARD_SEL,
		XPAR_FMC_SENSOR_INPUT_V_RGB2YCRCB_1_OUTPUT_RANGE
	},
	{
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_DEVICE_ID,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_BASEADDR,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_HIGHADDR,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_S_AXIS_VIDEO_FORMAT,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_M_AXIS_VIDEO_FORMAT,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_HAS_DEBUG,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_HAS_INTC_IF,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_MAX_COLS,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_ACTIVE_COLS,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_ACTIVE_ROWS,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_HAS_CLIP,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_HAS_CLAMP,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_ACOEF,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_BCOEF,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CCOEF,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_DCOEF,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_YOFFSET,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CBOFFSET,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CROFFSET,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_YMAX,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_YMIN,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CBMAX,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CBMIN,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CRMAX,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_CRMIN,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_S_AXI_CLK_FREQ_HZ,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_STANDARD_SEL,
		XPAR_HDMI_OUTPUT_V_RGB2YCRCB_1_OUTPUT_RANGE
	}
};

