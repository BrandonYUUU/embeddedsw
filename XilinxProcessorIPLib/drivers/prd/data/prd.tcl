###############################################################################
#
# Copyright (C) 2016 Xilinx, Inc.  All rights reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
# WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
# OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
#
# Except as contained in this notice, the name of the Xilinx shall not be used
# in advertising or otherwise to promote the sale, use or other dealings in
# this Software without prior written authorization from Xilinx.
#
###############################################################################
###############################################################################
#
# Modification History
#
#  Ver   Who      Date       Changes
# ----- ----  ----------  -----------------------------------------------
#  1.0   ms    07/14/16     FirstRelease
#  1.1   ms    01/16/17     Updated the parameter naming from
#                           XPAR_PR_DECOUPLER_NUM_INSTANCES to
#                           XPAR_XPRD_NUM_INSTANCES to avoid compilation
#                           failure for XPAR_PR_DECOUPLER_NUM_INSTANCES as
#                           the tools are generating XPAR_XPRD_NUM_INSTANCES
#                           in the generated xprd_g.c for fixing MISRA-C
#                           files. This is a fix for CR-966099 based on the
#                           update in the tools.
#
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
    ::hsi::utils::define_zynq_include_file $drv_handle "xparameters.h" "XPRD" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR"

    ::hsi::utils::define_zynq_config_file $drv_handle "xprd_g.c" "XPrd" "DEVICE_ID" "C_BASEADDR"

    ::hsi::utils::define_zynq_canonical_xpars $drv_handle "xparameters.h" "PR_DECOUPLER" "DEVICE_ID" "C_BASEADDR"

}